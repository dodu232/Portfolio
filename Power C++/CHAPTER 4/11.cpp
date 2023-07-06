// ������ ����ϴ� ������� ���α׷��� �ۼ��϶�.
// 1^3 + 2^3 + 3^3 + ... + n^3
#include <iostream>
using namespace std;

int cubic(int x);

int main(){
    int num;

    cout << "���� �Է�: ";
    cin >> num;

    int sum = cubic(num);
    
    for(int i=1; i<=num; i++){
        cout << i << "^3";
        if(i == num){
            cout << " = " << sum << endl;
        }else {
            cout << " + ";
        }
    }
    cout << sum << endl;

    return 0;
}

int cubic(int x){
    cout << x << "^3 = " << x * x * x << endl;
    if(x <= 1){
        return 1;
    } else {
        return (x * x * x) + cubic(x-1);
    }
}