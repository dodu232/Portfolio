// 구의 표면적과 체적을 구하는 프로그램을 작성하라.
// 구의 반지름은 실수로 입력된다. 아래의 공식을 사용하라.
// A = 4πr² 표면적
// V = 4/3πr³ 부피
#include <iostream>

int main(){
    const float FI = 3.14;
    float radius;

    std::cout << "반지름을 입력하시오. ";
    std::cin >> radius;

    float a = 4 * FI * radius * radius;
    float v = 4 * FI * radius * radius * radius / 3;

    std::cout << "반지름이 " << radius << "일 경우, 표면적은 " << a << "이고, 부피는 " << v << "입니다." << std::endl;
    return 0;
}