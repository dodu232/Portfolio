// 피보나치 수열은 다음과 같이 정의되는 수열이다.
// f0=0, f1=1, f(i+1)=f(i)+f(i-1) (i=1, 2, ...)
// 피보나치 수열에서는 앞의 2개의 원소를 합하여 뒤의 원소를 만든다. 
// 피보나치 수열은 컴퓨터에서도 탐색 문제 등에 사용되기도 한다. 피보나치 수열을 생성하여 출력하는 프로그램을 작성하여 보자.
#include <iostream>
using namespace std;

int main(){
    int num1 = 0;
    int num2 = 1;
    int cnt; 
    cout << "몇 번째 항까지 구할까요: ";
    cin >> cnt;
    for(int i=0; i<cnt; i++){
        int temp = num1 + num2;
        num1 = num2;
        num2 = temp;
        cout << temp;
        if(i < cnt-1){
            cout << ", ";
        }
    }
}