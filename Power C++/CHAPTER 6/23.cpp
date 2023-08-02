// 메시지를 암호화하는 간단한 기법 중의 하나는 시저가 사용한 암호화 기법이다.
// 이 방법은 평문에 단순히 더하기(즉, 영어의 알파벳을 왼쪽으로 이동하던지 오른쪽으로 이동하는 것)를
// 하여 암호문을 얻는다. 즉 예를 들어 다음 표와 같이 변경하여 전송하였다.
// 사용자가 제시한 문자열을 암호화하거나 복호화하는 프로그램을 작성하라.
#include <iostream>
#include <cstring>
using namespace std;

void print_menu(int *sel);

void input_string(char *ch);

void print_encryption(char *ch, char *result);

void print_decryption(char *ch, char *result);

int main(){
    int sel;
    char ch[50];
    char result[50];

    print_menu(&sel);

    input_string(ch);

    if(sel == 1){
        print_encryption(ch, result);
    } else if (sel == 2){
        print_decryption(ch, result);
    }

    return 0;
}

void print_menu(int *sel){
    cout << "1. 암호화" << endl;
    cout << "2. 복호화" << endl;
    cout << "메뉴 선택: ";

    cin >> *sel;
    cin.ignore();
}

void input_string(char *ch){
    cout << "문자열을 입력하시오: ";
    cin.getline(ch, 50);

}

void print_encryption(char *ch, char *result){
    for(int i=0; i<strlen(ch); i++){
        if(isalpha(ch[i]) == 0){
            result[i] = ch[i];
        } else if(ch[i] > 119 || (ch[i] < 91 && ch[i] > 87)){
            result[i] = ch[i] - 23;
        } else {
            result[i] = ch[i] + 3;
        }
    }

    cout << "암호화 된 문자열: " << result << endl;
}

void print_decryption(char *ch, char *result){
    for(int i=0; i<strlen(ch); i++){
        if(isalpha(ch[i]) == 0){
            result[i] = ch[i];
        } else if(ch[i] < 68 || (ch[i] < 100 && ch[i] > 96)){
            result[i] = ch[i] + 23;
        } else {
            result[i] = ch[i] - 3;
        }
    }

    cout << "복호화 된 문자열: " << result << endl;
}