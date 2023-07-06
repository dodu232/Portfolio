// 2차원 공간에서 두 점(x1, y1)와 (x2, y2,)사이의 거리를 계산하는 dist_2d를 작성하라
#include <iostream>
#include <math.h>
using namespace std;

double dist_2d(int x1, int y1, int x2, int y2);

int main(){
    cout << dist_2d(0,0,45,42) << endl;

    return 0;
}

double dist_2d(int x1, int y1, int x2, int y2){
    return sqrt(pow((x1 - x2), 2) + pow((y1 - y2), 2));
}