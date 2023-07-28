// 사용자로부터 문자를 입력받아서 그 문자의 아스키 코드값을 출력하는 프로그램을 작성하라.
#include <iostream>
using namespace std;

int main(){
    char ch;

    cout << "문자 입력: "; 
    cin >> ch;
    
    cout << (int)ch << endl;

    return 0;
}