// 게임 서버가 5대 있고 각각의 게임 서버에 현재 100, 234, 512, 765, 587명이 접속해 있다고 가정하자.
// 사용자가 서버의 번호를 입력하면, 서버에 접속된 사용자의 수를 출력하는 프로그램을 작성하라.
// 2차원 배열을 이용하여 서버에 접속된 사용자의 수를 저장하라.
#include <iostream>
using namespace std;

int main(){
    int server[][1] = {{100}, {234}, {512}, {765}, {587}};

    cout << "서버 번호 입력: ";
    int num;
    cin >> num;

    cout << num << "번 서버의 사용자 수는 " << server[num-1][1] << "명 입니다." << endl;

    return 0;
}