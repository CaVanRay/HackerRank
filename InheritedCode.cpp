#include <iostream>
#include <string>
#include <sstream>
#include <exception>

using namespace std;
//**********************************************************************************
// OK, I now know what they want from me & I'm fairly confident that Ill be able to write this up.


//BadLengthException comes after the checkUsername section.
class BadLengthException {
     private: 
        int n;
    public:
        BadLengthException(int errornumber) {
            n = errornumber;
        }
    
        int what() {
            return n;
        }
}

// This is just checking the validity of the username presented
// If invalidity is specifically the length, then BadLengthException is run
bool checkUsername(string username) {
    bool isValid = true;
    int n = username.length();
    if(n < 5) {
        throw BadLengthException(n);
    }
    for(int i = 0; i < n-1; i++) {
        if(username[i] == 'w' && username[i+1] == 'w') {
            isValid = false;
        }
    }
    return isValid;
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
                cout << "Valid" << endl;
            } else {
                cout << "Invalid" << endl;
            }
        } catch (BadLengthException e) {
            cout << "Too short: " << e.what() << endl;
        }
    }
    return 0;
}

