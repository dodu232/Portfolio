// 사용자로부터 문자열을 받아서 서로 다른 단어가 몇 번이나 등장하였는지를 세는 프로그램을 작성하라.
// 대소문자는 구분하지 않는다.
#include <iostream>
#include <cstring>
using namespace std;

int main(){
    char ch[80];
    cout << "문자열을 입력하시오: ";
    cin.getline(ch, 80);

    // 소문자로 통일
    for(int i=0; i<strlen(ch); i++){
        if(isalpha(ch[i]) == 1){
             ch[i] += 32;
        }
    }

    int start = 0;
    int end = 0;
    while(end < strlen(ch)){
        char temp[20] = {0,};
        int cnt = 0;

        // 문장 단어 별로 쪼개기
        for(int i=end; i<=strlen(ch); i++){
            if(isalpha(ch[i]) == 0 && i != end){
                start = end;
                if(end != 0){
                    start++;
                }
                end = i;
                break;
            }
        }

        for(int i=0; i<end-start; i++){
            temp[i] = ch[i + start];
        }

        // 몇 번 들어갔는지
        for(int i=0; i<strlen(ch); i++){
            bool check = true;
            for(int j=0; j<strlen(temp); j++){
                if(ch[i+j] != temp[j]){
                    check = false;
                }
            }
            if(check){
                cnt++;
            }
        }

        cout << temp << " " << cnt << endl;
    }

    return 0;
}