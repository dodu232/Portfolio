// 엔터키가 눌려질 때까지 사용자로부터 문자열을 입력받아서 문자열에 포함된 단어들을 역순으로 배열하여 출력하는 프로그램을
// 작성하시오. 즉 "programming in c"가 입력되면 "c in programming"으로 출력하면 된다.
#include <iostream>
using namespace std;

int main(){
    char ch[50];
    cout << "문자열을 입력하세용: ";
    cin.getline(ch, 50);

    for(int i=49; i>=0; i--){
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

    cout << endl;

    return 0;
}