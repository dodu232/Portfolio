// ������ ���� ���¸� ��Ÿ���� BankAccount Ŭ������ ������ ���� ����� �ϴ� ��� �Լ��� �߰��ϰ� �׽�Ʈ�϶�.
// ���� ��ü�� �ܾ׿��� amount��ŭ�� otherAccount ���·� �۱��Ѵ�.
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
    cout << "�ܾ��� " << balance << "�Դϴ�." << endl;
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