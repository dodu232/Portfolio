// 사용자로부터 원의 반지름을 받아서 원의 면적을 구하는 프로그램을 작성하라. 원의 면적이 계산되면 "사용자에게 계속하시겠습니까?(Y/N)" 라는 
// 질문을 하고 사용자가 Y라고 대답하면 다시 반복한다. 만약 N이 입력되면 실행을 중단한다. 사용자가 소문자 y나 n을 입력하여도 대문자와 마찬가지로
// 동작할 수 있도록 프로그램을 작성하라.
#include <iostream>
using namespace std;

int main(){
    double r;
    string a;

    do {
        cout << "원의 반지름을 입력하시오. ";
        cin >> r;

        double area = r * r * 3.14;

        cout << "반지름이 " << r << "일 경우, 원의 넓이는 " << area << " 입니다." << endl << endl;

        cout << "계속하시겠습니까?(Y/N) ";
        cin >> a;

        cout << endl;
    } while(a == "y" || a == "Y");
    

    return 0;
}




