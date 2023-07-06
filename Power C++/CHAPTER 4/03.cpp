// 정수 n과 k를 받아서 n^k승을 계산하는 함수 ipower를 작성한다.
// 이 함수를 호출하여 3^0부터 3^10까지의 값을 출력하는 프로그램을 작성하라
#include <iostream>
using namespace std;

void ipower(int n, int k);

int main(){
    ipower(3, 10);

    return 0;
}

void ipower(int n, int k){
    for(int i=0; i<=k; i++){
        int temp = 1;
        for(int j=1; j<=i; j++){
            temp *= n;
        }
        cout << n << "^" << i << " = " << temp << endl;
    }
}