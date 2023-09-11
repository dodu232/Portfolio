// 국가를 나타내는 클래스 Nation을 작성하여 보자. Nation 클래스는 국가 이름, 인구, 넓이, 국민 소득 등의 데이터를 가지고 있다.
// 1. Nation 클래스를 정의하고 적절한 생성자를 추가하라.
// 2. 접근자와 생성자를 비록하여 필요한 멤버 함수들을 추가하라.
// 3. main()에서 몇 개의 Nation 객체를 생성하고 가장 인구가 많은 국가, 가장 국민 소득이 높은 국가를 탐색하여 화면에 출력하는 프로그램을 작성하라.
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

    n[0].setInfo("한국", 0.5174, 100210, 2.472);
    n[1].setInfo("중국", 14.2567, 9597000, 27.06);
    n[2].setInfo("일본", 1.2541, 377973, 5.601);

    double max = 0;
    int maxI = 0;

    for(int i=0; i<3; i++){
        if(max < n[i].getPopulation()){
            max = n[i].getPopulation();
            maxI = i;
        }
    }

    cout << "가장 인구가 많은 나라는 " << max * 10000 << "만명의 " << n[maxI].getName() << "입니다." << endl;

    max = 0;
    maxI = 0;
    for(int i=0; i<4; i++){
        if(max < n[i].getNationalIncome()){
            max = n[i].getNationalIncome();
            maxI = i;
        }
    }

    cout << "가장 국민 소득이 많은 나라는 " << max << "조원의 " << n[maxI].getName() << "입니다." << endl;

    return 0;
}