// 사용자로부터 받은 문자열에서 알파벳 글자의 개수, 숫자의 개수, 공백 문자의 개수를 계산하는 프로그램을 작성하라. 예를 들어서 사용자가
// "transformer 2"를 입력하면 알파벳 글자의 개수는 11개, 숫자의 개수는 1개, 공백 문자의 개수도 1이라고 출력한다.
#include <iostream>
#include <string>
using namespace std;

int main(){
    string str;
    int cntN = 0;
    int cntS = 0;
    int cntG = 0;

    cout << "문자를 입력하시오. ";
    getline(cin, str);
    
    for(int i=0; i<str.size(); i++){
        if(isspace(str[i]) != 0){
            cntG++;
        } else if(isalpha(str[i]) == 0){
            cntN++;
        } else if(isalpha(str[i]) != 0){
            cntS++;
        }
    }

    cout << "알파벳 개수: " << cntS << ", 숫자 개수: " << cntN << ", 공백 문자 개수: " << cntG << endl;

    return 0;
}