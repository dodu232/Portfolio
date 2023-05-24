// c++의 입 출력 방식
#include <iostream>
using namespace std;

int main(){
    
    int val, sum;

    for(int i=0; i<5; i++){
    cout << i+1 <<"번째 정수 입력: " ;

    cin >> val;

    sum += val;

    }
    
    cout << "합계: " << sum << endl ;

    string name, phone;

    cout << "이름 입력: ";
    cin >> name;

    cout << "번호 입력: ";
    cin >> phone;

    cout << "이름: " << name << " 번호:" << phone << endl;

    cout << "숫자를 입력하세요: " ;
    cin >> val;

    for(int i=1; i<=9; i++){
        cout << val << " * " << i << " = " << val * i << endl;
    }

    val = 0;
    while(true){
        cout << "판매 금액 입력(단위: 만원): " ;
        cin >> val;
        if(val == -1){
            break;
        }
        cout << "이번달 급여: " << 50 + val*0.12 << endl;
    }
    
    cout << "프로그램을 종료합니다."; 

    return 0;
}