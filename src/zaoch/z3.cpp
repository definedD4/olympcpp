#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    int* arr1 = new int[n * n];
    int* arr2 = new int[n * n];
    
    int c = 0;
    for (int j = 0; j < n; j++) {
        for (int i = 0; i < n; i++) {
            c++;
            arr1[i * n + j] = c;
        }
    }
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            int row = (j + i) % n;
            int col = j % n;
            arr2[i * n + j] = arr1[row * n + col]; 
        }
    }
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << arr2[i * n + j] << " ";
        }
        cout << endl;
    }
}