#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);


//*********************************************************************

/*
 * Complete the 'getMax' function below.
 *
 * The function is expected to return an INTEGER_ARRAY.
 * The function accepts STRING_ARRAY operations as parameter.
 */

vector<int> getMax(vector<string> operations) {

// initially handed string vector OPS (operations)
// Take size of operation vector and use that to make input testing loop

size_t commands = operations.size();
    
// Operations processing handled in int vector Stack
vector<int> dataStack;

// result will be saved in int vector RES
vector<int> res;

// always keep the current largest number on stand-by to avoid searching through the list each time
size_t currentLargest;

//Loop will happen here after declarations are made
for(size_t i = 0; i < commands; i++){

    // test the first char of each string, check if 1, 2, or 3
    string temp = operations[i];

    if(temp[0] == '1'){
        // if the first char in the string is 1, we need to add the following number to top of vector dataStack
        
    }else if(temp[0] == '2'){
        // if the first char in the string is 2, we need to remove the number currently at the top of the vector dataStack
        
    }else if(temp[0] == '3'){
        // if the first char in the string is 3, we need to take the largest number in the stack and add it to the vector res
        // track current largest number, it will be faster than searching for the largest number everytime
        
    }else if(temp.empty()) continue;
    
    
}
    
// vector res will be the vector sent back with results
return res;
    
}

//*********************************************************************

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string n_temp;
    getline(cin, n_temp);

    int n = stoi(ltrim(rtrim(n_temp)));

    vector<string> ops(n);

    for (int i = 0; i < n; i++) {
        string ops_item;
        getline(cin, ops_item);

        ops[i] = ops_item;
    }

    vector<int> res = getMax(ops);

    for (size_t i = 0; i < res.size(); i++) {
        fout << res[i];

        if (i != res.size() - 1) {
            fout << "\n";
        }
    }

    fout << "\n";

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
