// 원기둥의 부피를 구하는 프로그램을 작성하라. 원기둥의 부피를 구하는 함수 cylinder(r,h)를 작성하여
// 사용하고 만약 원기둥의 높이가 주어지지 않으면 1.0이라고 가정한다. 디폴트 매개 변수를 사용하라.
#include <iostream>
using namespace std;

double cylinder(double r, double h = 1.0);

int main(){
    int r;
    double h;

    cout << "반지름 입력: ";
    cin >> r;

    cout << "높이 입력: ";
    cin >> h;

    if(h <= 0){
        cout << cylinder(r) << endl;
    } else {
        cout << cylinder(r, h) << endl;
    }

    return 0;
}

double cylinder(double r, double h){
    return r * r * 3.14 * h;
}