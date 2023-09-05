// 삼각형을 나타내는 Triangle 클래스를 정의하여 보자. Triangle 클래스는 밑변과 높이, 면적을 나타내는 멤버 변수를 가진다. 
// 각 멤버 변수에 대하여 접근자와 설정자를 작성한다. 삼각형의 면적을 구하는 멤버 함수 getArea를 추가하라. Triangle 객체를 생성하여서 테스트하라.
#include <iostream>
using namespace std;

class Triangle{
private:
    int width;
    int height;
    double area;

public:
    //getter
    int getWidth(){
        return width;
    }

    int getHeight(){
        return height;
    }

    double getArea(){
        return width * height / 2;
    }

    // setter
    void setWidth(int x){
        width = x;
    }

    void setHeight(int x){
        height = x;
    }

    void setArea(int x, int y){
        area = x * y / 2;
    }

};

int main(){
    Triangle t;

    t.setHeight(8);
    t.setWidth(4);
    
    cout << t.getArea() << endl;

    return 0;
}