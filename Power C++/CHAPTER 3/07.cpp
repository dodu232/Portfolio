// 상점에서 하나에 100원인 물건을 판매하고 있다고 가정하자. 물건을 10개 이상 구입하는 고객에게는 10%를 할인해 준다고 하자. 
// 사용자가 구입한 물건의 개수를 입력하면 전체 가격이 얼마인지를 계산해주는 프로그램을 작성하라.
// 즉 물건의 개수가 10이상이면 10% 할인한 가격으로 계산을 하여야 한다. if-else문을 사용하라.
#include <iostream>
using namespace std;

int main(){
    const int PRICE = 100;
    int cnt, amount;
    
    cout << "물건을 몇개 구매하실 건가요? ";
    cin >> cnt;

    if(cnt >= 10){
        amount = cnt * PRICE * 0.9;
    } else {
        amount = cnt * PRICE;
    }

    cout << "총 가격은 " << amount << "원 입니다." << endl;

    return 0;
}