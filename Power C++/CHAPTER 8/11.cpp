// 사용자로부터 받은 문자열에서 자음과 모음의 개수를 계산하여서 출력하는 프로그램을 작성하라.
#include <iostream>
#include <string>
using namespace std;

int main(){
    string str;
    string vowel = "aeiou";

    int cntV = 0;
    int cntC = 0;

    cout << "문자열 입력: ";
    getline(cin, str);

    for(int i=0; i<str.length(); i++){
        for(int j=0; j<vowel.length(); j++){
            if(str[i] == vowel[j]){
                cntV++;
                break;
            } else if(j == vowel.length()-1){
                cntC++;
            }
        }
    }

    cout << "자음 수: " << cntC << ", 모음 수: " << cntV << endl;

    return 0;
}