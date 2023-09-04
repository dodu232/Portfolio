// 핸드폰을 나타내는 cellphone 클래스를 작성하여 보자. 핸드폰의 상태는 모델명, 제조사, 색상, 전원, 카메라 장착 여부로 나타낸다. 
// 이것들은 멤버 변수로 정의하고 각 멤버 변수에 대하여 접근자와 설정자를 작성한다. 전원을 끄고 켜는 멤버 함수도 첨가하여 보자. 
// cellphone 객체를 생성하여서 테스트하라.
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
            return "전원 켜짐";
        } else {
            return "전원 꺼짐";
        }
    }

    string getIsCamera(){
        if(isCamera){
            return "카메라 있음";
        } else {
            return "카메라 없음";
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