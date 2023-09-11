// 영화를 나타내는 Movie라는 이름의 클래스를 설계하라. 제목, 감독, 제작사 평점을 나타내는 멤버 변수를 가진다.
// 1. Box 클래스의 생성자를 중복 정의하라. 생성자는 모든 데이터를 받을수도 있고 하나도 받지 않을 수 있다.
// 2. 접근자와 설정자를 비롯하여 필요한 멤버 함수들을 추가하라.
// 3. main에서 몇 개의 Movie객체를 생성하고 가장 평점이 좋은 영화를 탐색하여 화면에 출력하는 프로그램을 작성하라.
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
    m[1].setInfo("타이타닉", "제임스 카메론", "20세기 스튜디오", 8);
    m[2].setInfo("아이언맨", "존 패브로", "마블 스튜디오", 9);
    m[3].setInfo("익스트랙션", "샘 하그레이브", "AGBO", 3);

    int max = 0;
    int maxM;
    for(int i=0; i<4; i++){
        if(max < m[i].getGrade()){
            max = m[i].getGrade();
            maxM = i;
        } 
    }

    cout << "가장 평점이 좋은 영화는 평점 " << m[maxM].getGrade() << "점의 " << m[maxM].getTitle() << "입니다." << endl;

    return 0;
}