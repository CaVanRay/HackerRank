/******************************************************************************
Title: Viral Advertising
Author: Cavan Ray Theiss
Date: 10/06/2026

Description:

calculate the cumulative likes on a given day using the viral formula

On the first day, half of those 5 people (i.e.,floor(5/2) = 2) like the 
advertisement and each shares it with 3 of their friends. At the beginning of 
the second day, floor(5/2) * 3 = 2*3 = 6 people receive the advertisement.

Each day, floor(recipients/2) of the recipients like the advertisement and will 
share it with 3 friends on the following day. Assuming nobody receives the 
advertisement twice, determine how many people have liked the ad by the end of 
a given day, beginning with launch day as day 1.

EXAMPLE:

n = 5

Day Shared Liked Cumulative
1      5     2       2
2      6     3       5
3      9     4       9
4     12     6      15
5     18     9      24

The progression is shown above. The cumulative number of likes on the 5th day 
is 24

if the input was 3, the output would be 9
2 liked it on day 1, 3 people liked it on day 2, and 4 people liked it on day 3
so the answer is 2 + 3 + 4 = 9

******************************************************************************/

#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

/******************************************************************************/
// MY CODE STARTS HERE

int viralAdvertising(int n) {

    int day, shared, liked;

    
}

// MY CODE STOPS HERE
/******************************************************************************/

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string n_temp;
    getline(cin, n_temp);

    int n = stoi(ltrim(rtrim(n_temp)));

    int result = viralAdvertising(n);

    fout << result << "\n";

    fout.close();

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
