// 비행기를 나타내는 plane라는 이름의 클래스를 설계하라. plane 클래스는 식별 번호, 모델, 승객수를 멤버 변수로 가지고 있다.
// 1. 모든 멤버 변수는 전용 멤버
// 2. 모든 멤버 변수에 대한 접근자와 설정자 작성
// 3. plane클래스의 생성자 몇 개를 중복 정의하라. 생성자는 모든 데이터를 받을 수도 있고 하나도 받지 않을 수 있다.
// 4. plane객체의 현재 상태를 콘솔에 출력하는 print함수도 포함
// 5. main에서 plane객체 여러 개를 생성하고 접근자와 설정자를 호출하여 보라.
#include <iostream>
#include <string>
using namespace std;

class Plane{
private:
    string id;
    string model;
    int personnel;

public:
    //getter
    string getId(){
        return id;
    }

    string getModel(){
        return model;
    }

    int getPersonnel(){
        return personnel;
    }

    // setter
    void setId(string s){
        id = s;
    }

    void setModel(string s){
        model = s;
    }

    void setPersonnel(int n){
        personnel = n;
    }

    // constructor
    Plane();
    Plane(string id, string model, int personnel);

    // method
    void print();
};

Plane::Plane(){
    id = "bo737";
    model = "boing";
    personnel = 37;
}

Plane::Plane(string i, string m, int p){
    id = i;
    model = m;
    personnel = p;
}

void Plane::print(){
        cout << "식별 번호: " << id << endl;
        cout << "모델: " << model << endl;
        cout << "승객 수: " << personnel << endl;
    }

int main(){
    Plane p1;
    Plane p2("A324", "hoing", 20);

    p1.print();
    p2.print();

    p1.setId("F490");
    p2.setModel("dool2");

    cout << p1.getId() << endl;
    cout << p2.getModel() << endl;

    return 0;
}