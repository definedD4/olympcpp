#include <iostream>

#define uint unsigned long int

using namespace std;

char* toBits(uint value){
    char* result = new char[16];
    for (int i = 0; i < 16; i++) {
        result[i]  = value % 2;
        value /= 2;
    }
    return result;
}

int main(){
    uint val;
    cin >> val;
    char* bits = toBits(val);
    for (int i = 15; i >= 0; i--) {
        cout << (uint)bits[i];
    }
    cout << endl;
    return 0;
}