// ���̿��峪 ���� �����̽��� ���� �θ� ��� Ŀ�´�Ƽ�� ��ü �����͸� �̿��Ͽ��� �ۼ��Ͽ� ����. ���� MyWorld��� Ŭ������ �����Ѵ�. 
// �� Ŭ������ �̸�, ģ�� (����)�� ����Ű�� ������, �α⵵ ���� ��� ������ ������ �ִ�. MyWorld ��ü �� �迭�� ������ �Ŀ� ������ ��ü�� ���Ͽ� ģ������ �̸��� �����Ѵ�. 
// �̸��� �ԷµǸ� �迭���� ��ġ�ϴ� �̸��� ������ ��ü�� ã�Ƽ� ģ���� ����Ű�� �����Ϳ� �� ��ü�� �ּҸ� �����Ѵ�. �α⵵�� ģ���� �������� �����ǰ� �Ѵ�.
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
    cout << name << "�� �α⵵: " << popularity << endl;

    for(int i=0; i<popularity; i++){
        cout << "ģ��(" << i+1 << ") �̸�: " << friends[i]->getName() << endl;
    }
}

int main(){
    MyWorld m[5] = {
        MyWorld("¯��"),
        MyWorld("ö��"),
        MyWorld("����"),
        MyWorld("����"),
        MyWorld("�ͱ�")
    };

    string name;
    
    for(int i=0; i<5; i++){

        cout << "���� ģ�� ģ���� �̸���? ";
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