// �ڵ����� Ŭ������ ǥ���غ���. � �Ӽ����� ��� �Լ����� ���� �� �ִ°�?

class Car{
    int color;
    double speed;
    char name[50];
    int year;
    char company[50];
    int fuel;

public:
    void init();
    void colorChange(int color);
    void start();
    void acceleration();
    void deceleration();
    void stop();
    void headlightOn();
    void headlightOff();
    void wiper(int step);
};