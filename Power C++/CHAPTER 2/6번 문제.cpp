// 킬로그램 단위의 무게를 파운드와 온스로 변환하는 프로그램을 작성해보자. 변환식은 다음과 같다.
// 킬로그램 = 2.2 파운드
// 파운드 = 16 온스
#include <iostream>

int main(){
    const float POUND = 2.2;
    const int OUNCE = 16;
    float weight;

    std::cout << "무게를 입력하시오. ";
    std::cin >> weight;

    double pound = weight * 2.2;
    double ounce = pound * 16;

    std::cout << weight << "킬로그램은 " << pound << "파운드 입니다." << std::endl;
    std::cout << weight << "킬로그램은 " << ounce << "온스 입니다." << std::endl;

    return 0;
}
