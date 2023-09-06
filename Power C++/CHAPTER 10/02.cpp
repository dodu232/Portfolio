// ���ڸ� ��Ÿ���� Box��� �̸��� Ŭ������ �����϶�. BoxŬ������ ������ ����, �ʺ�, �����̸� ��� ������ ������ �ִ�.
// 1. BoxŬ������ �����ڸ� �ߺ� �����϶�. �����ڴ� ��� �����͸� ���� ���� �ְ� �ƴϸ� �ϳ��� ���� ���� �� �ִ�. ���� ������ Box�� ��� �ִٰ� �����Ѵ�.
// 2. �ڽ��� ��� �ִ��� �׷��� �������� ��Ÿ���� empty��� �ϴ� ��� �Լ��� �߰��Ѵ�. ���Ǹ� ����ϴ� getVolume ��� �Լ��� �߰��Ѵ�.
// 3. �����ڿ� �����ڸ� ����Ͽ� �ʿ��� ��� �Լ����� �߰��϶�.
// 4. main���� �� ���� box ��ü�� �����ϰ� ���� ���ǰ� ū �ڽ��� Ž���Ͽ� ȭ�鿡 ����ϴ� ���α׷��� �ۼ��϶�.
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

    cout << "���� ���ǰ� ū ������ ���Ǵ� " << max << "�Դϴ�" << endl;
}