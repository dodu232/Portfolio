// 2~100 사이에 있는 모든 소수를 찾는 프로그램을 작성하라.
#include <iostream>
using namespace std;

int main(){
    for(int i=2; i<101; i++){
        int cnt = 0;
        for(int j=1; j<i; j++){
            if(i % j  == 0){
                cnt++;
            }
        }
        if(cnt == 1){
            cout << i << endl;
        }
    }
    return 0;
}
