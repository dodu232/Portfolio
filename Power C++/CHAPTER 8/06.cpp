// string Ŭ������ ���� �޼ҵ带 ����Ͽ� ����ڷκ��� ���� ���ڿ��� �ùٸ� ��ǰ ��ȣ������ �˻��ϴ� ���α׷��� �ۼ��϶�.
// ��ǰ ��ȣ�� ũ�Ⱑ 6�� ���ڿ��� �Ǿ� ������ ���� 2���� ���ĺ� ���ڴ� ������ ������ ��Ÿ���� ���� 4���� ���ڴ� �� ��ȣ�̴�.
// ���� �� TV2523�� �ڷ������� ��Ÿ���� �� ��ȣ�� 2523�̶�� ���� �ǹ��Ѵ�. 
// ���ڿ��� ����, ���� �ΰ��� ���ڰ� ���ĺ�����, ������ ���ڰ� ���������� �˻��϶�.
#include <iostream>
using namespace std;

int main(){
    string pNum;
    bool check = true;

    cout << "��ǰ ��ȣ �Է�: ";
    cin >> pNum;
    
    for(int i=0; i<pNum.size(); i++){
        if(i>5){
            check = false;
            break;
        } else if(i<2){
            if(isalpha(pNum[i]) == 0){
                check = false;
                break;
            }
        } else{
            if(isalpha(pNum[i]) != 0){
                check = false;
                break;
            }
        }
    }

    if(check){
        cout << "�ùٸ� ��ǰ ��ȣ �Դϴ�." << endl;
    } else {
        cout << "Ʋ�� ��ǰ ��ȣ �Դϴ�."<< endl;
    }


    return 0;
}