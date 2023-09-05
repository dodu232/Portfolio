// �ﰢ���� ��Ÿ���� Triangle Ŭ������ �����Ͽ� ����. Triangle Ŭ������ �غ��� ����, ������ ��Ÿ���� ��� ������ ������. 
// �� ��� ������ ���Ͽ� �����ڿ� �����ڸ� �ۼ��Ѵ�. �ﰢ���� ������ ���ϴ� ��� �Լ� getArea�� �߰��϶�. Triangle ��ü�� �����Ͽ��� �׽�Ʈ�϶�.
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