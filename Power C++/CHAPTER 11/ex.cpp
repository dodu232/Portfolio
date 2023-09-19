#include <iostream>

using namespace std;

class Time{

private:

int hour;

int minute;

int second;

public:

Time(int h=0, int m=0, int s=0) : hour(h), minute(m), second(s) {

}

~Time(){

}

void SetHour(int Hour);

void SetMinute(int Minute);

void SetSecond(int Second);

int GetHour();

int GetMinute();

int GetSecond();

void Print();

static bool isEqual(Time t1,Time t2);

// static bool isEqual(Time &t1, Time& t2);

static bool isEqual(Time *t1, Time *t2);

};

void Time::SetHour(int aHour){

this->hour= aHour;

}

void Time::SetMinute(int aMinute){

this->minute=aMinute;

}

void Time::SetSecond(int aSecond){

this->second=aSecond;

}

int Time::GetHour(){

return hour;

}

int Time::GetMinute(){

return minute;

}

int Time::GetSecond(){

return second;

}

bool Time::isEqual(Time t1,Time t2){

if((t1.hour)==(t2.hour) && ((t1.minute)==(t2.minute)) && ((t1.second)==(t2.second))){

return true;

}

else{

return false;

}

}

/*

bool Time::isEqual(Time& t1, Time& t2){

if((t1.hour)==(t2.hour) && ((t1.minute)==(t2.minute)) && ((t1.second)==(t2.second))){

return true;

}

else{

return false;

}

}

*/

bool Time::isEqual(Time *t1, Time *t2){

if((t1->hour)==(t2->hour) && ((t1->minute)==(t2->minute)) &&

((t1->second)==(t2->second))){

return true;

}

else{

return false;

}

}

void Time::Print(){

cout<<hour<<"시"<<minute<<"분"<<second<<"초"<<"\n";

}

int main(void){

Time T(3, 20, 45);

Time T1(4, 53, 22);

Time T2(3, 20, 45);

T.Print();

T2.Print();

cout<< (Time::isEqual(T,T1) == true ? "같다." : "다르다.") << endl;

cout<< (Time::isEqual(T,T2) == true ? "같다." : "다르다.") << endl;

cout<< (Time::isEqual(&T1,&T2) == true ? "같다." : "다르다.") << endl;

}