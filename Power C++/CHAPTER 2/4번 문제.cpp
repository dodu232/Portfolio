// 우리나라에서 많이 사용되는 면적의 단위인 평을 평방미터로 환산하는 프로그램을 작성하시오.
// 여기서 1평은 3.3058m²이다. 변수들의 자료형은 어떤 것을 선택하는 것이 좋은가?
// 기호 상수를 이용하여 1평당 평방미터를 나타내어라
#include <iostream>
using namespace std;

int main(){
    const float SQUARE_FEET = 3.3058;
    int squareFeet;
    double resultFeet;

    cout << "평수를 입력해주세요. ";
    cin >> squareFeet;

    resultFeet = SQUARE_FEET * squareFeet;

    cout << squareFeet << "평은 " << resultFeet << "평방미터 입니다." << endl;

    return 0;
}