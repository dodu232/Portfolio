// 회문(palindrome)이란 바로 읽거나 거꾸로 읽어도 같은 글이 되는 문구이다. 
// 예를 들면 "Able was I ere I saw Elba"와 같은 문자열이 회문이다. 
// 사용자로부터 문자열을 받아서 회문 여부를 판별하여 그 결과를 화면에 출력하는 프로그램을 작성하여 보라.
#include <iostream>
using namespace std;

int main(){
    char ch[100];

    cout << "문장 입력: ";
    cin.getline(ch, 100);

    int chEnd;

    for(int i=0; i<100; i++){
        if(isalpha(ch[i]) == 1){
            ch[i] += 32;
        } else if(isalpha(ch[i]) == 0 && isalpha(ch[i+1]) == 0){
            chEnd = i-1;
            break;
        }
    }

    bool check = true;

    for(int i=0; i<chEnd; i++){
        if(ch[i] != ch[chEnd-i]){
            check = false;
            break;
        }
    }

    if(check){
        cout << "회문 입니다." <<endl;
    } else {
        cout << "회문 아님" << endl;
    }

    return 0;
}

// 노 암낫 고인 다운 아윌 비 올라잇
// 예 암 온리 고인 업 앤 암비 올라잇
