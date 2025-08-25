#include <bits/stdc++.h>
#include <iostream>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

//***************************************************************************************
// This one works, but is limited to smaller numbers
// Look at Abacus https://github.com/CaVanRay/Abacus/blob/main/Abacus%20Notes

void extraLongFactorials(int n) {
unsigned long long int product = 1;
    for(int i = n; i > 0; i--){
    product = product*i;
    }
    cout << product;
}
//***************************************************************************************

int main()
{
    string n_temp;
    getline(cin, n_temp);

    int n = stoi(ltrim(rtrim(n_temp)));

    extraLongFactorials(n);

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}
