// å�� ��Ÿ���� Book Ŭ������ �����Ͽ� ����. Book Ŭ������ ����(title)�� ����(author)�� ��Ÿ���� ��� ������ ������.
// 1. �� ��� ������ ���� �����Ͽ��� ���� "Great C++"�� �����ϰ� ���ڿ� "bob"�� �����Ͽ� ����.
// 2. �����ڿ� ������ �Լ��� �����ϰ� �̰��� ���Ͽ� ����� ���ڸ� �����Ͽ� ����.
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

    cout << "å �̸�: " << book.getTitle() << ", ����: " << book.getAuthor() << endl;

    book.setTitle("good");
    book.setAuthor("great");

    cout << "å �̸�: " << book.getTitle() << ", ����: " << book.getAuthor() << endl;
    
    return 0;
}