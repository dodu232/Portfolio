// cm로 표현된 키를 입력하여 피트와 인치로 변환하는 프로그램을 작성해보자. 
//1피트는 12인치이고 1인치는 2.54cm이다.
#include <iostream>

int main(){
    const int FEET = 12;
    const float INCH = 2.54;
    float height;

    std::cout << "키를 입력하시오. ";
    std::cin >> height;

    int feet = height / (INCH * FEET);
    float inch = height / INCH - feet * FEET;

    std::cout << height << "cm는 " << feet << "피트 " << inch << "인치 입니다." << std::endl;

    return 0;
}
