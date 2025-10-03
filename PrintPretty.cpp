#include <iostream>
#include <iomanip>
using namespace std;


int main() {
    
    int rounds;
    cin >> rounds;

    while(rounds--){
        
        int A;
        double Adbl, B, C, HoldingPen;
        cin >> Adbl >> B >> C;
        A = Adbl;
        
        // Strip, Hex notation, lowercase
        
        cout << hex << showbase << A << endl;
        
        // Scale to 2 decimal, precede with + or -, right justified & left padded
        // Printed result is exactly 15 characters wide total
        
        cout << right << setfill('_') << showpos << setw(15) << fixed << setprecision(2) << B << endl;
        
        // 9 decimal places, Scientific notation, Uppercase
        
        cout << noshowpos << setprecision(9) << C << endl;
            
    }
    return 0;
}
