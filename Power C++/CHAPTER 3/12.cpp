// ��ǻ�Ϳ� ����, ����, �� ������ �ϴ� ���α׷��� �ۼ��϶�. ��ǻ�ʹ� ����ڿ��� �˸��� �ʰ� ����, ����, �� �߿��� ���Ƿ� �ϳ��� �����Ѵ�. 
// ����ڴ� ���α׷��� �Է� �ȳ� �޼����� ����, 3���߿��� �ϳ��� �����ϰ� �ȴ�. 
// ������� ������ ������ ��ǻ�ʹ� ���� ������ �����Ͽ��� ���� �̰����, �������� �˷��ش�.
#include <iostream>
#include <time.h>
using namespace std;

int main(){
    srand(time(NULL));
    int com, user;
    string rCom;

    com = rand() % 3 + 1;

    cout << "������������ �����մϴ�. \n1.���� 2.���� 3.��" << endl;
    cin >> user;

    switch (com){
    case 1:
        rCom = "����";
        break;
    case 2:
        rCom = "����";
        break;
    case 3:
        rCom = "��";
        break;    
    }

    cout << "��ǻ��: " << rCom << endl;

    if(user == com){
        cout << "�����ϴ�." << endl;
    } else if(!(user == 3 && com == 1) && (user > com) || (user == 1 && com == 3)){
        cout << "�̰���ϴ�." << endl;
    } else {
        cout << "�����ϴ�." << endl;
    }
    return 0;
}