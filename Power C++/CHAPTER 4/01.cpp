// 주어진 정수의 약수를 모두 찾아내는 함수 get_divisor()를 작성하여 보라. 만약 8이 주어지면 1, 2, 4, 8을 화면에 출력하여야 한다.
// 이 함수를 테스트하기 위한 main()를 작성하라.
#include <iostream>
using namespace std;

void get_divisor(int x);

int main(){
    int num;

    cout << "숫자 입력: ";
    cin >> num;
    get_divisor(num);

    return 0;
}

void get_divisor(int x){
    for(int i=1; i<=x; i++){
        if(x % i == 0){
            cout << i << endl;
        }
    }
}