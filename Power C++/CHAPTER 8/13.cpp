// 워드 프로세서에 사용되는 "찾아 바꾸기" 기능을 구현하여 보자. 첫 번째로 사용자로부터 최대 100글자의 텍스트를 입력받는다. 두 번째로 찾는 
// 문자열을 입력받는다. 최대 10글자로 제한한다. 세 번째로 바꾸는 문자열을 입력받는다. 역시 최대 10글자로 제한된다. 텍스트 중에서 지정된
// 문자열을 찾아서 바꾼 후에 화면에 출력한다.
#include <iostream>
#include <string>
using namespace std;

void print_input(int length, string *str);

int main(){
    string txt;
    string find;
    string change;

    print_input(100, &txt);
    print_input(10, &find);

    int idx = txt.find(find);

    while(idx == -1){
        cout << "찾을 수 없는 단어 입니다." << endl;
        print_input(10, &find);
        idx = txt.find(find);
    }

    txt.erase(idx, find.length());

    print_input(10, &change);

    txt.insert(idx, change);

    cout << txt << endl;

    return 0;
}

void print_input(int length, string *str){
    cout << "텍스트 입력(최대 " << length << "글자): ";
    getline(cin, *str);
}