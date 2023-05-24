#include <iostream>
#include <string>
using namespace std;

void PrintMenu(void);
void AccProduce(void);
void AddMoney(void);
void WithdrawMoney(void);
void PrintAllAcc(void);

struct Account{
    int accId;
    string name;
    int balance;
};

Account accArr[100];
int accNum = 0;

int main(){

    while(true){

        cout << "���� ���� ����: " << accNum << endl;
        PrintMenu();

        int sel;
        cin >> sel;
        cout << endl;

        if(sel == 1){
            AccProduce();
        } else if(sel == 2){
            AddMoney();
        } else if(sel == 3){
            WithdrawMoney();
        } else if(sel == 4){
            PrintAllAcc();
        } else if(sel == 5){
            cout << "���α׷��� ���� �մϴ�." << endl;
            break;
        } else {
            cout << "��ȿ���� ���� �����Դϴ�." << endl;
        }
        cout << endl;
    }

    return 0;
}


void PrintMenu(void){
    cout << "--- menu --- " << endl;
    cout << "1. ���°���" << endl;
    cout << "2. �� ��" << endl;
    cout << "3. �� ��" << endl;
    cout << "4. �������� ��ü ���" << endl;
    cout << "5. ���α׷� ����" << endl;
    cout << "����: ";
}

void AccProduce(void){
    int balance;
    string name;

    cout << "�̸��� �Է��� �ּ���." ;
    cin >> name;
    cout << "�Աݾ��� �Է��� �ּ���.";
    cin >> balance;
    
    accArr[accNum].accId = accNum + 1;
    accArr[accNum].name = name;
    accArr[accNum].balance = balance;
    accNum++;

    cout << "���� ���� �Ϸ�" << endl;
    cout << "���� ID: " << accNum << endl;
    cout << "�̸�: " << name << endl;
    cout << "�ܾ�: " << balance << endl;
    cout << "" << endl;
}

void AddMoney(void){
    int accId, money, saveId;
    bool accCheck = false;

    cout << "�Ա� �޴� �Դϴ�." << endl;
    cout << "���� ID�� �Է��� �ּ���: ";
    cin >> accId;

    for(int i=0; i<accNum; i++){
        if(accArr[i].accId == accId){
            accCheck = true;
            saveId = i;
            break;
        }
    }

    if(accCheck){
        cout << "�Ա� �ݾ��� �Է��� �ּ���: ";
        cin >> money;
        accArr[saveId].balance += money;
        cout << "�Ա��� �Ϸ� �Ǿ����ϴ�." << endl;
        cout << "�ܾ�: " << accArr[saveId].balance << "��" << endl;
    } else {
        cout << "�������� �ʴ� ���� ID �Դϴ�." << endl;
    }

}

void WithdrawMoney(void){
    int accId, money, saveId;
    bool accCheck = false;

    cout << "��� �޴� �Դϴ�." << endl;
    cout << "���� ID�� �Է��� �ּ���: ";
    cin >> accId;

    for(int i=0; i<accNum; i++){
        if(accArr[i].accId == accId){
            accCheck = true;
            saveId = i;
            break;
        }
    }

    if(accCheck){
        cout << "��� �ݾ��� �Է��� �ּ���: ";
        cin >> money;

        if(accArr[saveId].balance >= money){
            accArr[saveId].balance -= money;
            cout << "����� �Ϸ� �Ǿ����ϴ�." << endl;
            cout << "�ܾ�: " << accArr[saveId].balance << "��" << endl;
        } else {
            cout << "�ܾ��� �����մϴ�." << endl;
        }

    } else {
        cout << "�������� �ʴ� ���� ID �Դϴ�." << endl;
    }

}

void PrintAllAcc(void){
    for(int i=0; i<accNum; i++){
        cout << "���� ID: " << accArr[i].accId << " �̸�: " << accArr[i].name << " �ܾ�: " << accArr[i].balance << "��" << endl; 
    }
}