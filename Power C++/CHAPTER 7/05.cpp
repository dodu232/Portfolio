// 사용자에게서 반지름을 받아서 원의 면적을 구하는 프로그램을 작성하라.
// 원의 면적을 구하는 함수인 calc_area는 인라인 함수로 작성하라.
#include <iostream>
using namespace std;

inline double calc_area(int x){
    return x * x * 3.14;
}

int main(){
    int r;

    cout << "반지름 입력: ";
    cin >> r;

    cout << "원의 면적은 " << calc_area(r) << "입니다." << endl;


    return 0;
}