// 10������ 2������ ��ȯ�Ͽ� ����ϴ� ���α׷��� �ۼ��Ͽ� ����. �ִ� 64�ڸ����� ��ȯ�� �����ϵ��� �϶�. 
// ��ȯ�� �ڸ����� �����ϴµ� �迭�� ����϶�. 10������ 2�� ����� ������ �������� �������� ��Ÿ���� 2������ ǥ���� �� �ִ�.
// �־��� ������ ������ �������� ��ȯ�� �� �ִ� ���α׷��� �ۼ��Ͽ� ����.
#include <iostream>
#include <array>
using namespace std;

const int SIZE = 64;
int arr[SIZE];

void binary(int n, int b);

int main(){
    int n;
    int b;

    cout << "���� �Է�: ";
    cin >> n;
    cout << "���� �Է�: ";
    cin >> b;

    binary(n, b);

    return 0;
}

void binary(int n, int b){
    int cnt = 0;

    while(n >= 1 && cnt < SIZE){
        cout << cnt << " "; 
        arr[cnt] = n % b;
        cnt++;
        n /= b;
    }
    
    if(cnt == SIZE){
        cout << "64�ڸ� �ʰ�" << endl;
    } else {
        for(int j=cnt-1; j>=0; j--){
            cout << arr[j] << " "; 
        }
    }
}