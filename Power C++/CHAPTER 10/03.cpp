// ��ȭ�� ��Ÿ���� Movie��� �̸��� Ŭ������ �����϶�. ����, ����, ���ۻ� ������ ��Ÿ���� ��� ������ ������.
// 1. Box Ŭ������ �����ڸ� �ߺ� �����϶�. �����ڴ� ��� �����͸� �������� �ְ� �ϳ��� ���� ���� �� �ִ�.
// 2. �����ڿ� �����ڸ� ����Ͽ� �ʿ��� ��� �Լ����� �߰��϶�.
// 3. main���� �� ���� Movie��ü�� �����ϰ� ���� ������ ���� ��ȭ�� Ž���Ͽ� ȭ�鿡 ����ϴ� ���α׷��� �ۼ��϶�.
#include <iostream>
#include <string>
using namespace std;

class Movie{
private:
    string title;
    string director;
    string producer;
    int grade;

public:
    Movie();
    Movie(string t, string d, string p, int g);

    string getTitle(){
        return title;
    }

    string getDirector(){
        return director;
    }

    string getProducer(){
        return producer;
    }

    int getGrade(){
        return grade;
    }

    void setTitle(string t){
        title = t;
    }

    void setDirectro(string d){
        director = d;
    }

    void setProducer(string c){
        producer = c;
    }

    void setGrade(int g){
        grade = g;
    }

    void setInfo(string t, string d, string p, int g);
};   

Movie::Movie(){

};

Movie::Movie(string t, string d, string p, int g){
    title = t;
    director = d;
    producer = p;
    grade = g;
}

void Movie::setInfo(string t, string d, string p, int g){
    title = t;
    director = d;
    producer = p;
    grade = g;
}

int main(){
    Movie m[4];
    m[1].setInfo("Ÿ��Ÿ��", "���ӽ� ī�޷�", "20���� ��Ʃ���", 8);
    m[2].setInfo("���̾��", "�� �к��", "���� ��Ʃ���", 9);
    m[3].setInfo("�ͽ�Ʈ����", "�� �ϱ׷��̺�", "AGBO", 3);

    int max = 0;
    int maxM;
    for(int i=0; i<4; i++){
        if(max < m[i].getGrade()){
            max = m[i].getGrade();
            maxM = i;
        } 
    }

    cout << "���� ������ ���� ��ȭ�� ���� " << m[maxM].getGrade() << "���� " << m[maxM].getTitle() << "�Դϴ�." << endl;

    return 0;
}