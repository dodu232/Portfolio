// 조건 연산자 ?만을 이용하여 2차원 공간의 x좌표와 y좌표를 입력받아서 그 좌표가 속하는 사분면을 출력하는 프로그램을 작성하라.
#include <iostream>

int main(){
    int x, y;

    std::cout << "x좌표 입력: ";
    std::cin >> x;
    std::cout << "y좌표 입력: ";
    std::cin >> y;

    x > 0 ? (y > 0 ? std::cout << "제 1사분면" : std::cout << "제 4사분면") : (y > 0 ? std::cout << "제 2사분면" : std::cout << "제 3사분면");
    return 0;
}