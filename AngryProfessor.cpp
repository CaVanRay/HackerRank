/******************************************************************************
Title: Angry Professor
Author: Cavan Ray Theiss
Date: 10/05/26

Description:

  Frustrated with their lack of discipline, the professor decides to cancel 
  class if fewer than some number of students are present when class starts.

  Given the arrival time of each student and a threshhold number of attendees, 
  determine if the class is cancelled.    

  Example
  n = 5    number of students in class
  k = 3    number of students required at start time to proceed
  a = [-2, -1, 0, 1, 2]
  ('a' is how long after start the students arrived, negative numbers represent early)

  The first 3 students arrived on time. The last 2 were late. The threshold is  
  3 students, so class will go on. Return YES.

Input: 
  int k = number of students required
  int array a = list of student arrival times
Output: 
  string = "YES" if class is cancelled or "NO" if not cancelled

******************************************************************************/
#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

//***************************************************************************
// MY CODE STARTS HERE

string angryProfessor(int k, vector<int> a) {
  
  for( int student : a){
      if(student <= 0){
        k--;
        if(k <= 0)
          return "YES";
      }
    }
  if(k > 0)
    return "NO";
  
}

// MY CODE ENDS HERE
//***************************************************************************

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string t_temp;
    getline(cin, t_temp);

    int t = stoi(ltrim(rtrim(t_temp)));

    for (int t_itr = 0; t_itr < t; t_itr++) {
        string first_multiple_input_temp;
        getline(cin, first_multiple_input_temp);

        vector<string> first_multiple_input = split(rtrim(first_multiple_input_temp));

        int n = stoi(first_multiple_input[0]);

        int k = stoi(first_multiple_input[1]);

        string a_temp_temp;
        getline(cin, a_temp_temp);

        vector<string> a_temp = split(rtrim(a_temp_temp));

        vector<int> a(n);

        for (int i = 0; i < n; i++) {
            int a_item = stoi(a_temp[i]);

            a[i] = a_item;
        }

        string result = angryProfessor(k, a);

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
