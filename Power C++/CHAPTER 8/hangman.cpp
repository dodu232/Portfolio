// 빈칸으로 구성된 문자열이 주어지고 사용자는 문자열에 들어갈 글자들을 하나씩 추측해서 맞추는 게임
#include <iostream>
#include <string>
using namespace std;

int main(){
    string problem = "powerp";
    string answer = "------";
    char c;

    while(true){
        cout << "현재 상태: " << answer << endl;

        if(problem == answer){
            cout << "정답입니다." << endl;
            break;
        }

        cout << "문자 입력: ";
        cin >> c;

        bool check = false;
        int cnt = 0;
        for(int i=0; i<problem.size(); i++){
            if(problem[i] == c && problem[i] != answer[i]){
                answer[i] = problem[i];
            } else if(problem[i] == c){
                cout << "중복입니다." << endl;
            } else {
                cnt++;
            }
        }

        if(cnt == problem.size()){
            cout << "틀렸습니다." << endl;
        }

        cout << endl;
    }
    return 0;
}