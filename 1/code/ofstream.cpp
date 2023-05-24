#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(){

    string line;
    ofstream file("output.json");
    if(file.is_open()){
        file << "tihe is thr \n";
        file << "2222";
        file.close();
    } else {
        cout << "error" << endl;
        return 1;
    }

    return 0;
}