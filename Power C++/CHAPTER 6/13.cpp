// 라이브러리 함수인 strlen()와 비슷한 함수를 직접 작성하여 보자. int str_len(char *s)의 원형을 가진다고 가정하자.
// str_len은 문자열에 들어 있는 문자들의 개수를 반환한다.
#include <iostream>
using namespace std;

int str_len(char *s);

int main(){
    char ch[50] = {""};

    cout << "문자 입력: ";
    cin.getline(ch, 50);

    cout << str_len(ch) << endl;
    
    return 0;
}

int str_len(char *s){
    int cnt;
    for(int i=0; i<50; i++){
        if((int)s[i] != 0){
            cnt++;
        }
    }
    return cnt;
}