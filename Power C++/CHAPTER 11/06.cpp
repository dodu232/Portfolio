// 날짜를 나타내는 Date 클래스를 정의하라. Date 클래스는 year, month, day를 멤버 변수로 가지며 생성자와 소멸자도 가진다. 이어서 직원을 나타내는 Employee 클래스를 정의한다. 
// Employee 클래스는 직원의 이름과 직원의 생일, 직원의 입사일를 가지고 있다. 생일과 입사일은 Date 객체로 표현된다. Employee 클래스의 생성자는 이름, 생일, 입사일을 매개 변수로 받는다.
// Employee(string name, Date& birthDate, Date& hireDate);
// Employee 클래스를 구현하고 객체를 생성하여서 테스트하라.
#include <iostream>
#include <string>
using namespace std;

class Date{
private:
    int year;
    int month;
    int day;

public:
    Date(int y=2023, int m=9, int d=19): year(y), month(m), day(d){}
    ~Date() {};

    string getDate();
};

string Date::getDate(){
    return to_string(year) + "년" + to_string(month) + "월" + to_string(day) + "일";
}

class Employee{
private:
    string name;
    Date birthDate;
    Date hireDate;

public:
    Employee(string n, Date& b, Date& h): name(n), birthDate(b), hireDate(h) {}

    void print();
};

void Employee::print(){
    cout << "이름: " << name ;
    cout << ", 생일: " << birthDate.getDate();
    cout << ", 입사일: " << hireDate.getDate() << endl;
}

int main(){
    Date d1;
    Date d2(1992, 1, 23);
    Date d3(2032, 3, 9);

    cout << d1.getDate() << endl;
    cout << d2.getDate() << endl;
    cout << d3.getDate() << endl;
    
    Employee e1("보경", d2, d3);
    Employee e2("짱구", d2, d1);

    e1.print();
    e2.print();

    return 0;
}