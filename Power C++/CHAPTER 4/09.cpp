// ���� ����� �����ϴ� ����� ��������. �� ����� ���� �Լ� save(int amount)�� �ۼ��Ͽ� ����.
// save()�� ������� ����� �Ѿ��� ����ϰ� �ѹ� ȣ��� ������, �� ������� ȭ�鿡 ����Ѵ�.
#include <iostream>
using namespace std;

int acc;

void save(int amount);

int main(){

    while(true){
        int amount;
        cout << "�󸶸� �����Ͻðڽ��ϱ�?(����� -1) ";
        cin >> amount;

        if(amount == -1){
            cout << "����" << endl;
            break;
        }
        save(amount);

    }

    return 0;
}

void save(int amount){
    acc += amount;
    cout << "���ݱ��� �� ������� " << acc << "�Դϴ�." << endl;
}