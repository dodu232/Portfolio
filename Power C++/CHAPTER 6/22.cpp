// ����ڷκ��� ���ڿ��� �޾Ƽ� ���� �ٸ� �ܾ �� ���̳� �����Ͽ������� ���� ���α׷��� �ۼ��϶�.
// ��ҹ��ڴ� �������� �ʴ´�.
#include <iostream>
#include <cstring>
using namespace std;

int main(){
    char ch[80];
    cout << "���ڿ��� �Է��Ͻÿ�: ";
    cin.getline(ch, 80);

    // �ҹ��ڷ� ����
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

        // ���� �ܾ� ���� �ɰ���
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

        // �� �� ������
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