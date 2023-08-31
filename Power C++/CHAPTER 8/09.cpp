// 사용자로부터 문자열을 받아서 단어의 개수를 계산하여서 콘솔에 출력하는 프로그램을 작성하여 보자. 예를 들어서 사용자가 "To be or not to be"
// 라고 입력하면 6을 출력한다.
#include <iostream>
#include <string>
using namespace std;

int main(){
    string str;
    int cnt = 1;
    
    cout << "문자열 입력: ";
    getline(cin, str);

    for(int i=0; i<str.length(); i++){
        if(isspace(str[i]) != 0){
            cnt++;
        }
    }

    cout << cnt << endl;

    return 0;
}