#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

/*
 * Complete the 'nonDivisibleSubset' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER k
 *  2. INTEGER_ARRAY s
 */

//********************************************************
// alright, run a loop that compares every possible pairing of numbers from the given set
// try to find every pair that when added together cannot be divided by K 
// at the end return the largest size of numbers collected that cannot be added with each other and divided by k

// instead of removing what fails, what if I add what succeeds?
// start with nothing and slowly build up

//Test S[0] with each of the others
//Then test the first to pass each round with each of the rest that passed
//repeat until you reach the end
//Save as "longest" vector
//Start over testing starting with S[1], repeat steps until the end, testing final length against "longest"
//Replace "longest" if another set proves longer
//I need to find a way to wrap around original set to minimize any duplicate sets

//I'm probably overcomplicating things but what if each item was a struct with pointers connecting to the next item?

//    [ s[0]   ]  [ s[1]   ]  [ s[2]   ]  [ s[3]   ]  [ s[4]   ]
//    [ amount ]  [ amount ]  [ amount ]  [ amount ]  [ amount ]
//    [ next ->]  [ next ->]  [ next ->]  [ next ->]  [ next ->] [Wraps back to s[0]]

int nonDivisibleSubset(int k, vector<int> s) {

    int longest = 0;
    int size = s.size();
     
    for(int i = 0; i < size; i++){
        
        vector<int> setLength;
        setLength.push_back(i);
        
       for(int j = 0; j < size; j++){
        
                if(i == j){
                    
                }else if((s[i]+s[j])%k != 0){
                    setLength.push_back(j);
                }
            }
        int tempLength = setLength.size();    
        if(tempLength > longest){
            longest = tempLength;
        }
       }
 

return longest;
}


//********************************************************

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string first_multiple_input_temp;
    getline(cin, first_multiple_input_temp);

    vector<string> first_multiple_input = split(rtrim(first_multiple_input_temp));

    int n = stoi(first_multiple_input[0]);

    int k = stoi(first_multiple_input[1]);

    string s_temp_temp;
    getline(cin, s_temp_temp);

    vector<string> s_temp = split(rtrim(s_temp_temp));

    vector<int> s(n);

    for (int i = 0; i < n; i++) {
        int s_item = stoi(s_temp[i]);

        s[i] = s_item;
    }

    int result = nonDivisibleSubset(k, s);

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
