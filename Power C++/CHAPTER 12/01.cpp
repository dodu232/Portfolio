// 정수형 배열을 나타내는 Array를 구현하여 보자. 생성자는 배열의 크기만을 받거나 포인터 기반의 배열을 매개 변수로 받는다.
// 멤버로는 현재 크기를 나타내는 size와 데이터가 저장된 위치를 가리키는 포인터인 ptr이 있다.
// 1. 출력 연산자인 <<을 중복 정의한다.
// 2. ==와 != 연산자를 중복 정의하여서 두 개의 배열을 비교할 수 있도록 한다.
// 3. []연산자를 중복 정의하여서 배열의 요소를 반환하도록 한다. 이 때에 인덱스가 배열의 크기를 넘었는지를 검사한다.
// 4. = 연산자를 중복 정의하여서 하나의 배열을 다른 배열로 대입할 수 있도록 한다.
#include <iostream>
using namespace std;

class Array{
    friend bool operator==(const Array& a1, const Array& a2);
    friend bool operator!=(const Array& a1, const Array& a2);
    friend ostream& operator<<(ostream& os, const Array& a);
private:
    int size;
    int *ptr;
public:
    Array(int size = 0): size(size){
        ptr = new int[size];

        for(int i=0; i< size; i++){
            ptr[i] = 0;
        }
    }
    Array(int *ptr): ptr(ptr){}
    ~Array(){
        delete [] ptr;
        ptr = NULL;
    }

    int& operator[](int n);
    Array& operator=(const Array& a2);
};

bool operator==(const Array& a1, const Array& a2){
    if(a1.size != a2.size){
        return false;
    } else {
        for(int i=0; i<a1.size; i++){
            if(a1.ptr[i] != a2.ptr[i]){
                return false;
            }
        }
        return true;
    }
}

bool operator!=(const Array& a1, const Array& a2){
    return !(a1 == a2);
    
}

ostream& operator<<(ostream& os, const Array& a){
    for(int i=0; i<a.size; i++){
        os << a.ptr[i] << ' ';
    }
    os << endl;
    return os;
}

int& Array::operator[](int n){
    if(0 <= n && n < size)
    return ptr[n];
}

Array& Array::operator=(const Array& a2){
    delete [] ptr;
    this->size = a2.size;
    ptr = new int[size];

    for(int i=0; i<size; i++){
        this->ptr[i] = a2.ptr[i];        
    }
    return *this;

}

int main(){
    Array a1(10);
    Array a2(8);

    cout << ((a1 != a2) ? "t " : "f" ) << endl;

    a1[0] = 1;

    a2 = a1;

    cout << ((a1 == a2) ? "t " : "f" ) << endl;

    cout << a1 ;
    cout << a2;

    return 0;
}