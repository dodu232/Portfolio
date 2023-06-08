// 0이 아닌 3개의 좌표값 (x1, y1), (x2, y2), (x3, y3)를 입력 받아서 삼각형을 만들 수 있는지를 검사하는 프로그램을 작성하라.
#include <iostream>
using namespace std;

int main(){
    int x1, x2, x3;
    int y1, y2, y3;

    cout << "x1 입력: ";
    cin >> x1;
    cout << "y1 입력: ";
    cin >> y1;
    cout << "x2 입력: ";
    cin >> x2;
    cout << "y2 입력: ";
    cin >> y2;
    cout << "x3 입력: ";
    cin >> x3;
    cout << "y3 입력: ";
    cin >> y3;

    if(x1 == x2 == x3 || y1 == y2 == y3){ // 3개 점이 같은 축 
        cout << "삼각형 안됨!" << endl;
    } else if((x1 == x2 && y1 == y2) || (x1 == x3 && y1 == y3) || (x2 == x3 && y2 == y3)) { // 점 두개가 같은 위치
        cout << "삼각형 안됨!" << endl;
    } else {
        cout << "삼각형 됨!" << endl;
    }

    return 0;
}