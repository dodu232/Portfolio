// 0과 1로 되어있는 이진수를 입력받아서 10진수로 변환하는 프로그램을 작성하여 보자.
// 여기서 2진수를 문자열로 입력받는 것이 아니라 정수로 입력받는다고 가정하라.
// 따라서 나머지 연산자 %와 나누기 연산자 /를 이용하면 진수의 각 자릿수를 분리할 수 있다.
#include <iostream>
using namespace std;

int main(){
    int bNum, dNum;

    cout << "이진수 입력: " ;
    cin >> bNum;

    int x = 1;
    int cnt = 1;
    while(bNum / x > 0){
        int temp = bNum % (x * 10) / x;

        if(temp % 2 == 1){
            int a = 1;
            for(int i=1; i<cnt; i++){
                a *= 2;
            }
            dNum += a;
        }
        cnt++;
        x *= 10;
    }

    cout << bNum << "의 10진수는 " << dNum << "입니다." << endl;

    return 0;
}