#include <iostream>
#include <string>
#include <sstream>

using namespace std;


int main() {
    
    int t;
    cin >> t;
    for(int i = 0; i < t; i++){
    
    string uname;
    cin >> uname;
    size_t stringlength = uname.length();
    if (stringlength < 3) {
        cout << "Too short: " << stringlength << endl;
    } else if (uname == "Peter"){
        cout << "Valid"  << endl;
    }   else {
        cout << "Invalid" << endl;
    }
    
    
    }
    
    
       
    return 0;
}
