// 사용자가 월급과 소득세율을 인자로 주면 월급에 소득세를 추가하여서 반환하는 함수 add_tax를 작성하여
// 보자. 월급은 레퍼런스 타입으로 전달되며 소득세율이 주어지지 않으면 20%를 디폴드 값으로 하라
#include <iostream>
using namespace std;

void add_tax(int &salary, double rate = 20);

int main(){
    int salary;
    double rate;

    cout << "월급 입력: ";
    cin >> salary;

    cout << "소득세율 입력: ";
    cin >> rate;

    if(rate <= 0){
        add_tax(salary);
    } else {
        add_tax(salary, rate);
    }

    cout << salary << endl;

    return 0;
}

void add_tax(int &salary, double rate){
    salary += salary * (rate / 100);
}