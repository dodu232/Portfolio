// switch문을 사용하여 키보드로부터 하나의 문자를 읽어서 문자가 탭 문자인지 줄바꿈 문자인지 백스페이스 문자인지를 출력하는 프로그램을 작성하라. 
// 이러한 문자들이 입력되면 화면에 문자를 설명하는 문장을 출력한다. 예를 들어서 문자가 탭 문자이면 "탭 문자"를 출력한다.
#include <iostream>
#include <conio.h>
using namespace std;

int main(){
    char c;
    cout << "탭 문자, 백스페이스 문자, 줄바꿈 문자 중 하나 입력: ";
    c = _getch();
    int i = int(c);

    switch(i){
        case 8:
            cout << "백스페이스 문자" << endl;
            break;
        case 9:
            cout << "탭 문자" << endl;
            break;
        case 13:
            cout << "개행 문자" << endl;
            break;
        default:
            cout << "잘못된 입력" << endl;
    }

    return 0;
}