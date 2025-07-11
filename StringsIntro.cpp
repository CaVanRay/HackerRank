#include <iostream>
#include <string>
using namespace std;


int main() {
    string a, b, c;
    cin >> a >> b;
    int alength = a.size();
    int blength = b.size();
    cout << alength << " " << blength << endl;
    c = a + b;
    cout << c << endl;
    char sa = a[0];
    char sb = b[0];
    a[0]= sb;
    b[0]= sa;
    cout << a << " " << b << endl; 

    return 0;
}
