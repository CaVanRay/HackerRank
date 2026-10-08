/***********************************************************************
Title: Save The Prisoner
Author: Cavan Ray Theiss
Date: 10/08/2026

Description:

a group of prisoners are sitting in a circle, a collection of candy is 
handed out to them in order, starting at a random point on the circle.

determine who will recieve the last piece of candy

***********************************************************************/
#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

//**********************************************************************
// MY CODE STARTS HERE

int saveThePrisoner(int n, int m, int s) {
  
}

// MY CODE ENDS HERE
//**********************************************************************

int main() {
    ofstream fout(getenv("OUTPUT_PATH"));

    string t_temp;
    getline(cin, t_temp);

    int t = stoi(ltrim(rtrim(t_temp)));

    for (int t_itr = 0; t_itr < t; t_itr++) {
        string first_multiple_input_temp;
        getline(cin, first_multiple_input_temp);

        vector<string> first_multiple_input = split(rtrim(first_multiple_input_temp));

        int n = stoi(first_multiple_input[0]);
    }
}
