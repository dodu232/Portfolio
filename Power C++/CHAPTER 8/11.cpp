// ����ڷκ��� ���� ���ڿ����� ������ ������ ������ ����Ͽ��� ����ϴ� ���α׷��� �ۼ��϶�.
#include <iostream>
#include <string>
using namespace std;

int main(){
    string str;
    string vowel = "aeiou";

    int cntV = 0;
    int cntC = 0;

    cout << "���ڿ� �Է�: ";
    getline(cin, str);

    for(int i=0; i<str.length(); i++){
        for(int j=0; j<vowel.length(); j++){
            if(str[i] == vowel[j]){
                cntV++;
                break;
            } else if(j == vowel.length()-1){
                cntC++;
            }
        }
    }

    cout << "���� ��: " << cntC << ", ���� ��: " << cntV << endl;

    return 0;
}