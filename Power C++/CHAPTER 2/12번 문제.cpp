// 주행 거리와 주행 시간을 입력받아서 차의 평균 속도를 계산하여 보자. 
// 주행 거리는 km 단위로 입력받고 주행 시간은 분과 초로 나누어서 입력받는다.
#include <iostream>

int main(){
    float distance;
    float minute;
    float second;
    float speed;

    std::cout << "달린 거리를 입력하시오(kmh):";
    std::cin >> distance;
    std::cout << "달린 시간 중에서 분을 입력하시오: ";
    std::cin >> minute;
    std::cout << "달린 시간 중에서 초를 입력하시오: ";
    std::cin >> second;

    speed = distance / (minute * 60 + second) * 3600;

    std::cout << "평균 속도는 " << speed << "km/h 입니다." << std::endl;

    return 0;

}