// ����ڿ��� ������ �����ϰ� �亯�� �޾Ƽ� �����̸� 1�� ��ȯ�ϰ� �����̸� 0�� ��ȯ�ϴ� �Լ�
// get_response(char *prompt)�� �ۼ��ϰ� �׽�Ʈ�϶�. ���⼭ �Ű� ���� prompt�� ����ڿ��� �����ϴ�
// �����̴�. ������ �ǹ��ϴ� ���ڿ��� "yes", "ok"�� �����϶�. ������ �ǹ��ϴ� ���ڿ��� "no"�� �����϶�.
// ��ҹ��ڴ� �������� �ʵ��� �ض�.
#include <iostream>
#include <cstring>
using namespace std;

int get_response(char *prompt);

int main(){
    char prompt[] = {"ġŲ�� �����ϳ���? "};

    cout << get_response(prompt) << endl;

    return 0;
}

int get_response(char *prompt){
    cout << prompt;
    
    char ch[5];

    cin.getline(ch, 5);

    for(int i=0; i<5; i++){
        if(isalpha(ch[i]) == 1){
            ch[i] += 32;
        }
    }

    if(strcmp(ch, "yes") == 0 || strcmp(ch, "ok") == 0){
        return 1;
    } else {
        return 0;
    }
}