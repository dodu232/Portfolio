#include <iostream>
#include <fstream> // 파일 입출력 함수
#include <string>

using namespace std;

int main(){

    string line;
    ifstream file("output.json"); // example.json 파일을 연다.
    if(file.is_open()){ // 파일이 정상적으로 열렸는지 확인
        while(getline(file, line)){ // 열었던 텍스트 파일을 한줄 씩 읽어와 string 형태로 저장
            cout << line << endl;
        }
        file.close(); // 열었던 파일을 닫는다. *필수
    } else {
        cout << "Unavle to open file";
        return 1;
    }

    return 0;
}