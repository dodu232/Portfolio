// 사각형을 나타내는 Rectangle이라고 이름 붙여진 클래스를 설계하여 보자. Rectangle은 사각형의 가로를 나타내는 width와 length를
// 멤버 변수로 가진다. 또한 사각형의 넓이를 계산하여서 반환하는 calcArea()를 멤버 함수로 가진다.
// Rectangle 클래스를 접근자, 설정자를 추가하여서 구현하여 보라.
#include <iostream>
using namespace std;

class Rectangle{
private:
    int width;
    int length;

public:
    // getter
    int getWidth(){
        return width;
    }
    int getLength(){
        return length;
    }

    // setter
    void setWidth(int x){
        width = x;
    }
    void setLength(int x){
        length = x;
    }

    // method
    int calcArea(){
        return width * length;
    }
};

int main(){
    Rectangle rectangle;

    rectangle.setWidth(13);
    rectangle.setLength(34);

    cout << rectangle.calcArea() << endl;

    return 0;
}