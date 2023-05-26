// 섭씨 온도를 절대 온도로 변환하는 프로그램을 작성하라. 다음과 같은 변환식을 사용하라.
// 절대 온도 = 섭씨 온도 + 273.16
#include <iostream>

int main(){
    const float F = 273.16;
    float temperature;

    std::cout << "섭씨 온도를 입력하시오: ";
    std::cin >> temperature;
    std::cout << "절대 온도는 " << temperature + F << "입니다." << std::endl;

    return 0;
}