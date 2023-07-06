// 계산기 프로그램
// 연산들이 몇 번씩 계산되었는지 기억
// 1. 정적 지역 변수 사용
// 2. 전역 변수 사용
#include <iostream>
#include <string>
using namespace std;

int addCnt;
int minusCnt;

void add(int x, int y);
void subtraction(int x, int y);
void multiplication(int x, int y);
void division(int x, int y);

int main(){
    while(true){
        string str, str1, str2, str3;
        int x, y;
        
        cout << "연산 입력: ";
        getline(cin, str);

        str1 = str.substr(0, str.find(" "));
        str2 = str.substr(str.find(" ")+1, str.find(" "));
        str3 = str.substr(str.find(" ")+3, str.length());

        x = atoi(str1.c_str());
        y = atoi(str3.c_str());

        if(str2.compare("+") == 0){
            add(x, y);
        } else if(str2.compare("-") == 0){
            subtraction(x, y);
        } else if(str2.compare("*") == 0){
            multiplication(x, y);
        } else if(str2.compare("/") == 0){
            division(x, y);
        } else {
            cout << "잘못된 입력" << endl;
            break;
        }
        
    }

    return 0;
}

void add(int x, int y){
    addCnt++;
    cout << "연산결과: " << x + y << endl;
    cout << "덧셈은 총 " << addCnt << "번 실행되었습니다." << endl;
}

void subtraction(int x, int y){
    minusCnt++;
    cout << "연산결과: " << x - y << endl;
    cout << "뺄셈은 총 " << minusCnt << "번 실행되었습니다." << endl;
}

void multiplication(int x, int y){
    static int mulCnt;
    mulCnt++;
    cout << "연산결과: " << x * y << endl;
    cout << "곱셈은 총 " << mulCnt << "번 실행되었습니다." << endl;
}

void division(int x, int y){
    static int divCnt;
    divCnt++;
    cout << "연산결과: " << x / y << endl;
    cout << "나눗셈은 총 " << divCnt << "번 실행되었습니다." << endl;
}
