// 난수(random number)는 컴퓨터를 이용한 문제 해결에서 많이 사용된다. 특히 수학적인 분석이 너무 복잡한 경우에 시뮬레이션을 사용하면 
// 실제로 제품을 제작하지 않고서도 많은 실험을 할 수 있다. Visual C++의 경우, Rand()가 한번 호출될 때마다 0에서 32767까지의 
// 정수를 같은 확률로 선택하여 반환한다. 
// 1. 지정된 범위 안에 있는 정수를 임의로 선택하여 반환하는 함수 rand_range()를 작성하시오. 
// 2. rand_range 함수를 이용하여 주사위를 600번 던졌을 때 나오는 값을 통계 처리하여 1부터 6까지의 값이 근사적으로 같은 확률을 가지고 나타남을 보여라.
#include <iostream>
#include <time.h>
using namespace std;

int rand_range(int min, int max);

int main(){
    srand(time(NULL));
    
    int cnt = 600;
    int one = 0; 
    int two = 0;  
    int three = 0;  
    int four = 0;  
    int five = 0;  
    int six = 0; 
    
    for(int i=0; i<cnt; i++){
        int temp = rand_range(1,6);
        cout << temp << " ";
        if(temp == 1){
            one++;
        } else if(temp == 2){
            two++;
        } else if(temp == 3){
            three++;
        } else if(temp == 4){
            four++;
        } else if(temp == 5){
            five++;
        } else {
            six++;
        }
    }

    cout << endl;

    cout << "1: " << one << endl;
    cout << "2: " << two << endl;
    cout << "3: " << three << endl;
    cout << "4: " << four << endl;
    cout << "5: " << five << endl;
    cout << "6: " << six << endl;

    return 0;
}

int rand_range(int min, int max){

    return rand() % (max - min + 1) + min ;
}