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

uint toInt(char* bits){
    uint mul = 1;
    uint res = 0;
    for (int i = 0; i < 16; i++) {
        if(bits[i] == 1){
            res += mul;
        }
        mul *= 2;
    }
}

int main(){
    int n;
    cin >> n;
    uint* input = new uint[n];
    for (int i = 0; i < n; i++) {
        cin >> input[i];
    }
    for (int i = 0; i < n; i++) {
        uint val = input[i];
        char* bits = toBits(val);
        char* bitsReversed = new char[16];
        for (int j = 0; j < 16; j++) {
            bitsReversed[j] = bits[15 - j];
        }
        cout << toInt(bitsReversed) << endl;
    }
    return 0;
}