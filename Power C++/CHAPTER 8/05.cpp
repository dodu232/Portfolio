// 자동차를 클래스로 표현해보라. 어떤 속성값과 멤버 함수들을 가질 수 있는가?

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