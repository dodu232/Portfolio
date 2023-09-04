// �ֻ����� ��Ÿ���� Ŭ������ Dice�� �ۼ��Ͽ� ����. Dice Ŭ������ �ʿ��� ��� ������ ��� �Լ��� �����Ͽ� ����. 
// ��� �Լ����� �ֻ����� ������ ��� �Լ��� roll()�� �����϶�. roll() ��� �Լ��� �ۼ��� �� ������ ��� ���� ������ �����϶�.
// face = (int) (rand()%6 + 1)
// Dice ��ü�� �����Ͽ� �׽�Ʈ�϶�
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