// product��� �̸��� Ŭ������ �ۼ��Ͽ� ����. ��� ������ name, price, assessment�� ������. ��� �Լ��δ� ��ǰ�� ���� �������� �д� getinfo, 
// �� ���� ��ǰ�� ���ϴ� bool isbetter(product another), ��ǰ�� ���� ������ ����ϴ� print�� ������. product��ü�� �����Ͽ��� �׽�Ʈ�϶�.
#include <iostream>
#include <string>
using namespace std;

class Product{
private:
    string name;
    int price;
    string assessment;

public:
    string getName(){
        return name;
    }

    int getPrice(){
        return price;
    }

    void getInfo();
    bool isBetter(Product another);
    void print();
};

void Product::getInfo(){
    cout << "�̸�: ";
    getline(cin, name);

    cout << "����: ";
    cin >> price;

    cout << "��: ";
    cin.ignore();
    getline(cin, assessment);
}

bool Product::isBetter(Product another){
    if(price < another.getPrice()){
        return true;
    }else{
        return false;
    }
}

void Product::print(){
    cout << "�̸�: " << name << ", ����: " << price << ", ��: " << assessment << endl;
}

int main(){
    Product p1;
    Product p2;

    p1.getInfo();
    p2.getInfo();

    p1.print();
    p2.print();

    if(p1.isBetter(p2)){
        cout << p1.getName() << "�� �� �δ�" << endl;
    } else {
        cout << p1.getName() << "�� �� ���� ����" << endl;
    }
}