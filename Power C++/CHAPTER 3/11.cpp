// ����ڷκ��� Ű�� �Է� �޾Ƽ� ǥ�� ü���� ����� �Ŀ� ������� ü�߰� ���Ͽ� ��ü������, ǥ������, ��ü�������� �Ǵ��ϴ� ���α׷��� �ۼ��϶�. 
// ǥ�� ü�� ������ ������ ����϶�.
// ü�� = ( Ű ? 100 ) * 0.9
#include <iostream>
using namespace std;

int main(){
    float height, weight, ave;

    cout << "Ű�� �Է��ϼ���: ";
    cin >> height;
    cout << "�����Ը� �Է��ϼ���: ";
    cin >> weight;

    ave = (height - 100) * 0.9;

    if(ave > weight){
        cout << "��ü�� �Դϴ�." << endl;
    } else if(ave == weight){
        cout << "��� ü�� �Դϴ�." << endl;
    } else{
        cout << "��ü�� �Դϴ�." << endl;
    }
    return 0;
}