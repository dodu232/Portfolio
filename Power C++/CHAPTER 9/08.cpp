// ����� ���ϴ� ��� �Լ� getAve�� �ߺ� �����غ���
// 1. �ΰ��� ������ �޾Ƽ� ����� ���ϴ� ��� �Լ��� �����غ���.
// 2. ������ ������ �޾Ƽ� ����� ���ϴ� ��� �Լ��� �ߺ� �����Ͽ� ����.
// 3. �ߺ� ���ǵ� ��� �Լ��� ȣ���Ͽ� ����.
#include <iostream>
using namespace std;

class Ave{
public:
    double getAve(int x, int y){
        return (x + y) / 2;
    }

    double getAve(int x, int y, int z){
        return (x + y + z) / 3;
    }
};

int main(){
    Ave ave;

    cout << ave.getAve(1, 3) << endl;
    cout << ave.getAve(2, 3, 4) << endl;

    return 0;
}