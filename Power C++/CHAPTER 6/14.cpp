// 영문 문자열 안에 포함된 영단어의 개수를 계산하여 화면에 출력하는 프로그램을 작성하여 보자.
// isalpha를 사용하여 공백 문자와 단어들을 구별할 수 있다. 영어 알파벳이 연속되다가 공백문자가 나오면 단어가 끝나는 것으로 간주한다.
#include <iostream>
using namespace std;

int main(){
    char ch[50];
    cout << "문자 입력: ";
    cin.getline(ch, 50);

    int cnt;

    for(int i=0; i<50; i++){
        if(isalpha(ch[i]) == 0 && isalpha(ch[i-1]) != 0){
            cnt++;
        }
    }

    cout << cnt << endl;

    return 0;
}