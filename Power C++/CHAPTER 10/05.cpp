// �ڵ����� ���� �޽����� ��Ÿ���� Ŭ���� SMS�� �ۼ��Ͽ� ����. SMS�� �۽����� ��ȭ ��ȣ, �������� ��ȭ ��ȣ, �޽��� �ؽ�Ʈ, �۽� �ð����� �����͸� ������.
// 1. ������ �����ڸ� �߰��϶�.
// 2. ��� �Լ� setText�� ���� �޽����� �ؽ�Ʈ�� �����Ѵ�. ��� �Լ� print�� �޽����� ����� �ٿ��� �ֿܼ� ����Ѵ� ��Ÿ ������ ��� ������ ��� �Լ��� �߰��϶�.
// 3. �� ���� ���� �޽����� �����Ͽ��� �׽�Ʈ�϶�.
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
    cout << "���� �Է�: ";
    cin >> text;
}

void SMS::send(){
    setText();

    cout << "���� ��ȣ: ";
    cin >> receiver;

    time_t timer;
    struct tm *timeinfo;

    time(&timer);
    timeinfo=localtime(&timer);

    strftime(receptionTime, 100, "%Y-%m-%d %H:%M", timeinfo);

}

void SMS::print(){
    cout << endl;
    cout << "�߽�: " << sender << endl;
    cout << text << endl;
    cout << "�ð�: " << receptionTime << endl;
    cout << "����: " << receiver << endl;
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