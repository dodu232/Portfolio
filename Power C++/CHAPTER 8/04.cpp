// ������ ��Ÿ���� Ŭ���� Employee�� �����غ���. � �Ӽ����� ��� �Լ����� ���� �� �ִ°�?

class Employee{
    char name[20];
    int age;
    char gender;
    int phone;
    char address[100];
    int salary;
    int career;

    public:
        void employ(char name, int age, char gender, int phone, char address, int salary);
        void fire(char name);
        void salaryIncrease(int money);
        void printEmployee(char name);
        int printCareer(char name);
};