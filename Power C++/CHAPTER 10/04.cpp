// ������ ��Ÿ���� Ŭ���� Nation�� �ۼ��Ͽ� ����. Nation Ŭ������ ���� �̸�, �α�, ����, ���� �ҵ� ���� �����͸� ������ �ִ�.
// 1. Nation Ŭ������ �����ϰ� ������ �����ڸ� �߰��϶�.
// 2. �����ڿ� �����ڸ� ����Ͽ� �ʿ��� ��� �Լ����� �߰��϶�.
// 3. main()���� �� ���� Nation ��ü�� �����ϰ� ���� �α��� ���� ����, ���� ���� �ҵ��� ���� ������ Ž���Ͽ� ȭ�鿡 ����ϴ� ���α׷��� �ۼ��϶�.
#include <iostream>
#include <string>
using namespace std;

class Nation{
private: 
    string name;
    double population;
    double area;
    double nationalIncome;

public:
    string getName(){
        return name;
    }

    double getPopulation(){
        return population;
    }

    double getArea(){
        return area;
    }

    double getNationalIncome(){
        return nationalIncome;
    }

    void setInfo(string n, double p, double a, double n2);
};

void Nation::setInfo(string n, double p, double a, double n2){
        name = n;
        population = p;
        area = a;
        nationalIncome = n2;
}

int main(){
    Nation n[3];

    n[0].setInfo("�ѱ�", 0.5174, 100210, 2.472);
    n[1].setInfo("�߱�", 14.2567, 9597000, 27.06);
    n[2].setInfo("�Ϻ�", 1.2541, 377973, 5.601);

    double max = 0;
    int maxI = 0;

    for(int i=0; i<3; i++){
        if(max < n[i].getPopulation()){
            max = n[i].getPopulation();
            maxI = i;
        }
    }

    cout << "���� �α��� ���� ����� " << max * 10000 << "������ " << n[maxI].getName() << "�Դϴ�." << endl;

    max = 0;
    maxI = 0;
    for(int i=0; i<4; i++){
        if(max < n[i].getNationalIncome()){
            max = n[i].getNationalIncome();
            maxI = i;
        }
    }

    cout << "���� ���� �ҵ��� ���� ����� " << max << "������ " << n[maxI].getName() << "�Դϴ�." << endl;

    return 0;
}