// MyArray라는 이름의 클래스를 작성하여 보자. MyArray는 정수들을 저장하는 동적 배열을 구현한다. 멤버 변수로는 배열의 크기를 나타내는 size와 정수들이
// 실제로 저장된 메모리를 가리키는 ptr을 가진다. 멤버 함수로는 정수를 추가하는 append(), 마지막 정수를 삭제하는 delete(), 배열 안의 정수를 출력하는
// print() 등을 가진다. MyArray객체를 생성하여서 테스트하라.
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