// ����Ű�� ������ ������ ����ڷκ��� ���ڿ��� �Է¹޾Ƽ� ���ڿ��� ���Ե� �ܾ���� �������� �迭�Ͽ� ����ϴ� ���α׷���
// �ۼ��Ͻÿ�. �� "programming in c"�� �ԷµǸ� "c in programming"���� ����ϸ� �ȴ�.
#include <iostream>
using namespace std;

int main(){
    char ch[50];
    cout << "���ڿ��� �Է��ϼ���: ";
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