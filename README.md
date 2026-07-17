# ACR 사전 충돌 예방 시스템

Gazebo Harmonic, ROS 2 Jazzy, `ros_gz_bridge`, RViz2를 이용한 2축 전기차 충전 로봇 시뮬레이션이다. Service 차량 인증, Action 기반 충전 궤적, Topic LiDAR 감시, Parameter 안전거리, MRM 긴급 정지를 포함한다.

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

Gazebo, 자체 차량, 2축 ACR, ROS-Gazebo bridge, ACR_Node, CAR_Node, RViz2가 함께 실행된다. RViz에는 RobotModel과 파란 `/scan`이 표시되고, CAR_Node 터미널에는 `Moving to charging port` 진행률과 성공 결과가 출력된다.

## MRM 시나리오

```bash
ros2 launch acr_core acr_system.launch.py spawn_obstacle:=true obstacle_delay_sec:=5.0
```

5초 뒤 사람형 빨간 Box가 차량 쪽 충전 경로에 생성된다. LiDAR가 `safety_distance` 이내의 거리를 감지하면 ACR_Node가 두 관절의 현재 위치를 hold하고 Action을 `ABORTED`로 종료한다.

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
