#include <iomanip>
#include <iostream>

using namespace std;

int main(){
    int days[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
    int y;
    cin >> y;
    
    bool v = y % 400 == 0 || (y % 4 == 0 && !(y % 100 == 0));
    
    int dl = 256;
    int d = 0, m = 0;
    
    do{
        d = dl;
        m++;
        dl -= (days[m - 1] + ((m == 2 && v) ? 1 : 0));
    } while(dl > 0 && m < 12);
    
    cout << setfill('0');
    cout << setw(2) << d;
    cout << setw(1) << '/';
    cout << setw(2) << m;
    cout << setw(1) << '/';
    cout << setw(4) << y << endl;
    return 0;
}