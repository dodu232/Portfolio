// 간단한 "찾아 바꾸기" 기능을 구현하여 보자. 첫 번째로 사용자에게 최대 80문자의 문자열을 입력하도록
// 한다. 두 번째로 찾을 문자열을 입력받는다. 세 번째로 바꿀 문자열을 입력받는다. 문자열을 찾아서 바꾼후에 
// 결과 문자열을 화면에 출력한다.
#include <iostream>
#include <cstring>
using namespace std;

int main(){
    const int SIZE = 80;
    char str[SIZE];
    char search[SIZE];
    char change[SIZE];
    char result[SIZE];

    cout << "문장 입력: ";
    cin.getline(str, SIZE);
    
    while(true){
        cout << "찾을 문자: ";
        cin.getline(search, SIZE);
        
        if(strstr(str, search) != NULL){
            break;
        }

        cout << "해당 문자가 없습니다." << endl;
    }
    
    cout << "바꿀 문자: ";
    cin.getline(change, SIZE);

    int save;

    for(int i=0; i<strlen(str)-strlen(search)+1; i++){
        char temp[SIZE] = {0, };
        
        for(int j=0; j<strlen(search); j++){
            temp[j] = str[i+j];
        }

        if(strcmp(temp, search) == 0){
            strcat(result, change);

            for(int j=i; j<strlen(str); j++){
                result[j + strlen(change)] = str[j + strlen(search)];
            }

            break;
        }
        result[i] = str[i];
    }

    cout << "결과: " << result << endl;

    return 0;
}