import glm


let
  YAW = -90.0'f32
  PITCH = 0.0'f32
  SPEED = 1.5'f32
  SENSITIVITY = 0.1'f32
  ZOOM = 45.0'f32


type
  Camera* = object
    # Camera attributes
    position*: vec3
    front*: vec3
    up*: vec3
    right*: vec3
    worldUp*: vec3
    # Eular angles
    yaw*: float
    pitch*: float
    # Camera options
    movementSpeed*: float
    mouseSensitivity*: float
    zoom*: float

  CameraMovement = enum
    FORWARD,
    BACKWARD,
    LEFT,
    RIGHT


proc newCamera*(position = vec3(0.0f, 0.0f, 0.0f), up = vec3(0.0f, 1.0f, 0.0f), yaw = YAW,
                pitch = PITCH, front = vec3(0.0f, 0.0f, -1.0f), speed = SPEDD,
                sensitivity = SENSITIVITY, speed = SPEED): Camera =
    result.position = position
    result.up = up
    result.yaw = yaw
    result.pitch = pitch
    result.front = front
    result.speed = speed
    result.sensitivity = sensitivity


proc updateCameraVectors()
