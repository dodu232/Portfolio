// ����ڰ� ���ް� �ҵ漼���� ���ڷ� �ָ� ���޿� �ҵ漼�� �߰��Ͽ��� ��ȯ�ϴ� �Լ� add_tax�� �ۼ��Ͽ�
// ����. ������ ���۷��� Ÿ������ ���޵Ǹ� �ҵ漼���� �־����� ������ 20%�� ������ ������ �϶�
#include <iostream>
using namespace std;

void add_tax(int &salary, double rate = 20);

int main(){
    int salary;
    double rate;

    cout << "���� �Է�: ";
    cin >> salary;

    cout << "�ҵ漼�� �Է�: ";
    cin >> rate;

    if(rate <= 0){
        add_tax(salary);
    } else {
        add_tax(salary, rate);
    }

    cout << salary << endl;

    return 0;
}

void add_tax(int &salary, double rate){
    salary += salary * (rate / 100);
}