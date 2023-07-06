// 컴퓨터와 가위, 바위, 보 게임을 하는 프로그램을 작성하라. 컴퓨터는 사용자에게 알리지 않고 가위, 바위, 보 중에서 임의로 하나를 선택한다. 
// 사용자는 프로그램의 입력 안내 메세지에 따라서, 3개중에서 하나를 선택하게 된다. 
// 사용자의 선택이 끝나면 컴퓨터는 누가 무엇을 선택하였고 누가 이겼는지, 비겼는지를 알려준다.
#include <iostream>
#include <time.h>
using namespace std;

int main(){
    srand(time(NULL));
    int com, user;
    string rCom;

    com = rand() % 3 + 1;

    cout << "가위바위보를 시작합니다. \n1.가위 2.바위 3.보" << endl;
    cin >> user;

    switch (com){
    case 1:
        rCom = "가위";
        break;
    case 2:
        rCom = "바위";
        break;
    case 3:
        rCom = "보";
        break;    
    }

    cout << "컴퓨터: " << rCom << endl;

    if(user == com){
        cout << "비겼습니다." << endl;
    } else if(!(user == 3 && com == 1) && (user > com) || (user == 1 && com == 3)){
        cout << "이겼습니다." << endl;
    } else {
        cout << "졌습니다." << endl;
    }
    return 0;
}