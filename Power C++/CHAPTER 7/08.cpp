// 은행으로부터 대출받은 금액에 대한 이자를 계산하는 프로그램을 작성하여 보자. 사용자로부터
// 대출 금액과 이율을 get_input 함수를 통하여 입력받는다. get_input에서 레퍼런스 매개 변수를 사용하라.
// 원금을 상환하지 않고 이자만 낸다고 가정했을 경우에 한 달 이자를 계산하여 출력한다.
#include <iostream>
using namespace std;

void get_input(int &money, double &rate);

int main(){
    int money;
    double rate;
    double interest;

    get_input(money, rate);

    interest = money * (rate / 100);

    cout << "한달 이자는 " << interest << "원 입니다." << endl;

    return 0;
}

void get_input(int &money, double &rate){
    cout << "대출받은 금액: ";
    cin >> money;
    cout << "이율: ";
    cin >> rate;
}