// 사용자에게서 받은 문자열을 역순으로 화면에 출력하는 프로그램을 작성하여 보자. 예를 들어서 사용자가 "secret"를 입력하면 "terces"를 출력한다.
#include <iostream>
#include <string>
using namespace std;

int main(){
    string str;

    cout << "문자열 입력: ";
    getline(cin, str);

    for(int i=str.length()-1; i>=0; i--){
        cout << str[i];
    }

    cout << endl;

    return 0;
}