#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

//******************************************************
/*
 * Complete the 'appendAndDelete' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts following parameters:
 *  1. STRING s
 *  2. STRING t
 *  3. INTEGER k
 * The first line contains a string , the initial string.
 * The second line contains a string , the desired final string.
 * The third line contains an integer , the number of operations.
 *
 * Returns
 * string: either Yes or No
 *
 * TLDR: Basicanly you can either remove or add letters to the string one item at a time
 * within the given number of actions "K", can you turn string "S" into string "T"?
 * Return with answer "YES" or "NO"
 */

string appendAndDelete(string s, string t, int k) {

    string initial = s;
    string desired = t;
    int availableActions = k;
    int lastMatchPos = 0;
    
    // Take both sizes
    
    int initialLength = initial.size();
    int desiredLength = desired.size();
    
    // Find last matching in a row
    
    for (int i = 0; i < initialLength; i++) {
        char initChar = initial[i];
        char desiChar = desired[i];
        if (initChar == desiChar){
            lastMatchPos = i + 1; // realized I was off by 1, positions start at 0
                }else {
            break;
                }
    }
    
    // Count Deletes
    
    int deletes = (initialLength - lastMatchPos);
    
    // Count Adds

    int adds = (desiredLength - lastMatchPos);
    
    // Compare to available actions
    // Less than or equal - return "Yes"
    // More than - return "No"

    if((deletes + adds) <= availableActions){
        return "Yes";
    }else {
        return "No";
    }
}
//******************************************************
int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string t;
    getline(cin, t);

    string k_temp;
    getline(cin, k_temp);

    int k = stoi(ltrim(rtrim(k_temp)));

    string result = appendAndDelete(s, t, k);

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
