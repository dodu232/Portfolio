// ��¥�� ��Ÿ���� Date Ŭ������ �����϶�. Date Ŭ������ year, month, day�� ��� ������ ������ �����ڿ� �Ҹ��ڵ� ������. �̾ ������ ��Ÿ���� Employee Ŭ������ �����Ѵ�. 
// Employee Ŭ������ ������ �̸��� ������ ����, ������ �Ի��ϸ� ������ �ִ�. ���ϰ� �Ի����� Date ��ü�� ǥ���ȴ�. Employee Ŭ������ �����ڴ� �̸�, ����, �Ի����� �Ű� ������ �޴´�.
// Employee(string name, Date& birthDate, Date& hireDate);
// Employee Ŭ������ �����ϰ� ��ü�� �����Ͽ��� �׽�Ʈ�϶�.
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
    return to_string(year) + "��" + to_string(month) + "��" + to_string(day) + "��";
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
    cout << "�̸�: " << name ;
    cout << ", ����: " << birthDate.getDate();
    cout << ", �Ի���: " << hireDate.getDate() << endl;
}

int main(){
    Date d1;
    Date d2(1992, 1, 23);
    Date d3(2032, 3, 9);

    cout << d1.getDate() << endl;
    cout << d2.getDate() << endl;
    cout << d3.getDate() << endl;
    
    Employee e1("����", d2, d3);
    Employee e2("¯��", d2, d1);

    e1.print();
    e2.print();

    return 0;
}