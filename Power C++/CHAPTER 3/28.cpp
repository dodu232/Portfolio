// 1. for문을 이용해 팩토리얼 값을 출력하는 프로그램 작성
// 2. while문을 이용해 팩토리얼 값을 출력하는 프로그램 작성
#include <iostream>
using namespace std;

int main(){
    int num = 20;
    cout << "----for----" << endl;
    for(int i=1; i<=num; i++){
        int temp = 1;
        for(int j=1; j<=i; j++){
            temp *= j;
        }
        cout << i << ": " << temp << endl;
    }

    cout << "----while----" << endl;
    int cnt = 1;
    while(cnt <= num){
        int temp = 1;
        int cnt2 = 1;
        while(temp <= cnt){
            temp *= cnt2;
            cnt2++;
        }
        cout << cnt << ": " << temp << endl;
        cnt++;
    }
}