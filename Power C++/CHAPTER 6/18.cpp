// 사용자에게 영어 이름을 성과 이름으로 나누어서 대문자로 입력하도록 하여서 성과 이름의 위치를 바꾸고
// 소문자로 변환하여 출력하는 프로그램을 작성하라. 
// 즉 사용자가 HONG GIL DONG을 입력하면 gil dong, hong과 같이 출력하도록 하라.
#include <iostream>
using namespace std;

// 이름 입력
void input_name(char *name);

// 이름 출력
void print_name(char *name, char *firstName);

// 성 출력
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
        cout << "이름 입력(대문자): ";
        cin.getline(name, 50);

        for(int i=0; i<50; i++){
            if(isalpha(name[i]) == 2){
                cout << "소문자 입력" << endl;
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