// 1번 문제의 get_input() 함수를 중복 정의하여 보자. 사용자가 입력한 두개의 정수값을 반환할 수 있도록
// get_input()을 중복 정의하라. 여러 개의 값을 반환할 때에 레퍼런스 타입을 사용하면 장점이 있는가?#include <iostream>
#include <iostream>
using namespace std;

void get_input(int &x, int &y);

int main(){
    int num1, num2;

    get_input(num1, num2);

    cout << num1 << ", " << num2 << endl;

    return 0;
}

void get_input(int &x, int &y){
    cout << "첫 번째 정수 값 입력: ";
    cin >> x;

    cout << "두 번째 정수 값 입력: ";
    cin >> y;
}