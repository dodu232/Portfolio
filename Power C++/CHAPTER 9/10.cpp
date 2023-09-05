// product라는 이름의 클래스를 작성하여 보자. 멤버 변수는 name, price, assessment를 가진다. 멤버 함수로는 제품에 대한 정보들을 읽는 getinfo, 
// 두 개의 제품을 비교하는 bool isbetter(product another), 제품에 대한 정보를 출력하는 print를 가진다. product객체를 생성하여서 테스트하라.
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
    cout << "이름: ";
    getline(cin, name);

    cout << "가격: ";
    cin >> price;

    cout << "평가: ";
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
    cout << "이름: " << name << ", 가격: " << price << ", 평가: " << assessment << endl;
}

int main(){
    Product p1;
    Product p2;

    p1.getInfo();
    p2.getInfo();

    p1.print();
    p2.print();

    if(p1.isBetter(p2)){
        cout << p1.getName() << "이 더 싸다" << endl;
    } else {
        cout << p1.getName() << "이 더 싸지 않음" << endl;
    }
}