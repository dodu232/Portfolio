// 사용자로부터 하나의 문자를 입력받는다. 만약 입력받은 문자가 대문자이면 소문자로 변환한다. 
// 만약 소문자이면 대문자를 입력하라는 메시지를 출력한다. 대문자에서를 'A'를 빼고 'a'를 더해주면 소문자로 변환된다 
// 즉 아스키 코드값을 몰라도 변환할 수 있다.
#include <iostream>
using namespace std;

int main(){
    char c;
    int i;
    
    cout << "문자를 하나 입력하세요: ";
    cin >> c;
    i = int(c);


    if(i >= 65 && i < 91){
        i += 32;
        c = char(i);
        cout << c << endl;
    } else if(i > 96 && i < 123){
        cout << "대문자를 입력하세요" << endl;
    } else {
        cout << "잘못된 문자입력" << endl;
    }
}