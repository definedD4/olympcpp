#include <ifstream>
#include <ofstream>

#ifdef DEBUG__
    #define LOG(x) cout << x << endl
#else 
    #define LOG(x)
#endif

#define uint unsigned long int

#define cin fin
#define cout fout

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
    uint res = 0u;
    for (int i = 15; i >= 0; i--) {
        res *= 2;
        res += (uint)bits[i];
        LOG("i: " << i << " res: " << res << " bits[i]: " << (uint)bits[i]);
    }
    LOG("toInt complete: " << res);
    return res;
}

int main(){
    
    ifstream fin("Input.txt");
    ofstream fout("Output.txt");
    
    int n;
    cin >> n;
    uint* input = new uint[n];
    for (int i = 0; i < n; i++) {
        cin >> input[i];
    }
    for (int i = 0; i < n; i++) {
        uint val = input[i];
        LOG("processing input: " << val);
        char* bits = toBits(val);
        
        #ifdef DEBUG__
        cout << "bits: ";
        for (int j = 15; j >= 0; j--) {
            cout << (uint)bits[j];
        }
        cout << endl;
        #endif
        
        char* bitsReversed = new char[16];
        for (int j = 0; j < 16; j++) {
            bitsReversed[j] = bits[15 - j];
        }
        
        #ifdef DEBUG__
        cout << "bits reversed: ";
        for (int j = 15; j >= 0; j--) {
            cout << (uint)bitsReversed[j];
        }
        cout << endl;
        #endif
        
        cout << toInt(bitsReversed) << endl;
        delete[] bits;
        delete[] bitsReversed;
    }
    
    fin.close();
    fout.close();
    return 0;
}