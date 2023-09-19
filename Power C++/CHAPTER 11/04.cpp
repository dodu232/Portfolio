// 카운터를 나타내는 클래스 Counter를 작성하여 보자. 전용 멤버로 value를 가지며 이 변수에 대하여 접 근자와 설정자 함수가 존재한다. 
// print() 멤버 함수 는 현재 카운터의 값을 콘솔에 출력한다. countDown()과 countUp() 멤버 함수도 가지고 있다. 클래스 구현 시에 최대한 const 를 많이 사용하여 보자.
#include <iostream>
using namespace std;

class Counter{
private:
    int value;

public:
    Counter(int value = 0): value(value) {}

    int getValue() const {
        return value;
    }

    void setValue(int value){
        this->value = value;
    }
    void countDown();
    void countUp();
    void print() const;
};

void Counter::countDown(){
    value--;
}

void Counter::countUp(){
    value++;
}

void Counter::print() const {
    cout << value << endl;
}

int main(){
    Counter c;

    c.print();
    c.countDown();
    c.print();
    c.countUp();
    c.countUp();
    c.print();

    return 0;
}