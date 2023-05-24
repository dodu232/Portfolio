// 사용자로부터 x의 값을 실수로 입력받아서 다음과 같은 다항식의 값을 계산하는 프로그램을 작성하라.
// 3x³ - 7x² + 9
#include <iostream>
using namespace std;

int main(){
    double x;

    cout << "x의 값을 실수로 입력하세요. ";
    cin >> x;

    double val = 3 * (x*x*x) - 7 * (x*x) + 9;

    cout << "x가 " << x << "일 때, 3x³ - 7x² + 9의 값은 " << val <<  "입니다." << endl;

    return 0;
}