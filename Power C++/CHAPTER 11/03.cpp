// MyMetric이라는 클래스를 작성하고 여기에 킬로미터를 마일로 변환하는 정적 함수인 kiloToMile을 작성하라. 또 반대로 마일을 킬로미터로 변환하는 정적 메소드 mileToKilo로 작성하라.
// main()에서 이들 정적 메소드를 호출하여 테스트하여 보자.
#include <iostream>
using namespace std;

class MyMetric{
public:
    static double kiloToMile(double k){
        return k * 0.621371;
    }

    static double mileToKilo(double m){
        return m * 1.60934;
    }
};

int main(){
    double k = 120;
    double m = 23.4;

    cout << k << "km -> " << MyMetric::kiloToMile(k) << "mile" << endl;
    cout << m << "mile -> " << MyMetric::mileToKilo(m) << "km" << endl;

    return 0;
}