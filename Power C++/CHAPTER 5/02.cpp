// 10진수를 2진수로 변환하여 출력하는 프로그램을 작성하여 보자. 최대 64자리까지 변환이 가능하도록 하라. 
// 변환된 자리수를 저장하는데 배열을 사용하라. 10진수를 2로 나누어서 생성된 나머지를 역순으로 나타내면 2진수로 표현할 수 있다.
// 주어진 정수를 임의의 진법으로 변환할 수 있는 프로그램도 작성하여 보자.
#include <iostream>
#include <array>
using namespace std;

const int SIZE = 64;
int arr[SIZE];

void binary(int n, int b);

int main(){
    int n;
    int b;

    cout << "숫자 입력: ";
    cin >> n;
    cout << "진법 입력: ";
    cin >> b;

    binary(n, b);

    return 0;
}

void binary(int n, int b){
    int cnt = 0;

    while(n >= 1 && cnt < SIZE){
        cout << cnt << " "; 
        arr[cnt] = n % b;
        cnt++;
        n /= b;
    }
    
    if(cnt == SIZE){
        cout << "64자리 초과" << endl;
    } else {
        for(int j=cnt-1; j>=0; j--){
            cout << arr[j] << " "; 
        }
    }
}