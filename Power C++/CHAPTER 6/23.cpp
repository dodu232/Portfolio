// �޽����� ��ȣȭ�ϴ� ������ ��� ���� �ϳ��� ������ ����� ��ȣȭ ����̴�.
// �� ����� �򹮿� �ܼ��� ���ϱ�(��, ������ ���ĺ��� �������� �̵��ϴ��� ���������� �̵��ϴ� ��)��
// �Ͽ� ��ȣ���� ��´�. �� ���� ��� ���� ǥ�� ���� �����Ͽ� �����Ͽ���.
// ����ڰ� ������ ���ڿ��� ��ȣȭ�ϰų� ��ȣȭ�ϴ� ���α׷��� �ۼ��϶�.
#include <iostream>
#include <cstring>
using namespace std;

void print_menu(int *sel);

void input_string(char *ch);

void print_encryption(char *ch, char *result);

void print_decryption(char *ch, char *result);

int main(){
    int sel;
    char ch[50];
    char result[50];

    print_menu(&sel);

    input_string(ch);

    if(sel == 1){
        print_encryption(ch, result);
    } else if (sel == 2){
        print_decryption(ch, result);
    }

    return 0;
}

void print_menu(int *sel){
    cout << "1. ��ȣȭ" << endl;
    cout << "2. ��ȣȭ" << endl;
    cout << "�޴� ����: ";

    cin >> *sel;
    cin.ignore();
}

void input_string(char *ch){
    cout << "���ڿ��� �Է��Ͻÿ�: ";
    cin.getline(ch, 50);

}

void print_encryption(char *ch, char *result){
    for(int i=0; i<strlen(ch); i++){
        if(isalpha(ch[i]) == 0){
            result[i] = ch[i];
        } else if(ch[i] > 119 || (ch[i] < 91 && ch[i] > 87)){
            result[i] = ch[i] - 23;
        } else {
            result[i] = ch[i] + 3;
        }
    }

    cout << "��ȣȭ �� ���ڿ�: " << result << endl;
}

void print_decryption(char *ch, char *result){
    for(int i=0; i<strlen(ch); i++){
        if(isalpha(ch[i]) == 0){
            result[i] = ch[i];
        } else if(ch[i] < 68 || (ch[i] < 100 && ch[i] > 96)){
            result[i] = ch[i] + 23;
        } else {
            result[i] = ch[i] - 3;
        }
    }

    cout << "��ȣȭ �� ���ڿ�: " << result << endl;
}