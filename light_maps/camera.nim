import glm

let
  YAW = -90.0'f32
  PITCH = 0.0'f32
  SPEED = 0.05'f32
  SENSITIVITY = 0.1'f32
  ZOOM = 45.0'f32


type
  Camera* = object
    # Camera attributes
    position*: Vec3f
    front*: Vec3f
    up*: Vec3f
    worldUp*: Vec3f
    right*: Vec3f
    # Eular angles
    yaw*: float
    pitch*: float
    # Camera options
    movementSpeed*: float
    mouseSensitivity*: float
    zoom*: float

  CameraMovement* = enum
    FORWARD,
    BACKWARD,
    LEFT,
    RIGHT

proc updateCameraVectors*(camera: var Camera) =
  var
    front: Vec3f

  front.x = cos(radians(camera.yaw)) * cos(radians(camera.pitch))
  front.y = sin(radians(camera.pitch))
  front.z = sin(radians(camera.yaw)) * cos(radians(camera.pitch))
  camera.front = normalize(front)
  camera.right = normalize(cross(camera.front, camera.worldUp))
  camera.up = normalize(cross(camera.right, camera.front))

proc newCamera*(position = vec3(0.0f, 0.0f, 0.0f), up = vec3(0.0f, 1.0f, 0.0f), yaw = YAW,
                pitch = PITCH, front = vec3(0.0f, 0.0f, -1.0f), speed = SPEED,
                                       sensitivity = SENSITIVITY, zoom = ZOOM): Camera =
    result.position = position
    result.worldUp = up
    result.yaw = yaw
    result.pitch = pitch
    result.front = front
    result.movementSpeed = speed
    result.mouseSensitivity = sensitivity
    result.zoom = zoom
    result.updateCameraVectors()


proc viewMatrix*(camera: Camera): Mat4f =
  return lookAt(camera.position, camera.position + camera.front, camera.up)


proc processKeyboard*(camera: var Camera, direction: CameraMovement, deltaTime: float) =
  let velocity = camera.movementSpeed * deltaTime / 10.0f
  case direction:
    of FORWARD: camera.position = camera.position + camera.front * velocity
    of BACKWARD: camera.position = camera.position - camera.front * velocity
    of LEFT: camera.position = camera.position - camera.right * velocity
    of RIGHT: camera.position = camera.position + camera.right * velocity


proc processMouseMovement*(camera: var Camera, in_xoffset, in_yoffset: float, constrainPitch = true) =
  let
    xoffset = in_xoffset * camera.mouseSensitivity
    yoffset = in_yoffset * camera.mouseSensitivity

  camera.yaw += xoffset
  camera.pitch -= yoffset

  if constrainPitch:
    if camera.pitch > 89.0f:
      camera.pitch = 89.0f
    if camera.pitch < -89.0f:
      camera.pitch = -89.0f

  camera.updateCameraVectors()


proc processMouseScroll*(camera: var Camera, yoffset: float) =
  camera.zoom -= yoffset
  if camera.zoom <= 1.0f:
    camera.zoom = 1.0f
  if camera.zoom >= 45.0f:
    camera.zoom = 45.0f
