// �������κ��� ������� �ݾ׿� ���� ���ڸ� ����ϴ� ���α׷��� �ۼ��Ͽ� ����. ����ڷκ���
// ���� �ݾװ� ������ get_input �Լ��� ���Ͽ� �Է¹޴´�. get_input���� ���۷��� �Ű� ������ ����϶�.
// ������ ��ȯ���� �ʰ� ���ڸ� ���ٰ� �������� ��쿡 �� �� ���ڸ� ����Ͽ� ����Ѵ�.
#include <iostream>
using namespace std;

void get_input(int &money, double &rate);

int main(){
    int money;
    double rate;
    double interest;

    get_input(money, rate);

    interest = money * (rate / 100);

    cout << "�Ѵ� ���ڴ� " << interest << "�� �Դϴ�." << endl;

    return 0;
}

void get_input(int &money, double &rate){
    cout << "������� �ݾ�: ";
    cin >> money;
    cout << "����: ";
    cin >> rate;
}