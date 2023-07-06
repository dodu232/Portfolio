#include <iostream>
using namespace std;

int square(int n){
    return (n*n);
}

int get_max(int x, int y){
    if(x > y){
        return x;
    } else {
        return y;
    }
}
