// 두 개의 인자 중에서 더 큰 값을 반환하는 함수 get_max(x, y)를 중복 함수를 이용하여
// 정수형 버전, 실수형 버전으로 중복하여서 작성한 후에 테스트하라.
#include <iostream>
using namespace std;

int get_max(int x, int y);

double get_max(double x, double y);

int main(){

    cout << get_max(1, 3) << ", " << get_max(1.4, 4.2) << endl;

    return 0;
}

int get_max(int x, int y){
    if(x < y){
        return y;
    } else {
        return x;
    }
}

double get_max(double x, double y){
    if(x < y){
        return y;
    } else {
        return x;
    }
}