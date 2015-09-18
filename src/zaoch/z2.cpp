#include <iostream>

#define byte unsigned char

using namespace std;

const byte initial[] = { 7,1,8,2,8,1,8,2,8,4,5,9,0,4,5,2,3,5,3,6,0,2,8,7,5};

int main(){
    int n;
    cin >> n;
    if(n == 0){
        cout << 3;
    } else{
        cout << "2.";
        for (int i = 0; i < n - 1; i++) {
            cout << (int)initial[i];
        }
        if(n >= 25){
            cout << (int)initial[24];
        } else {
            int val = (int)initial[n] >= 5 ? (int)initial[n - 1] + 1 : (int)initial[n - 1];
            cout << val;
        }
    }
    cout << endl;
    return 0;
}