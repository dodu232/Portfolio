// 싸이월드나 마이 스페이스와 같은 인맥 기반 커뮤니티를 객체 포인터를 이용하여서 작성하여 보자. 먼저 MyWorld라는 클래스를 구현한다. 
// 이 클래스는 이름, 친구 (일촌)를 가리키는 포인터, 인기도 등을 멤버 변수로 가지고 있다. MyWorld 객체 의 배열을 생성한 후에 각각의 객체에 대하여 친구들의 이름을 질문한다. 
// 이름이 입력되면 배열에서 일치하는 이름을 가지는 객체를 찾아서 친구를 가리키는 포인터에 그 객체의 주소를 저장한다. 인기도는 친구가 많을수록 증가되게 한다.
#include <iostream>
#include <string>
using namespace std;

class MyWorld{
private:
    string name;
    MyWorld *friends[10];
    int popularity;
    
public:

    MyWorld(string n, int p = 0): name(n), popularity(p){
        for(int i=0; i<10; i++){
            friends[i] = NULL;
        }
    } 

    string getName(){
        return name;
    }

    void addFriend(MyWorld &m);

    void print();

};

void MyWorld::addFriend(MyWorld &m){
    friends[popularity] = &m;

    popularity++;
}

void MyWorld::print(){
    cout << name << "의 인기도: " << popularity << endl;

    for(int i=0; i<popularity; i++){
        cout << "친구(" << i+1 << ") 이름: " << friends[i]->getName() << endl;
    }
}

int main(){
    MyWorld m[5] = {
        MyWorld("짱구"),
        MyWorld("철수"),
        MyWorld("훈이"),
        MyWorld("유리"),
        MyWorld("맹구")
    };

    string name;
    
    for(int i=0; i<5; i++){

        cout << "가장 친한 친구의 이름은? ";
        cin >> name;

        for(int j=0; j<5; j++){
            if(name == m[j].getName()){
                m[j].addFriend(m[i]);
            }
        }
    }

    for(int i=0; i<5; i++){
        m[i].print();
    }

    return 0;
}