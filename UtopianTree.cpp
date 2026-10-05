/******************************************************************************
Title: Utopian Tree
Author: Cavan Ray Theiss
Date: 10/03/2026

Description:

The Utopian Tree goes through 2 cycles of growth every year. Each spring, it 
doubles in height. Each summer, its height increases by 1 meter.

A Utopian Tree sapling with a height of 1 meter is planted at the onset of 
spring. How tall will the tree be after  growth cycles?

******************************************************************************/

#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

//*****************************************************************************
//  MY CODE STARTS HERE

int utopianTree (int n) {

    // for tracking how many inputs
    // and the input sizes
    int numOfTestCases, numOfCycles, totalGrowth = 0;
    // each round starts in spring, then 
    // alternates between spring and summer
    bool isSpring = true;

    cin >> numOfTestCases;
    for (int i = 0; i < numOfTestCases; i++){
        // Reset at start and input cycles
        int totalGrowth = 0;
        bool isSprint = true;
        cin >> numOfCycles;
        
        
    }
  
}

// MY CODE ENDS HERE
//*****************************************************************************

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string t_temp;
    getline(cin, t_temp);

    int t = stoi(ltrim(rtrim(t_temp)));

    for (int t_itr = 0; t_itr < t; t_itr++){
        string n_temp;
        getline(cin, n_temp);

        int n = stoi(ltrim(rtrim(n_temp)));

        int result = utopianTree(n);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>
        (isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>
        (isspace))).base(),
        s.end()
    );

    return s;
}
