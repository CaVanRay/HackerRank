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

vector<int> getMax(const vector<string>& operations) {
vector<int> valueStack;
vector<int> maxStack;
vector<int> result;

for(const string& op : operations){
    if(op.empty()) continue;

    istringstream iss(op);
    int type;
    iss >> type;
    
    if(type == 1){   
        int value;
        iss >> value;
        
        valueStack.push_back(value);
        
        if(maxStack.empty()) {
            maxStack.push_back(value);
        } else {
            maxStack.push_back(std::max(value, maxStack.back()));
        }
        
    }else if(type == 2){
        if (!valueStack.empty()) {
            valueStack.pop_back();
            maxStack.pop_back();
        }
        
    }else if(type == 3){
        if (!maxStack.empty()) {
            result.push_back(maxStack.back());
        }
    }    
}

return result;    
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
