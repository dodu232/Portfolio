// ���� ������ ���� �ùķ��̼�
// ���� ���� �Ŀ� ������ ¦���� ������ �ո�, Ȧ���� �޸����� ������ ���� ���
#include <iostream>
#include <time.h>
using namespace std;

int coin_game();

int main(){
    srand(time(NULL));

    int win = 0; 
    int lose = 0;

    while (true){
        int coin = coin_game() + 1;
        int sel;

        cout << "1. �ո� 2. �޸� 3. ����" << endl;
        cout << "����: ";
        cin >> sel;

        if (sel == 3){
            cout << "����" << endl;
            break;
        } else if(sel == coin){
            cout << "�¸�" << endl;
            win++;
        } else if (sel != coin && sel < 3){
            cout << "�й�" << endl;
            lose++;
        } else {
            cout << "�ٽ� ������ �ּ���.\n" << endl;
            continue;
        }
        cout << "��: " << win << ", ��: " << lose << endl;
        cout << endl;
    }

    return 0;
}

int coin_game(){
    if(rand() % 2 == 0){
        return 0;
    } else {
        return 1;
    }

}