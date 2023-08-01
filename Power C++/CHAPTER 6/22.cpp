// 사용자로부터 문자열을 받아서 서로 다른 단어가 몇 번이나 등장하였는지를 세는 프로그램을 작성하라.
// 대소문자는 구분하지 않는다.
#include <iostream>
#include <cstring>
using namespace std;

int main(){
    char ch[80];
    cout << "문자열을 입력하시오: ";
    cin.getline(ch, 80);

    int cnt = 0;
    while(true){
        char temp[20];

        // 문장 단어 별로 쪼개기
        for(int i=0; i<strlen(ch); i++){
            
        }

    }

    return 0;
}