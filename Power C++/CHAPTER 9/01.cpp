// �簢���� ��Ÿ���� Rectangle�̶�� �̸� �ٿ��� Ŭ������ �����Ͽ� ����. Rectangle�� �簢���� ���θ� ��Ÿ���� width�� length��
// ��� ������ ������. ���� �簢���� ���̸� ����Ͽ��� ��ȯ�ϴ� calcArea()�� ��� �Լ��� ������.
// Rectangle Ŭ������ ������, �����ڸ� �߰��Ͽ��� �����Ͽ� ����.
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