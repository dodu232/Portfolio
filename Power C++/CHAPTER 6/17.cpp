// ����ڿ��� ���� �̸��� ���� �̸����� ����� �Է��ϵ��� �Ͽ��� �̸��� ù���ڿ� ��ħǥ,
// ���� ����ϴ� ���α׷��� �ۼ��϶�. 
// �� ����ڰ� HONG GIL DONG�� �Է��ϸ� G. D. HONG�� ���� ����ϵ��� �Ѵ�.
#include <iostream>
using namespace std;

int main(){
    char ch[50];

    cout << "�̸� �Է�: ";
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