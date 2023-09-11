// 핸드폰의 문자 메시지를 나타내는 클래스 SMS를 작성하여 보자. SMS는 송신자의 전화 번호, 수신자의 전화 번호, 메시지 텍스트, 송신 시간등의 데이터를 가진다.
// 1. 적절한 생성자를 추가하라.
// 2. 멤버 함수 setText는 문자 메시지의 텍스트를 설정한다. 멤버 함수 print는 메시지에 헤더를 붙여서 콘솔에 출력한다 기타 적절한 멤버 변수와 멤버 함수를 추가하라.
// 3. 몇 개의 문자 메시지를 생성하여서 테스트하라.
#include<iostream>
#include<time.h>
#include<string>
using namespace std;

class SMS{
private:
    string sender;
    string receiver;
    char text[100];
    char receptionTime[100];

public:
    SMS();
    void setText();
    void send();
    void print();
};

SMS::SMS(){
    sender = "01012341234";
};

void SMS::setText(){
    cout << "내용 입력: ";
    cin >> text;
}

void SMS::send(){
    setText();

    cout << "수신 번호: ";
    cin >> receiver;

    time_t timer;
    struct tm *timeinfo;

    time(&timer);
    timeinfo=localtime(&timer);

    strftime(receptionTime, 100, "%Y-%m-%d %H:%M", timeinfo);

}

void SMS::print(){
    cout << endl;
    cout << "발신: " << sender << endl;
    cout << text << endl;
    cout << "시간: " << receptionTime << endl;
    cout << "수신: " << receiver << endl;
}

int main(){
    SMS s1;
    s1.send();
    s1.print();

    SMS s2;
    s2.send();
    s2.print();




    return 0;
}