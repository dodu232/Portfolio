// 상자를 나타내는 Box라는 이름의 클래스를 설계하라. Box클래스는 상자의 높이, 너비, 길이이를 멤버 변수로 가지고 있다.
// 1. Box클래스의 생성자를 중복 정의하라. 생성자는 모든 데이터를 받을 수도 있고 아니면 하나도 받지 않을 수 있다. 새로 생성된 Box는 비어 있다고 가정한다.
// 2. 박스가 비어 있는지 그렇지 않은지를 나타내는 empty라고 하는 멤버 함수도 추가한다. 부피를 계산하는 getVolume 멤버 함수도 추가한다.
// 3. 접근자와 생성자를 비롯하여 필요한 멤버 함수들을 추가하라.
// 4. main에서 몇 개의 box 객체를 생성하고 가장 부피가 큰 박스를 탐색하여 화면에 출력하는 프로그램을 작성하라.
#include <iostream>
using namespace std;

class Box{
private:
    int height;
    int width;
    int length;

public:
    //getter
    int getHeight(){
        return height; 
    }

    int getWidth(){
        return width;
    }

    int getLength(){
        return length;
    }

    void setHeight(int h){
        height = h;
    }

    void setWidth(int w){
        width = w;
    }

    void setLenght(int l){
        length = l;
    }

    Box();
    Box(int height, int width, int length);
    bool empty(Box box);
    int getVolume();
};

Box::Box(){

}

Box::Box(int h, int w, int l){
    height = h;
    width = w;
    length = l;
}

bool Box::empty(Box box){
    if(box.getVolume() == 0){
        return true;
    } else {
        return false;
    }
}

int Box::getVolume(){
    int sum = height * width * length;
    cout << sum << endl;
    return sum;
}

int main(){
    Box b1;
    Box b2(3, 5, 6);
    Box b3(4, 2, 7);
    Box b4(6, 3, 6);

    int max;

    if(max < b1.getVolume()){
        max = b1.getVolume();
    } 
    if(max < b2.getVolume()){
        max = b2.getVolume();
    } 
    if(max < b3.getVolume()){
        max = b3.getVolume();
    } 
    if(max < b4.getVolume()){
        max = b4.getVolume();
    } 

    cout << "가장 부피가 큰 상자의 부피는 " << max << "입니다" << endl;
}