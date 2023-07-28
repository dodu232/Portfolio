// 문자열을 입력으로 받아서 문자열에 포함된 모든 공백 문자를 삭제하는 함수를 작성하고 테스트하라.
#include <iostream>
using namespace std;

void del_blank(char ch[]);

int main(){
    char ch[100];

    cout << "문자열 입력: ";
    cin.getline(ch, 100);

    del_blank(ch);

    return 0;
}

void del_blank(char ch[]){
    for(int i=0; i<100-1; i++){
        if((int)ch[i] == 32){
            ch[i] = ch[i+1];
        }
    }
    cout << ch << endl;
}