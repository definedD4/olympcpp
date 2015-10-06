#include <iostream>

using namespace std;

int main(){
    int* arr;
    int p, m, n, k;
    cin >> p >> m >> n >> k;
    arr = new int[m * n];
    
    int counter = 0;
    for(int i = 0; i < k; i++){
        int d, r, c, l;
        cin >> d >> r >> c >> l;
        for(int j = 0; j < l; j++){
            arr[r * n + c] = 1;
            counter++;
            if(d == 1){
                r++;
            } else{
                c++;
            }
        }
    }
    if(p == 1){
        cout << m*n - counter << endl;
    } else{
        
    }
}