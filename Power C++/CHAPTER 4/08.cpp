// ���� ���α׷�
// ������� �� ���� ���Ǿ����� ���
// 1. ���� ���� ���� ���
// 2. ���� ���� ���
#include <iostream>
#include <string>
using namespace std;

int addCnt;
int minusCnt;

void add(int x, int y);
void subtraction(int x, int y);
void multiplication(int x, int y);
void division(int x, int y);

int main(){
    while(true){
        string str, str1, str2, str3;
        int x, y;
        
        cout << "���� �Է�: ";
        getline(cin, str);

        str1 = str.substr(0, str.find(" "));
        str2 = str.substr(str.find(" ")+1, str.find(" "));
        str3 = str.substr(str.find(" ")+3, str.length());

        x = atoi(str1.c_str());
        y = atoi(str3.c_str());

        if(str2.compare("+") == 0){
            add(x, y);
        } else if(str2.compare("-") == 0){
            subtraction(x, y);
        } else if(str2.compare("*") == 0){
            multiplication(x, y);
        } else if(str2.compare("/") == 0){
            division(x, y);
        } else {
            cout << "�߸��� �Է�" << endl;
            break;
        }
        
    }

    return 0;
}

void add(int x, int y){
    addCnt++;
    cout << "������: " << x + y << endl;
    cout << "������ �� " << addCnt << "�� ����Ǿ����ϴ�." << endl;
}

void subtraction(int x, int y){
    minusCnt++;
    cout << "������: " << x - y << endl;
    cout << "������ �� " << minusCnt << "�� ����Ǿ����ϴ�." << endl;
}

void multiplication(int x, int y){
    static int mulCnt;
    mulCnt++;
    cout << "������: " << x * y << endl;
    cout << "������ �� " << mulCnt << "�� ����Ǿ����ϴ�." << endl;
}

void division(int x, int y){
    static int divCnt;
    divCnt++;
    cout << "������: " << x / y << endl;
    cout << "�������� �� " << divCnt << "�� ����Ǿ����ϴ�." << endl;
}
