// ����⸦ ��Ÿ���� plane��� �̸��� Ŭ������ �����϶�. plane Ŭ������ �ĺ� ��ȣ, ��, �°����� ��� ������ ������ �ִ�.
// 1. ��� ��� ������ ���� ���
// 2. ��� ��� ������ ���� �����ڿ� ������ �ۼ�
// 3. planeŬ������ ������ �� ���� �ߺ� �����϶�. �����ڴ� ��� �����͸� ���� ���� �ְ� �ϳ��� ���� ���� �� �ִ�.
// 4. plane��ü�� ���� ���¸� �ֿܼ� ����ϴ� print�Լ��� ����
// 5. main���� plane��ü ���� ���� �����ϰ� �����ڿ� �����ڸ� ȣ���Ͽ� ����.
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
        cout << "�ĺ� ��ȣ: " << id << endl;
        cout << "��: " << model << endl;
        cout << "�°� ��: " << personnel << endl;
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