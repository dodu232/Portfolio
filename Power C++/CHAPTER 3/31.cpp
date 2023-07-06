// 서로 다른 n개에서 r개를 택하여 일렬로 나열하는 방법의 수를 순열(permulation)이라 하고, nPr로 표시한다. 
// 순열은 다음과 같은 식을 이용하여 구할 수 있다. 순열을 구하는 프로그램을 작성하라. n과 r은 사용자가 입력할 수 있도록 하라.
#include <iostream>
using namespace std;

int main(){
    int n, r;
    int cnt = 1;

    cout << "n 입력: ";
    cin >> n;
    cout << "r 입력: ";
    cin >> r;

    for(int i=0; i<r; i++){
        cnt *= n - i;
    }   

    cout << n << "P" << r << "의 순열은 " << cnt << "개 입니다." << endl;

    return 0;
}