// ����(random number)�� ��ǻ�͸� �̿��� ���� �ذῡ�� ���� ���ȴ�. Ư�� �������� �м��� �ʹ� ������ ��쿡 �ùķ��̼��� ����ϸ� 
// ������ ��ǰ�� �������� �ʰ��� ���� ������ �� �� �ִ�. Visual C++�� ���, Rand()�� �ѹ� ȣ��� ������ 0���� 32767������ 
// ������ ���� Ȯ���� �����Ͽ� ��ȯ�Ѵ�. 
// 1. ������ ���� �ȿ� �ִ� ������ ���Ƿ� �����Ͽ� ��ȯ�ϴ� �Լ� rand_range()�� �ۼ��Ͻÿ�. 
// 2. rand_range �Լ��� �̿��Ͽ� �ֻ����� 600�� ������ �� ������ ���� ��� ó���Ͽ� 1���� 6������ ���� �ٻ������� ���� Ȯ���� ������ ��Ÿ���� ������.
#include <iostream>
#include <time.h>
using namespace std;

int rand_range(int min, int max);

int main(){
    srand(time(NULL));
    
    int cnt = 600;
    int one = 0; 
    int two = 0;  
    int three = 0;  
    int four = 0;  
    int five = 0;  
    int six = 0; 
    
    for(int i=0; i<cnt; i++){
        int temp = rand_range(1,6);
        cout << temp << " ";
        if(temp == 1){
            one++;
        } else if(temp == 2){
            two++;
        } else if(temp == 3){
            three++;
        } else if(temp == 4){
            four++;
        } else if(temp == 5){
            five++;
        } else {
            six++;
        }
    }

    cout << endl;

    cout << "1: " << one << endl;
    cout << "2: " << two << endl;
    cout << "3: " << three << endl;
    cout << "4: " << four << endl;
    cout << "5: " << five << endl;
    cout << "6: " << six << endl;

    return 0;
}

int rand_range(int min, int max){

    return rand() % (max - min + 1) + min ;
}