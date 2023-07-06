// 간단한 즉석 복권 프로그램을 작성하여 보자. 1등부터 3등까지의 당첨 번호가 결정되어 있다고 가정하자. 
// 사용자로부터 1부터 10사이의 번호를 받아서 2번이 1등, 5번이 2등, 7번이 3등이라고 가정하고 프로그램을 작성하여보라. 
// 당첨되었으면 당첨 안내 메시지를 화면에 출력한다.
#include <iostream>
using namespace std;

int main(){
    int first = 2;
    int second = 5;
    int third = 7;

    int user;
    string result;

    cout << "번호를 입력하세요: ";
    cin >> user;

    if(user == first){
        result = "1등";
    } else if(user == second){
        result = "2등";
    } else if(user == third){
        result = "3등";
    } else {
        result = "꽝";
    }

    cout << result << "입니다." << endl;
    
    return 0;
}
