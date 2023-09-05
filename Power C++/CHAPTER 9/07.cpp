// 본문의 은행 계좌를 나타내는 BankAccount 클래스에 다음과 같은 기능을 하는 멤버 함수를 추가하고 테스트하라.
// 현재 객체의 잔액에서 amount만큼을 otherAccount 계좌로 송금한다.
#include <iostream>
#include <string>
using namespace std;

class BankAccount{
private:
    int accNum;
    string owner;
    int balance;

public:
    //getter
    int getBalance(){
        return balance;
    }

    //setter
    void setBalance(int amount){
        balance = amount;
    }

    //method
    void deposit(int amonut);
    void withdraw(int amount);
    void print();
    int transfer(int amount, BankAccount otherAcc);
};

void BankAccount::deposit(int amount){
    balance += amount;
}

void BankAccount::withdraw(int amount){
    balance -= amount;
}

void BankAccount::print(){
    cout << "잔액은 " << balance << "입니다." << endl;
}

int BankAccount::transfer(int amount, BankAccount otherAcc){
    balance -= amount;
    return amount;
}

int main(){
    BankAccount bo;
    BankAccount soo;

    bo.setBalance(1000000);
    soo.setBalance(2000000);

    bo.print();
    soo.print();

    soo.deposit(bo.transfer(1000000, soo));

    bo.print();
    soo.print();

    return 0;
}