// 직원을 나타내는 클래스 Employee를 설계해보라. 어떤 속성값과 멤버 함수들을 가질 수 있는가?

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