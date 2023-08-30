// string 클래스의 각종 메소드를 사용하여 사용자로부터 받은 문자열이 올바른 물품 번호인지를 검사하는 프로그램을 작성하라.
// 물품 번호는 크기가 6인 문자열로 되어 있으며 앞의 2개의 알파벳 문자는 물전의 종류를 나타내고 뒤의 4개의 숫자는 모델 번호이다.
// 예를 들어서 TV2523은 텔레비전을 나타내고 모델 번호는 2523이라는 것을 의미한다. 
// 문자열의 길이, 앞의 두개의 문자가 알파벳인지, 나머지 문자가 숫자인지를 검사하라.
#include <iostream>
using namespace std;

int main(){
    string pNum;
    bool check = true;

    cout << "물품 번호 입력: ";
    cin >> pNum;
    
    for(int i=0; i<pNum.size(); i++){
        if(i>5){
            check = false;
            break;
        } else if(i<2){
            if(isalpha(pNum[i]) == 0){
                check = false;
                break;
            }
        } else{
            if(isalpha(pNum[i]) != 0){
                check = false;
                break;
            }
        }
    }

    if(check){
        cout << "올바른 물품 번호 입니다." << endl;
    } else {
        cout << "틀린 물품 번호 입니다."<< endl;
    }


    return 0;
}