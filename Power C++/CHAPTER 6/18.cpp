// ����ڿ��� ���� �̸��� ���� �̸����� ����� �빮�ڷ� �Է��ϵ��� �Ͽ��� ���� �̸��� ��ġ�� �ٲٰ�
// �ҹ��ڷ� ��ȯ�Ͽ� ����ϴ� ���α׷��� �ۼ��϶�. 
// �� ����ڰ� HONG GIL DONG�� �Է��ϸ� gil dong, hong�� ���� ����ϵ��� �϶�.
#include <iostream>
using namespace std;

// �̸� �Է�
void input_name(char *name);

// �̸� ���
void print_name(char *name, char *firstName);

// �� ���
void print_first_name(char *firstName);

int main(){
    char name[50] = {' '};
    input_name(name);

    char firstName[10] = {' '};
    print_name(name, firstName);

    print_first_name(firstName);

    return 0;
}

void input_name(char *name){
    while(true){
        bool check = true; 
        cout << "�̸� �Է�(�빮��): ";
        cin.getline(name, 50);

        for(int i=0; i<50; i++){
            if(isalpha(name[i]) == 2){
                cout << "�ҹ��� �Է�" << endl;
                check = false;
                break;
            } else if(isalpha(name[i]) == 1){
                name[i] += 32;
            }
        }

        if(check){
            break;
        }
    }
}

void print_name(char *name, char *firstName){
    for(int i=0; i<50; i++){
        if(isalpha(name[i]) == 0){
            break;
        }
        firstName[i] = name[i];
        name[i] = {'@'};
    }

    for(int i=0; i<50; i++){
        if(name[i] != '@'){
            cout << name[i];
        }
    }

    cout << ", ";
}

void print_first_name(char *firstName){
    cout << firstName << endl;
}