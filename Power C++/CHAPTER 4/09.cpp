// 돈만 생기면 저금하는 사람을 가정하자. 이 사람을 위한 함수 save(int amount)를 작성하여 보자.
// save()는 현재까지 저축된 총액을 기억하고 한번 호출될 때마다, 총 저축액을 화면에 출력한다.
#include <iostream>
using namespace std;

int acc;

void save(int amount);

int main(){

    while(true){
        int amount;
        cout << "얼마를 저축하시겠습니까?(종료는 -1) ";
        cin >> amount;

        if(amount == -1){
            cout << "종료" << endl;
            break;
        }
        save(amount);

    }

    return 0;
}

void save(int amount){
    acc += amount;
    cout << "지금까지 총 저축액은 " << acc << "입니다." << endl;
}