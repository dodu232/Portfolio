// 사용자로부터 3개의 정수를 읽어 들인 후에 if-else 문을 사용하여 가장 작은 값을 결정하는 프로그램을 작성하라.
#include <iostream>
using namespace std;

int main(){
    int n1, n2;
    int min;

    cout << "첫번째 수 입력: ";
    cin >> min;

    cout << "두번째 수 입력: ";
    cin >> n1;

    cout << "세번째 수 입력: ";
    cin >> n2;

    if(n1 < min && n1 < n2){
        min = n1;
    } else if(n2 < min){
        min = n2;
    }

    cout << "가장 작은 수는 " << min << "입니다." << endl;

    return 0;
}