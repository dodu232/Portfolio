// 사용자로부터 정수값을 받아서 반환하는 get_input() 함수를 작성하여 보자. get_input은 레퍼런스 타입의
// 매개 변수를 통하여 값을 반환한다. 예를 들어서 변수 x에 사용자가 입력한 정수값을 저장하고
// 싶으면 다음과 같이 호출한다.
#include <iostream>
using namespace std;

void get_input(int &x);

int main(){
    int num;

    get_input(num);

    cout << num << endl;

    return 0;
}

void get_input(int &x){
    cout << "정수 값 입력: ";
    cin >> x;
}