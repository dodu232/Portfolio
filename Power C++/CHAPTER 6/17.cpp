// 사용자에게 영어 이름을 성과 이름으로 나누어서 입력하도록 하여서 이름의 첫글자와 마침표,
// 성을 출력하는 프로그램을 작성하라. 
// 즉 사용자가 HONG GIL DONG을 입력하면 G. D. HONG과 같이 출력하도록 한다.
#include <iostream>
using namespace std;

int main(){
    char ch[50];

    cout << "이름 입력: ";
    cin.getline(ch, 50);

    int chEnd;

    // 이름의 글자수 확인 및 대문자로 변경
    for(int i=0; i<50; i++){
        if(isalpha(ch[i]) == 2){
            ch[i] -= 32;
        } else if(isalpha(ch[i]) == 0 && isalpha(ch[i+1]) == 0){
            chEnd = i-1;
            break;
        }
    }

    // 이름의 초성 출력
    for(int i=0; i<chEnd; i++){
        if(i == 0){

        } else if(isalpha(ch[i]) != 0 && isalpha(ch[i-1]) == 0){
            cout << ch[i] << ". ";
        }
    }

    // 맨 첫번째 쓴 글자를 제일 마지막에 출력
    for(int i=0; i<chEnd; i++){
        if(isalpha(ch[i]) != 0){
            cout << ch[i];
        } else {
            break;
        }
    }

    return 0;
}