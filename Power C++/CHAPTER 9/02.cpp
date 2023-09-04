// 책을 나타내는 Book 클래스를 정의하여 보자. Book 클래스는 제목(title)과 저자(author)를 나타내는 멤버 변수를 가진다.
// 1. 각 멤버 변수를 직접 접근하여서 제목에 "Great C++"를 대입하고 저자에 "bob"를 대입하여 보자.
// 2. 접근자와 설정자 함수를 정의하고 이것을 통하여 제목과 저자를 설정하여 보자.
#include <iostream>
#include <iostream>
using namespace std;

class Book{
private:
    string title = "Great c++";
    string author = "bob";

public:
    //getter 
    string getTitle(){
        return title;
    }
    
    string getAuthor(){
        return author;   
    }

    //setter
    void setTitle(string t){
        title = t;  
    }

    void setAuthor(string a){
        author = a;
    }
};

int main(){
    Book book;

    cout << "책 이름: " << book.getTitle() << ", 저자: " << book.getAuthor() << endl;

    book.setTitle("good");
    book.setAuthor("great");

    cout << "책 이름: " << book.getTitle() << ", 저자: " << book.getAuthor() << endl;
    
    return 0;
}