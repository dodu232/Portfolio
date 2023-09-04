// 주사위를 나타내는 클래스인 Dice를 작성하여 보자. Dice 클래스에 필요한 멤버 변수와 멤버 함수를 생각하여 보자. 
// 멤버 함수에는 주사위를 굴리는 멤버 함수인 roll()을 포함하라. roll() 멤버 함수를 작성할 때 난수를 얻는 다음 문장을 참조하라.
// face = (int) (rand()%6 + 1)
// Dice 객체를 생성하여 테스트하라
#include <iostream>
#include <time.h>
using namespace std;

class Dice{
private:
    int num;

public:
    void roll(){
        num = (int)rand()%6 + 1;
    }

    void print(){
        cout << num << endl; 
    }
};

int main(){
    srand(time(NULL));

    Dice dice;
    dice.roll();
    dice.print();

    return 0;
}