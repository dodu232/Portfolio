// MyMath 클래스에 PI라는 이름으로 정적 변수를 선언하고 3.141592로 초기화한다. 이 PI값을 반환하는 getPI()라는 이름의 정적 메소드도 작성하여 보자.
#include <iostream>
using namespace std;

class MyMath{
public:
    static double PI;
    static double getPI(){
        return PI;
    }
};

double MyMath::PI = 3.141592;

int main(){
    MyMath m;

    cout << m.getPI() << endl;
    printf("%.6f", m.getPI());
    
    return 0;
}