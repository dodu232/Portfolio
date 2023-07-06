// 주어진 정수가 소수인지를 검사하는 함수 prime()을 작성하라.
// 이 함수를 이용하여 1부터 100 사이에 존재하는 소수들을 모두 출력하라.
#include <iostream>
using namespace std;

void prime();

int main(){
    prime();

    return 0;
}

void prime(){
    for(int i=1; i<=100; i++){
        int cnt = 0;
        for(int j=1; j<i; j++){
            if(i % j == 0){
                cnt++;
            }
        }
        if(cnt == 1){
            cout << i << endl;
        }
    }
}