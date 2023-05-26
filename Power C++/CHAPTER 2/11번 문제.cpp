// 원기둥의 부피를 구하는 프로그램을 작성하여 보자. 원기둥 밑면의 반지름과 높이를 입력받아서 부피를 계산한다.
#include <iostream>

int main(){
    const float FI = 3.1415;
    float radius;
    float height;
    float volume;

    std::cout << "원기둥 밑면의 반지름을 입력하시오: ";
    std::cin >> radius;
    std::cout << "원기둥의 높이를 입력하시오: ";
    std::cin >> height;

    volume = radius * radius * FI * height;

    std::cout << std::fixed;
    std::cout.precision(2);

    std::cout << "원기둥의 부피는 " << volume << "입니다." << std::endl;

    return 0;

}