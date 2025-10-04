#include <iostream>
#include <iomanip>
#pragma GCC optimize("Ofast")
using namespace std;


int main() {
    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int rounds;
    cin >> rounds;

 


    while(rounds--){
    
    

        
        int A;
        double Adbl, B, C;
        cin >> Adbl >> B >> C;
        A = Adbl;
        
        // Strip, Hex notation, lowercase
        
        cout << hex << nouppercase << showbase << A << dec << '\n';
        
        // Scale to 2 decimal, precede with + or -, right justified & left padded
        // Printed result is exactly 15 characters wide total
        
        cout << right << setfill('_') << showpos << setw(15) << fixed << setprecision(2) << B << left << setfill(' ') << noshowpos << defaultfloat << '\n';
        
        // 9 decimal places, Scientific notation, Uppercase
        
        cout << scientific << uppercase << setprecision(9) << C << defaultfloat << nouppercase << '\n';
            
    }
    cout.flush();
    return 0;
}
