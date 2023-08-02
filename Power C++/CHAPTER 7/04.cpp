// 레퍼런스 타입의 매개 변수로 정수 변수를 받아서 값을 두 배로 만드는 make_double을 작성하여 보자.
#include <iostream>
using namespace std;

void make_double(int &x);

int main(){
    int num;

    cout << "숫자 입력: ";
    cin >> num;

    make_double(num);

    cout << num << endl;

    return 0;
}

void make_double(int &x){
    x *= 2;
}