// 동전 던지기 게임 시뮬레이션
// 난수 생성 후에 난수가 짝수면 동전의 앞면, 홀수는 뒷면으로 간주해 승패 기록
#include <iostream>
#include <time.h>
using namespace std;

int coin_game();

int main(){
    srand(time(NULL));

    int win = 0; 
    int lose = 0;

    while (true){
        int coin = coin_game() + 1;
        int sel;

        cout << "1. 앞면 2. 뒷면 3. 종료" << endl;
        cout << "선택: ";
        cin >> sel;

        if (sel == 3){
            cout << "종료" << endl;
            break;
        } else if(sel == coin){
            cout << "승리" << endl;
            win++;
        } else if (sel != coin && sel < 3){
            cout << "패배" << endl;
            lose++;
        } else {
            cout << "다시 선택해 주세요.\n" << endl;
            continue;
        }
        cout << "승: " << win << ", 패: " << lose << endl;
        cout << endl;
    }

    return 0;
}

int coin_game(){
    if(rand() % 2 == 0){
        return 0;
    } else {
        return 1;
    }

}