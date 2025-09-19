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


 Learned something new yesterday that I havent had the chance to use yet but should work here.

ceiling() & floor()

    ceiling() returns the next hightest int
        example: ceiling(2.4) = 3, ceiling(5.1) = 6, ceiling(7.0) = 7

    floor() returns the next lowest int
        example: floor(2.4) = 2, floor(5.1) = 5, floor(7.0) = 7

    NOTE: the abreviations might be slightly off, but the definition stands.

I can apparently use this in my sherlock squares challenge.
If I need to find the amount of perfect squares between the numbers A & B, I just need to find the lowest and then the highest and count the number of whole int's between them

so if     A = 5
and       B = 19

then      find the ceiliing of the square root of 5 and subtract it from the floor of the square root of 19, and then add 1

        floor(sqrt(19))  = 4
        ceiling(sqrt(5)) = 3

                    4 - 3 + 1 = 2

        Between the numbers of 5 & 19 are 2 perfect squares
 */

//Start at a and go to b checking if each number is a perfect square
//everytime it is you increment count by 1
//at the end you return count




int squares(int a, int b) {
int start = a;
int end = b;
int count = 0;

    for(int i = start; i <= end; i++) {
        if(i == 0 || i == 1){ 
            count++;
        }else{
            double d = i;
            if(fmod(sqrt(d), 1.0) == 0.0){
                    count++;
                 }
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
