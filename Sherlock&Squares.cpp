#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

/*****************************************************************************
 * Complete the 'squares' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER a
 *  2. INTEGER b
 */

//Start at a and go to b checking if each number is a perfect square
//everytime it is you increment count by 1
//at the end you return count




int squares(int a, int b) {
int start = a;
int end = b;
int count = 0;

    // This is actually really easy, all I need is to write up a test for square roots
    for(int i = start; i <= end; i++) {
        if(i =0){ // I could just use a sqrt() type tool, or go with a logical argument if I wanna avoid using shortcuts
                  // btw sqrts follow the pattern of (+1 +2n) , 1*1=1 [this is (+1 +2(0))], 2*2=4 [this is initial 1 (+1 +2(1))], 3*3=9 [this is 4 (+1 +2(2))]...
            
            count++;
        }    
    }
    
    return count;
}

//*****************************************************************************
int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string q_temp;
    getline(cin, q_temp);

    int q = stoi(ltrim(rtrim(q_temp)));

    for (int q_itr = 0; q_itr < q; q_itr++) {
        string first_multiple_input_temp;
        getline(cin, first_multiple_input_temp);

        vector<string> first_multiple_input = split(rtrim(first_multiple_input_temp));

        int a = stoi(first_multiple_input[0]);

        int b = stoi(first_multiple_input[1]);

        int result = squares(a, b);

        fout << result << "\n";
    }

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

vector<string> split(const string &str) {
    vector<string> tokens;

    string::size_type start = 0;
    string::size_type end = 0;

    while ((end = str.find(" ", start)) != string::npos) {
        tokens.push_back(str.substr(start, end - start));

        start = end + 1;
    }

    tokens.push_back(str.substr(start));

    return tokens;
}
