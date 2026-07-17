# ACR 사전 충돌 예방 시스템

Gazebo Harmonic, ROS 2 Jazzy, `ros_gz_bridge`, RViz2를 이용한 2축 전기차 충전 로봇 시뮬레이션이다. Service 차량 인증, Action 기반 충전 궤적, Topic LiDAR 감시, Parameter 안전거리, 충돌 예방 정지(CPS)를 포함한다.

## 패키지 구조

하나의 워크스페이스 안에 두 패키지가 있다.

```text
acr_ws/
└── src/
    ├── acr_interfaces/   # AuthVehicle.srv, ChargeRobot.action 생성
    └── acr_core/          # Gazebo, 노드, launch, RViz, 모델
```

`acr_interfaces`는 실행 노드가 아니라 Service·Action 타입을 생성하는 인터페이스 전용 패키지다. `colcon build`가 의존성 순서에 따라 두 패키지를 함께 빌드하며, 실행할 때는 `acr_core`의 통합 launch만 사용한다.

## 빌드

```bash
cd ~/acr_ws
source /opt/ros/jazzy/setup.bash
colcon build
source install/setup.bash
```



## 정상 충전 시나리오

```bash
ros2 launch acr_core acr_system.launch.py
```

Gazebo, 자체 차량, 2축 ACR, ROS-Gazebo bridge, ACR_Node, CAR_Node, RViz2가 함께 실행된다. 현재 launch 기본값은 발표용으로 다음과 같다.

```text
car_start_delay_sec    = 8.0 s
auth_request_delay_sec = 3.0 s
auth_response_delay_sec = 2.0 s
action_goal_delay_sec  = 4.0 s
control_period_ms      = 30 ms
```

RViz에는 RobotModel, 파란 `/scan`, 차량 Marker, 상태 HUD, LiDAR 안전 반경이 표시된다. 터미널 로그 색상은 Service(청록), Action(자주), Feedback(노랑), Topic(초록), Parameter(파랑), CPS(빨강)으로 구분한다.

## 충돌 예방 정지(CPS) 시나리오

```bash
ros2 launch acr_core acr_system.launch.py spawn_obstacle:=true obstacle_delay_sec:=5.0
```

정상 시나리오와 별도의 새 launch에서 실행한다. 5초 뒤 사람형 빨간 장애물이 차량 쪽 충전 경로에 생성된다. LiDAR가 `safety_distance` 이내의 거리를 감지하면 ACR_Node가 두 관절의 현재 위치를 hold하고 충돌 예방 정지(CPS) 상태로 Action을 `ABORTED`로 종료한다.

## 안전거리 조정

실행 전 launch 인자로 변경할 수 있다.

```bash
ros2 launch acr_core acr_system.launch.py safety_distance:=0.15
```

또는 실행 중 동적 파라미터로 변경한다.

```bash
ros2 param set /acr_node safety_distance 0.15
```

기본 안전거리 파라미터는 `0.15 m`이다. 실행 중에도 `ros2 param set`으로 즉시 바꿀 수 있다.

## 통신 확인 명령

```bash
ros2 node list
ros2 service type /auth_vehicle
ros2 action info /charge_robot
ros2 topic echo /acr/status
ros2 topic echo /acr/progress
ros2 param get /acr_node safety_distance
```

| 방식 | 이름 | 역할 |
| --- | --- | --- |
| Service | `/auth_vehicle` | VIN 차량 인증 |
| Action | `/charge_robot` | 충전 이동 Goal, Feedback, Result |
| Topic | `/scan` | Gazebo LiDAR → CPS 판단 |
| Topic | `/joint_states` | 실제 관절 상태 → 진행률·정지 기준 |
| Topic | `/cmd_pos`, `/joint2_cmd_pos` | ROS → Gazebo 관절 명령 |
| Parameter | `/acr_node safety_distance` | CPS 감지 임계거리 |


