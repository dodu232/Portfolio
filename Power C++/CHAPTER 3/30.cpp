// 사용자가 엔터키를 누를 때까지 한 줄의 문자를 읽어서 읽ㅇ느 문자 중에서 문자 a의 개수를 세어서 화면에 출력하는 프로그램을 작성하라
#include <iostream>
#include <string>
using namespace std;

int main(){
    string str;
    int cnt = 0;
    cout << "문자를 입력하세요: " << endl;
    getline(cin, str);

    for(int i=0; i<str.length(); i++){
        if(!str.substr(i, 1).compare("a")){
            cnt ++;
        }
    }

    cout << str << "에 들어있는 a의 개수는 " << cnt << "개 입니다. " << endl;

    return 0;
}