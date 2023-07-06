// 키보드에서 문자 하나를 읽어서 모음과 비모음을 구분하는 프로그램을 작성하여 보자.
#include <iostream>
using namespace std;

int main(){
    char ch;
    cout << "문자를 하나 입력하시오. ";
    cin >> ch;

    switch (ch)
    {
    case 'a':
    case 'A':
    case 'e':
    case 'E':
    case 'i':
    case 'I':
    case 'o':
    case 'O':
    case 'u':
    case 'U':
        cout << "모음입니다." << endl;
        break;
    
    default:
        cout << "자음입니다." << endl;
    }


    return 0;
}