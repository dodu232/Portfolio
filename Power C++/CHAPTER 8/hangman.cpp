// ��ĭ���� ������ ���ڿ��� �־����� ����ڴ� ���ڿ��� �� ���ڵ��� �ϳ��� �����ؼ� ���ߴ� ����
#include <iostream>
#include <string>
using namespace std;

int main(){
    string problem = "powerp";
    string answer = "------";
    char c;

    while(true){
        cout << "���� ����: " << answer << endl;

        if(problem == answer){
            cout << "�����Դϴ�." << endl;
            break;
        }

        cout << "���� �Է�: ";
        cin >> c;

        bool check = false;
        int cnt = 0;
        for(int i=0; i<problem.size(); i++){
            if(problem[i] == c && problem[i] != answer[i]){
                answer[i] = problem[i];
            } else if(problem[i] == c){
                cout << "�ߺ��Դϴ�." << endl;
            } else {
                cnt++;
            }
        }

        if(cnt == problem.size()){
            cout << "Ʋ�Ƚ��ϴ�." << endl;
        }

        cout << endl;
    }
    return 0;
}