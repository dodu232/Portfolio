// �޴� �ý��� �ۼ��ϱ�
// �޴��� ȭ�鿡 ����ϰ� ���ϴ� �޴��� �����϶�� print_menu �Լ� �ۼ�
// ��������� ������ �Է� �ް� �� ��ȣ�� ���Ѱ� ������ ���� �ʾҴ����� �˻��ϴ� �Լ� get_menu_number �ۼ�
// ���Ѱ� ������ ������ print_mune�� ȣ���Ѵ�.
// ������ �޴��� ó���ϴ� �Լ��� �ۼ��Ѵ�. 
#include <iostream>
using namespace std;

// �޴� ���
void print_menu();

// ���� �˻�
void get_menu_number();

// �ܹ��� 
void hamburger();

// ġ�����
void cheeseburger();

// ������ġ
void sandwich();

// ����
void end();

int main(){
    print_menu();

    return 0;
}

void print_menu(){
    cout << "1. �ܹ���" << endl;
    cout << "2. ġ�����" << endl;
    cout << "3. ������ġ" << endl;
    cout << "4. ����" << endl;
    cout << "�޴� ����: ";

    get_menu_number();
}

void get_menu_number(){
    int sel;
    cin >> sel;

    if(sel < 1 || sel > 4){
        print_menu();
    } else if(sel == 1){
        hamburger();
    } else if(sel == 2){
        cheeseburger();
    } else if(sel == 3){
        sandwich();
    } else {
        end();
    }
}

void hamburger(){
    cout << "�ܹ��� ����" << endl;
}

void cheeseburger(){
    cout << "ġ����� ����" << endl;
}

void sandwich(){
    cout << "������ġ ����" << endl;
}

void end(){
    cout << "�޴� �ý��� ����" << endl;
}