// 간단한 계산기 프로그램을 작성하여 보자.
// 먼저 사용자로부터 하나의 문자를 입력받는다.
// 이어서 사용자로부터 두 개의 숫자를 입력받는다.
// 사용자로부터 받은 문자가 '+'면 덧셈, '-'면 뺄셈, '*'면 곱셈, '/'면 나눗셈을 수행하도록 작성하라.
// 나눗셈의 경우, 부모가 0인지 아닌지를 먼저 검사하여야 한다
#include <iostream>
#include <sstream>
#include <string>
using namespace std;

int main(){
    char calc;
    string str;
    string str1, str2;

    cout << "***********" << endl;
    cout << "+ 덧셈" << endl;
    cout << "- 뺄셈" << endl;
    cout << "* 곱셈" << endl;
    cout << "/ 나눗셈" << endl;
    cout << "***********" << endl;
    cout << "연산을 선택하시오: ";
    cin >> calc;
    cin.ignore(10, '\n'); // 버퍼 지워주기
    cout << "두 수를 공백으로 분리하여 입력하시오: ";
    getline(cin, str);

    stringstream temp(str);
    temp >> str1 >> str2;
    int num1 = stoi(str1);
    int num2 = stoi(str2);

    if(calc == '+'){
        cout << num1 + num2 << endl;
    } else if(calc == '-'){
        cout << num1 - num2 << endl;
    } else if(calc == '*'){
        cout << num1 * num2 << endl;
    } else if(calc == '/'){
        cout << num1 / num2 << endl;
    } else {
        cout << "정확하지 않은 연산자 입력됨;" << endl;
    }

    return 0;
}