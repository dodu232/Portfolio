// 평균을 구하는 멤버 함수 getAve를 중복 정의해보자
// 1. 두개의 정수를 받아서 평균을 구하는 멤버 함수를 정의해보자.
// 2. 세개의 정수를 받아서 평균을 구하는 멤버 함수를 중복 정의하여 보자.
// 3. 중복 정의된 멤버 함수를 호출하여 보자.
#include <iostream>
using namespace std;

class Ave{
public:
    double getAve(int x, int y){
        return (x + y) / 2;
    }

    double getAve(int x, int y, int z){
        return (x + y + z) / 3;
    }
};

int main(){
    Ave ave;

    cout << ave.getAve(1, 3) << endl;
    cout << ave.getAve(2, 3, 4) << endl;

    return 0;
}