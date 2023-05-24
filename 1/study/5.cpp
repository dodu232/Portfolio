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

        cout << "현재 계좌 개수: " << accNum << endl;
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
            cout << "프로그램을 종료 합니다." << endl;
            break;
        } else {
            cout << "유효하지 않은 선택입니다." << endl;
        }
        cout << endl;
    }

    return 0;
}


void PrintMenu(void){
    cout << "--- menu --- " << endl;
    cout << "1. 계좌개설" << endl;
    cout << "2. 입 금" << endl;
    cout << "3. 출 금" << endl;
    cout << "4. 계좌정보 전체 출력" << endl;
    cout << "5. 프로그램 종료" << endl;
    cout << "선택: ";
}

void AccProduce(void){
    int balance;
    string name;

    cout << "이름을 입력해 주세요." ;
    cin >> name;
    cout << "입금액을 입력해 주세요.";
    cin >> balance;
    
    accArr[accNum].accId = accNum + 1;
    accArr[accNum].name = name;
    accArr[accNum].balance = balance;
    accNum++;

    cout << "계좌 개설 완료" << endl;
    cout << "계좌 ID: " << accNum << endl;
    cout << "이름: " << name << endl;
    cout << "잔액: " << balance << endl;
    cout << "" << endl;
}

void AddMoney(void){
    int accId, money, saveId;
    bool accCheck = false;

    cout << "입금 메뉴 입니다." << endl;
    cout << "계좌 ID를 입력해 주세요: ";
    cin >> accId;

    for(int i=0; i<accNum; i++){
        if(accArr[i].accId == accId){
            accCheck = true;
            saveId = i;
            break;
        }
    }

    if(accCheck){
        cout << "입금 금액을 입력해 주세요: ";
        cin >> money;
        accArr[saveId].balance += money;
        cout << "입금이 완료 되었습니다." << endl;
        cout << "잔액: " << accArr[saveId].balance << "원" << endl;
    } else {
        cout << "존재하지 않는 계좌 ID 입니다." << endl;
    }

}

void WithdrawMoney(void){
    int accId, money, saveId;
    bool accCheck = false;

    cout << "출금 메뉴 입니다." << endl;
    cout << "계좌 ID를 입력해 주세요: ";
    cin >> accId;

    for(int i=0; i<accNum; i++){
        if(accArr[i].accId == accId){
            accCheck = true;
            saveId = i;
            break;
        }
    }

    if(accCheck){
        cout << "출금 금액을 입력해 주세요: ";
        cin >> money;

        if(accArr[saveId].balance >= money){
            accArr[saveId].balance -= money;
            cout << "출금이 완료 되었습니다." << endl;
            cout << "잔액: " << accArr[saveId].balance << "원" << endl;
        } else {
            cout << "잔액이 부족합니다." << endl;
        }

    } else {
        cout << "존재하지 않는 계좌 ID 입니다." << endl;
    }

}

void PrintAllAcc(void){
    for(int i=0; i<accNum; i++){
        cout << "계좌 ID: " << accArr[i].accId << " 이름: " << accArr[i].name << " 잔액: " << accArr[i].balance << "원" << endl; 
    }
}