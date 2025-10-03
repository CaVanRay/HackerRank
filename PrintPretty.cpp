#include <iostream>
#include <iomanip>
using namespace std;


int main() {
    
    int rounds;
    cin >> rounds;

    while(rounds--){
        int A;
        double B, C, HoldingPen;
        cin >> A >> B >> C;
        
        // Strip, Hex notation, lowercase
        
        cout << hex << showbase << A << endl;
        
        // Scale to 2 decimal, precede with + or -, right justified & left padded
        // Printed result is exactly 15 characters wide total
        
        cout << B << endl;
        
        // 9 decimal places, Scientific notation, Uppercase
        
        cout << C << endl;
            
    }
    return 0;
}
