// 사용자로부터 키를 입력 받아서 표준 체중을 계산한 후에 사용자의 체중과 비교하여 저체중인지, 표준인지, 과체중인지를 판단하는 프로그램을 작성하라. 
// 표준 체중 계산식은 다음을 사용하라.
// 체중 = ( 키 ? 100 ) * 0.9
#include <iostream>
using namespace std;

int main(){
    float height, weight, ave;

    cout << "키를 입력하세요: ";
    cin >> height;
    cout << "몸무게를 입력하세요: ";
    cin >> weight;

    ave = (height - 100) * 0.9;

    if(ave > weight){
        cout << "저체중 입니다." << endl;
    } else if(ave == weight){
        cout << "평균 체중 입니다." << endl;
    } else{
        cout << "과체중 입니다." << endl;
    }
    return 0;
}