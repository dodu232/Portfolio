// 사용자로부터 하나의 문자를 입력받아서 'R' 이면 사각형의 면적을 계산하고 
// 'T' 이면 삼각형의 면적을 'C'이면 원의 면적을 계산한다. 
// 면적을 계산하는데 필요한 숫자들은 사용자로부터 입력받는다.
#include <iostream>
using namespace std;

int main(){
    char figure;
    double length, height, area;
    string name;


    cout << "문자 입력: ";
    cin >> figure;

    if(figure == 'C' || figure == 'c'){
        cout << "반지름을 입력하시오. ";
        cin >> length;
        area = length * length * 3.14;
        name = "원";
    } else {
        cout << "높이를 입력하세요: ";
        cin >> height;
        cout << "너비를 입력하세요: ";
        cin >> length;
        area = height * length;
        name = "사각형";

        if(figure == 'T' || figure == 't'){
            area /= 2;
            name = "삼각형";
        }
    }

    cout << name << "의 면적은 " << area << "입니다." << endl;

    return 0;
}