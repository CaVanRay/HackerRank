#include <iostream>
#include <string>
#include <sstream>
#include <exception>

using namespace std;
//**********************************************************************************
// OK, I now know what they want from me & I'm fairly confident that Ill be able to write this up.


//BadLengthException comes after the checkUsername section.
class BadLengthException {
    
    
    
}

// This is just checking the validity of the username presented
// If invalidity is specifically the length, then BadLengthException is run
bool checkUsername(string username) {
    
    
    
}

//Apparently this was already supposed to be here?
//I need to look into why my excersizes are starting with the wrong default code
//**********************************************************************************
int main() {
    int T; cin >> T;
    while(T--) {
        string username;
        cin >> username;
        try {
            bool isValid = checkUsername(username);
            if(isValid) {
                cout << "Valid" << 'n';
            } else {
                cout << "Invalid" << 'n';
            }
        } catch (BadLengthException e) {
            cout << "Too short: " << e.what() << 'n';
        }
    }
    return 0;
}
