// 간단한 철자 교정 프로그램을 작성하여 보자. 문자열을 입력으로 받아서 문자열 안에 마침표가 있으면
// 문자열의 첫 번째 문자가 대문자인지를 검사한다. 만약 대문자가 아니면 대문자로 변환한다.
// 또한 문장의 끝에 마침표가 존재하는지를 검사한다. 역시 마침표가 없으면 넣어준다.
// 즉, 입력된 문자열이 "pointer is easy"라면 "Pointer is easy."로 변환하여 화면에 출력한다.
#include <iostream>
#include <cstring>
using namespace std;

int main(){
    char ch[50] = {0,};

    cout << "문장 입력: ";
    cin.getline(ch, 50);

    if(isalpha(ch[0]) == 2){
        ch[0] -= 32;
    }

    int end;

    for(int i=49; i>0; i--){
        if(isalpha(ch[i]) != 0 && ch[i] == '.'){
            break;
        } else if(isalpha(ch[i]) != 0){
            ch[i+1] = '.';
            break;
        }
    }

    cout << ch << endl;

    return 0;
}