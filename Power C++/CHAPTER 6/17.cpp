// 사용자에게 영어 이름을 성과 이름으로 나누어서 입력하도록 하여서 이름의 첫글자와 마침표,
// 성을 출력하는 프로그램을 작성하라. 
// 즉 사용자가 HONG GIL DONG을 입력하면 G. D. HONG과 같이 출력하도록 한다.
#include <iostream>
using namespace std;

int main(){
    char ch[50];

    cout << "이름 입력: ";
    cin.getline(ch, 50);

    int chEnd;

    for(int i=0; i<50; i++){
        if(isalpha(ch[i]) == 0 && isalpha(ch[i+1]) == 0){
            chEnd = i-1;
            break;
        }
    }

    for(int i=chEnd; i>=0; i--){
        if(isalpha(ch[i]) != 0 && isalpha(ch[i-1]) == 0){
            int temp;
            for(int j=i; j<50; j++){
                if(isalpha(ch[j]) == 0){
                    temp = j;
                    break;
                }
            }

            for(int j=i; j<temp; j++){
                cout << ch[j];
            }
        } else if((int)ch[i] == 32){
            cout << " ";
        }
    }

    for(int i=0; i<50; i++ ){
        
    }

    return 0;
}