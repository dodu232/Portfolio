// MyArray��� �̸��� Ŭ������ �ۼ��Ͽ� ����. MyArray�� �������� �����ϴ� ���� �迭�� �����Ѵ�. ��� �����δ� �迭�� ũ�⸦ ��Ÿ���� size�� ��������
// ������ ����� �޸𸮸� ����Ű�� ptr�� ������. ��� �Լ��δ� ������ �߰��ϴ� append(), ������ ������ �����ϴ� delete(), �迭 ���� ������ ����ϴ�
// print() ���� ������. MyArray��ü�� �����Ͽ��� �׽�Ʈ�϶�.
#include <iostream>
using namespace std;

class MyArray{
private:
    int size = 0;
    int *ptr;

public:
    int getSize(){
        return size;
    }

    void append(int x);
    void del();
    void print();

};

void MyArray::append(int x){
    int *temp = ptr;
    ptr = new int[size+1];

    for(int i=0; i<size; i++){
        *(ptr + i) = *(temp + i);
    }

    ptr[size] = x;    
    size ++;

}

void MyArray::del(){
    int *temp = ptr;
    
    size--;
    ptr = new int[size];

    for(int i=0; i<size; i++){
        *(ptr + i) = *(temp + i);
    }

}

void MyArray::print(){
    for(int i=0; i<size; i++){
        cout << *(ptr + i) << " ";
    }
    cout << endl;
}

int main(){
    MyArray arr;

    arr.append(1); 
    arr.append(3);

    arr.print();

    arr.del();

    arr.print();

    return 0;
}