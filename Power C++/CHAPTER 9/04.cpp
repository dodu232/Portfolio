// ������ ��Ÿ���� Employee Ŭ������ �ۼ��Ͽ� ����. ������ �̸�, ��ȭ ��ȣ, ������ ��� ������ ������ �ִ�.
// �� ��� ������ ���Ͽ� �����ڿ� �����ڸ� �ۼ��϶�. Employee ��ü�� �����Ͽ��� �׽�Ʈ�϶�.
#include <iostream>
#include <string>
using namespace std;

class Employee{
private: 
    string name;
    string phone;
    int salary;

public:
    // getter
    string getName(){
        return name;
    }

    string getPhone(){
        return phone;
    }

    int getSalary(){
        return salary;
    }

    // setter
    void setName(string n){
        name = n;
    }

    void setPhone(string p){
        phone = p;
    }

    void setSalary(int s){
        salary = s;
    }

    // method
    void print(){
        cout << name << " " << phone << " " << salary << endl;
    } 
};

int main(){
    Employee employee;

    employee.setName("rani");
    employee.setPhone("010-1234-1243");
    employee.setSalary(20000000);

    employee.print();

    return 0;
}