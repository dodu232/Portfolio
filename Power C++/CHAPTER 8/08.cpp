// ����ڷκ��� ���� ���ڿ����� ���ĺ� ������ ����, ������ ����, ���� ������ ������ ����ϴ� ���α׷��� �ۼ��϶�. ���� �� ����ڰ�
// "transformer 2"�� �Է��ϸ� ���ĺ� ������ ������ 11��, ������ ������ 1��, ���� ������ ������ 1�̶�� ����Ѵ�.
#include <iostream>
#include <string>
using namespace std;

int main(){
    string str;
    int cntN = 0;
    int cntS = 0;
    int cntG = 0;

    cout << "���ڸ� �Է��Ͻÿ�. ";
    getline(cin, str);
    
    for(int i=0; i<str.size(); i++){
        if(isspace(str[i]) != 0){
            cntG++;
        } else if(isalpha(str[i]) == 0){
            cntN++;
        } else if(isalpha(str[i]) != 0){
            cntS++;
        }
    }

    cout << "���ĺ� ����: " << cntS << ", ���� ����: " << cntN << ", ���� ���� ����: " << cntG << endl;

    return 0;
}