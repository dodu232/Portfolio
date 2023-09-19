// 시간을 나타내는 Time 클래스를 작성하여 보자. 전용 멤버로 hour, minute, second를 가지며 각 멤버 변수에 대하여 접근자와 설정자 함수를 제공하라.
// 생성자와 소멸자도 적절하게 정의하라. print() 멤버 함수는 현재 시간을 콘솔에 출력한다. 다음과 같은 원형을 가지는 전역 함수를 중복 정의하여 보자.
// bool isEqua(Time t1, Time t2);
// bool isEquet (Time& t1, Time& t2);
// bool isEqual (Time *pt1, Time *pt2);
// 몇 개의 Time 객체를 생성하여서 위의 함수의 인자로 전달하여서 위의 함수들을 테스트하라.
#include <iostream>
using namespace std;

class Time
{
private:
    int hour;
    int minute;
    int second;

public:
    Time(int hour = 0, int minute = 0, int second = 0) : hour(hour), minute(minute), second(second) {}

    int getHour();
    int getMinute();
    int getSecond();

    void setHour(int hour);
    void setMinute(int minute);
    void setSecond(int second);

    static bool isEqua(Time t1, Time t2);
    static bool isEquet(Time &t1, Time &t2);
    static bool isEqual(Time *pt1, Time *pt2);
    void print() const;
};

int Time::getHour()
{
    return hour;
}

int Time::getMinute()
{
    return minute;
}

int Time::getSecond()
{
    return second;
}

void Time::setHour(int hour)
{
    this->hour = hour;
}

void Time::setMinute(int minute)
{
    this->minute = minute;
}

void Time::setSecond(int second)
{
    this->second = second;
}

bool Time::isEqua(Time t1, Time t2)
{
    if ((t1.hour) == (t2.hour) && ((t1.minute) == (t2.minute)) && ((t1.second) == (t2.second)))
    {
        return true;
    }
    else
    {
        return false;
    }
}
bool Time::isEquet(Time &t1, Time &t2)
{
    if ((t1.hour) == (t2.hour) && ((t1.minute) == (t2.minute)) && ((t1.second) == (t2.second)))
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool Time::isEqual(Time *pt1, Time *pt2)
{
    if ((pt1->hour) == (pt2->hour) && ((pt1->minute) == (pt2->minute)) && ((pt1->second) == (pt2->second)))
    {
        return true;
    }
    else
    {
        return false;
    }
}

void Time::print() const
{
    printf("%d:%d:%d\n", hour, minute, second);
}

int main()
{
    Time t1(11, 18, 32);
    Time t2;
    Time t3;

    t1.print();
    t2.print();

    cout << Time::isEqua(t1,t2) << endl;
    cout << Time::isEquet(t1,t3) << endl;
    cout << Time::isEqual(&t3, &t2) << endl;

    return 0;
}