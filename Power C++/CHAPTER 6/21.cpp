// ������ "ã�� �ٲٱ�" ����� �����Ͽ� ����. ù ��°�� ����ڿ��� �ִ� 80������ ���ڿ��� �Է��ϵ���
// �Ѵ�. �� ��°�� ã�� ���ڿ��� �Է¹޴´�. �� ��°�� �ٲ� ���ڿ��� �Է¹޴´�. ���ڿ��� ã�Ƽ� �ٲ��Ŀ� 
// ��� ���ڿ��� ȭ�鿡 ����Ѵ�.
#include <iostream>
#include <cstring>
using namespace std;

int main(){
    const int SIZE = 80;
    char str[SIZE];
    char search[SIZE];
    char change[SIZE];
    char result[SIZE];

    cout << "���� �Է�: ";
    cin.getline(str, SIZE);
    
    while(true){
        cout << "ã�� ����: ";
        cin.getline(search, SIZE);
        
        if(strstr(str, search) != NULL){
            break;
        }

        cout << "�ش� ���ڰ� �����ϴ�." << endl;
    }
    
    cout << "�ٲ� ����: ";
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

    cout << "���: " << result << endl;

    return 0;
}