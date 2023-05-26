// 2년간의 이자를 계산하는 프로그램을 작성하여 보자.
// 사용자로부터 예금액, 연이율을 입력받아서 이자를 계산한다. 이자는 복리로 계산된다고 가정하라.
// 즉 첫해의 이자는 예금액에 이율을 곱하면 되지만 둘째 해의 이자는 예금액과 첫해의 이자를 더한 액수에 이률을 곱하여야 한다.
#include <iostream>

int main(){
    int credit;
    float interest;

    std::cout << "예금액을 입력하시오: ";
    std::cin >> credit;
    std::cout << "연이율을 입력하시오(단위 퍼센트): ";
    std::cin >> interest;

    for(int i=0; i<2; i++){
        credit += credit * interest * 0.01;
    }

    std::cout << "2년 후의 예금액은 " << credit << "원 입니다." << std::endl;

    return 0;
}