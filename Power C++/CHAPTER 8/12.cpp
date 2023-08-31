// 사용자로부터 아이디와 패스워드를 받아서 일치하는지를 검사하는 프로그램을 작성하여 보자.
#include <iostream>
#include <string>
using namespace std;

int main(){
    string acc[][2] = {
        {"one", "1111"},
        {"two", "2222"},
        {"three", "3333"},
        {"four", "4444"}
    };
    string id;
    string pw;

    cout << "id: ";
    getline(cin, id);
    cout << "pw: ";
    getline(cin, pw);

    for(int i=0; i<4; i++){
        if(acc[i][0] == id){
            if(acc[i][1] == pw){
                cout << "로그인 성공" << endl;
            } else {
                cout << "패스워드 틀림" << endl;
            }
            break;
        } else if(i == 3){
            cout << "해당 아이디 없음" << endl;
        }
    }   


    return 0;
}