#include <iostream>

using namespace std;

int middle(int n, int& eq){
    double halfN = (double)n / 2;
    if(halfN  == n / 2){
        eq = 0;
        return n / 2;
    } else{
        eq = 1;
        return n / 2 + 1;
    }
}

int main(){
    int n;
    cin >> n;
    int eq;
    int mid = middle(n, eq);
    for(int i = 1; i <= mid; i++){
        int jmid = i + mid - 1;
        for(int j = i; j <= jmid; j++){
            cout << j << " ";
        }
        for(int j = jmid - eq; j >= i; j--){
            cout << j << " ";
        }
        cout << endl;
    }
    for(int i = mid - eq; i > 0; i--){
        int jmid = i + mid - 1;
        for(int j = i; j <= jmid; j++){
            cout << j << " ";
        }
        for(int j = jmid - eq; j >= i; j--){
            cout << j << " ";
        }
        cout << endl;
    }
    return 0;
}