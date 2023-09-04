// 직원을 나타내는 Employee 클래스를 작성하여 보자. 직원은 이름, 전화 번호, 연봉을 멤버 변수로 가지고 있다.
// 각 멤버 변수에 대하여 접근자와 설정자를 작성하라. Employee 객체를 생성하여서 테스트하라.
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