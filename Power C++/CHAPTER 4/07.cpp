// 메뉴 시스템 작성하기
// 메뉴를 화면에 출력하고 원하는 메뉴를 선택하라는 print_menu 함수 작성
// 사용자한테 정수를 입력 받고 멘 번호의 상한과 하한을 넘지 않았는지를 검사하는 함수 get_menu_number 작성
// 상한과 하한을 넘으면 print_mune를 호출한다.
// 각각의 메뉴를 처리하는 함수를 작성한다. 
#include <iostream>
using namespace std;

// 메뉴 출력
void print_menu();

// 선택 검사
void get_menu_number();

// 햄버거 
void hamburger();

// 치즈버거
void cheeseburger();

// 샌드위치
void sandwich();

// 종료
void end();

int main(){
    print_menu();

    return 0;
}

void print_menu(){
    cout << "1. 햄버거" << endl;
    cout << "2. 치즈버거" << endl;
    cout << "3. 샌드위치" << endl;
    cout << "4. 종료" << endl;
    cout << "메뉴 선택: ";

    get_menu_number();
}

void get_menu_number(){
    int sel;
    cin >> sel;

    if(sel < 1 || sel > 4){
        print_menu();
    } else if(sel == 1){
        hamburger();
    } else if(sel == 2){
        cheeseburger();
    } else if(sel == 3){
        sandwich();
    } else {
        end();
    }
}

void hamburger(){
    cout << "햄버거 선택" << endl;
}

void cheeseburger(){
    cout << "치즈버거 선택" << endl;
}

void sandwich(){
    cout << "샌드위치 선택" << endl;
}

void end(){
    cout << "메뉴 시스템 종료" << endl;
}