// 10000보다 작은 정수를 입력받아서 이것을 천의 자리, 백의 자리, 십의 자리, 일의 자리로 분리하여 출력하는 프로그램을 작성하라.
// 즉 사용자가 정수 5623을 입력하면 5, 6, 2, 3을 차례로 출력하면 된다. 이것은 나눗셈과 나머지 연산을 사용하면 된다.
#include <iostream>

int main(){
    int num;
    std::cout << "정수를 입력하시오. ";
    std::cin >> num;

    int thousand = num / 1000; 
    int hundred = num % 1000 / 100;
    int ten = num % 100 / 10;
    int one = num % 10;

    std::cout << "천의 자리: " << thousand << std::endl;
    std::cout << "백의 자리: " << hundred << std::endl;
    std::cout << "십의 자리: " << ten << std::endl;
    std::cout << "일의 자리: " << one << std::endl;

    return 0;
}
