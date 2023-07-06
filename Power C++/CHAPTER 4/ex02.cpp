// 수학적인 조합 값을 구하는 예제
#include <iostream>
using namespace std;

int get_integer(void);
int combination(int n, int r);
int factorial(int n);

int main(){
    int a, b;

    a = get_integer();
    b = get_integer();

    cout << "C(" << a << ", " << b << ") = " << combination(a, b) << endl;
    
    return 0; 
}

int get_integer(void){
    int n;

    cout << "정수 입력: ";
    cin >> n;

    return n;
}

int combination(int n, int r){
    return(factorial(n) / (factorial(n-r) * factorial(r)));
}

int factorial(int n){
    int f = 1;

    for(int i=1; i<=n; i++){
        f *= i;
    }

    return f;
}