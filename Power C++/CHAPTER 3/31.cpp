// ���� �ٸ� n������ r���� ���Ͽ� �Ϸķ� �����ϴ� ����� ���� ����(permulation)�̶� �ϰ�, nPr�� ǥ���Ѵ�. 
// ������ ������ ���� ���� �̿��Ͽ� ���� �� �ִ�. ������ ���ϴ� ���α׷��� �ۼ��϶�. n�� r�� ����ڰ� �Է��� �� �ֵ��� �϶�.
#include <iostream>
using namespace std;

int main(){
    int n, r;
    int cnt = 1;

    cout << "n �Է�: ";
    cin >> n;
    cout << "r �Է�: ";
    cin >> r;

    for(int i=0; i<r; i++){
        cnt *= n - i;
    }   

    cout << n << "P" << r << "�� ������ " << cnt << "�� �Դϴ�." << endl;

    return 0;
}