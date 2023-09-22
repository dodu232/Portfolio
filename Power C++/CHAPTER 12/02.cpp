// 우리 나름대로의 문자열을 나타내는 클래스 String을 정의하여 보자. String은 내부적으로 문자 배열을 이용하여서 문자열을 저장한다. 다음과 같은 연산자들을 중복 정의하여 보자.
// 1. + 연산자를 중복 정의하여서 두 개의 문자열을 합치는 연산을 제공한다. 
// 2. ! 연산자를 중복 정의하여서 문자열이 공백이면 true를 반환한다.
// 3. ==와 != 연산자를 중복 정의하여서 두 개의 문자열이 일치하면 true를 반환 한다.
// 4. <, >, <=, >= 연산자를 중복 정의하여서 두 개의 문자열의 순서를 비교한다.
#include <iostream>
using namespace std;

class String{
    friend String& operator+(String s1, String s2);
    friend bool operator==(String s1, String s2);
    friend bool operator!=(String s1, String s2);
    friend int operator<(String s1, String s2);
    friend int operator>(String s1, String s2);
    friend int operator<=(String s1, String s2);
    friend int operator>=(String s1, String s2);
private:
    char *ptr;
public:
    String(const char *p=NULL){
        if(p == NULL){
            ptr = new char[1];
            ptr[0] = NULL;
        } else {
            ptr = new char[strlen(p)+1];
            strcpy(ptr, p);
        }
    }

    ~String(){
        delete [] ptr;
    }

    void print();
    int getSize();
    bool operator!();
};

String& operator+(String s1, String s2){
    char *temp = new char[s1.getSize() + s2.getSize() + 1];
   
    strcpy(temp, s1.ptr);
    strcat(temp, s2.ptr);
    String s(temp);
    delete [] temp;

    return s;
}

void String::print(){

}

int String::getSize(){
    return strlen(ptr);
}

int main(){
    String s1("string");

    return 0;
}
