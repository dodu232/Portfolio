// �ڵ����� ��Ÿ���� cellphone Ŭ������ �ۼ��Ͽ� ����. �ڵ����� ���´� �𵨸�, ������, ����, ����, ī�޶� ���� ���η� ��Ÿ����. 
// �̰͵��� ��� ������ �����ϰ� �� ��� ������ ���Ͽ� �����ڿ� �����ڸ� �ۼ��Ѵ�. ������ ���� �Ѵ� ��� �Լ��� ÷���Ͽ� ����. 
// cellphone ��ü�� �����Ͽ��� �׽�Ʈ�϶�.
#include <iostream>
#include <string>
using namespace std;

class CellPhone{
private:
    string modelName;
    string company;
    string color;
    bool power;
    bool isCamera;

public:
    //getter
    string getModelName(){
        return modelName;
    }

    string getCompany(){
        return company;
    }

    string getColor(){
        return color;
    }

    string getPower(){
        if(power){
            return "���� ����";
        } else {
            return "���� ����";
        }
    }

    string getIsCamera(){
        if(isCamera){
            return "ī�޶� ����";
        } else {
            return "ī�޶� ����";
        }
    }

    //setter
    void setModelName(string n){
        modelName = n;
    }

    void setCompaney(string c){
        company = c;
    }

    void setColor(string c){
        color = c;
    }

    void setPower(bool p){
        power = p;
    }

    void setIsCamera(bool i){
        isCamera = i;
    }

    //method
    void turn_off(){
        power = false;
    }

    void turn_on(){
        power = true;
    }

};

int main(){
    CellPhone galaxy;

    galaxy.setModelName("S23");
    galaxy.setCompaney("samsung");
    galaxy.setColor("white");
    galaxy.setPower(false);
    galaxy.setIsCamera(true);

    cout << galaxy.getModelName() << ", " << galaxy.getCompany() << ", " << galaxy.getColor() << ", " << galaxy.getPower() << ", " <<
    galaxy.getIsCamera() << endl;

    galaxy.turn_on();

    cout << galaxy.getModelName() << ", " << galaxy.getCompany() << ", " << galaxy.getColor() << ", " << galaxy.getPower() << ", " <<
    galaxy.getIsCamera() << endl;

    return 0;
}