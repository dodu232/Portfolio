// switch���� ����Ͽ� Ű����κ��� �ϳ��� ���ڸ� �о ���ڰ� �� �������� �ٹٲ� �������� �齺���̽� ���������� ����ϴ� ���α׷��� �ۼ��϶�. 
// �̷��� ���ڵ��� �ԷµǸ� ȭ�鿡 ���ڸ� �����ϴ� ������ ����Ѵ�. ���� �� ���ڰ� �� �����̸� "�� ����"�� ����Ѵ�.
#include <iostream>
#include <conio.h>
using namespace std;

int main(){
    char c;
    cout << "�� ����, �齺���̽� ����, �ٹٲ� ���� �� �ϳ� �Է�: ";
    c = _getch();
    int i = int(c);

    switch(i){
        case 8:
            cout << "�齺���̽� ����" << endl;
            break;
        case 9:
            cout << "�� ����" << endl;
            break;
        case 13:
            cout << "���� ����" << endl;
            break;
        default:
            cout << "�߸��� �Է�" << endl;
    }

    return 0;
}