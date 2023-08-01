// 사용자에게 질문을 제시하고 답변을 받아서 긍정이면 1을 반환하고 부정이면 0을 반환하는 함수
// get_response(char *prompt)를 작성하고 테스트하라. 여기서 매개 변수 prompt는 사용자에게 제시하는
// 질문이다. 긍정을 의미하는 문자열은 "yes", "ok"로 가정하라. 부정을 의미하는 문자열은 "no"로 가정하라.
// 대소문자는 구별하지 않도록 해라.
#include <iostream>
#include <cstring>
using namespace std;

int get_response(char *prompt);

int main(){
    char prompt[] = {"치킨을 좋아하나요? "};

    cout << get_response(prompt) << endl;

    return 0;
}

int get_response(char *prompt){
    cout << prompt;
    
    char ch[5];

    cin.getline(ch, 5);

    for(int i=0; i<5; i++){
        if(isalpha(ch[i]) == 1){
            ch[i] += 32;
        }
    }

    if(strcmp(ch, "yes") == 0 || strcmp(ch, "ok") == 0){
        return 1;
    } else {
        return 0;
    }
}