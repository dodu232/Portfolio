// 자동차의 연비를 계산하는 프로그램을 작성하여 보자.
// 사용자로부터 출발한 지점의 주행거리계의 눈금과 도착한 지점에서의 주행 거리계의 눈금을 입력받는다.
// 또한 사용한 연료의 양을 입력받는다. 자동차의 연비를 계산하여 화면에 출력한다.
#include <iostream>

int main(){
    int start, end, fuel;

    std::cout << "출발한 지점의 주행 거리계: ";
    std::cin >> start;
    std::cout << "도착한 지점의 주행 거리계: ";
    std::cin >> end;
    std::cout << "사용한 연료: ";
    std::cin >> fuel;

    float fuelEfficiency = (end - start) / 10.0;

    std::cout << "연비는 " << fuelEfficiency << "km/l 입니다." << std::endl;
    
    return 0;
}