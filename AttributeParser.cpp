#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
//***************************************************************************
// First you take in two integers, n = lines, q = queries
    int n, q;
    cin >> n >> q;
// make sure to clear the input buffer for getline() later
    cin.ignore();
//***************************************************************************


//***************************************************************************
// next make a map inside a map
// outer map = tag# lines
// inner map = organized info, example: name to name, other to other
    map<string, map<string, string>> hrml;
    string line, path = "";
//***************************************************************************


//***************************************************************************
// While number of lines input equals more than 0
// Take in the line of hrml code
    while (n-->0) {
        getline(cin, line);
            
// break it into datastream in stringstream
        stringstream ss(line);
        
// stream string into character token
        string token;
        ss >> token;
        
// the [1]st character in the word is tested to either be / or not
        if(token[1]=='/'){
            size_t pos = path.rfind('.');
            if(pos!=string::npos){
                path = path.substr(0, pos);
            }else{
                path = "";
            }
        }else{
            // remove the first character from token, example: <tag1 is now tag1
            string tag = token.substr(1);
            
            // if tag is not empty & the last character in tag is ">" then remove the ">" form tag
            if(!tag.empty() && tag.back() == '>' ) tag.pop_back();
            
            // if path is not empty, add "." & tag to the end of path 
            if(!path.empty()){
                path += "." + tag;

            // else if path is empty the set path to equal tag
            }else{
                path = tag;
            }
            
            string attr, eq, value;
            // ss into the value to be saved, example: Name = Name ~ name is attr, = is eq, name is value
            while (ss >> attr >> eq >> value) {
                
                if(value.front()=='"'){
                    if(!value.empty() && value.back() == '>')
                    value.pop_back();
                    value = value.substr(1, value.size() - 2);
                }
                
                hrml[path][attr]=value;
            }
        }
    }
//***************************************************************************
    
    
//***************************************************************************
// while queries equals more than 0
    while (q-->0) {
        getline(cin, line);
        size_t tilPos = line.find('~');
        string tagPath = line.substr(0, tilPos);
        string attr = line.substr(tilPos + 1);
        
        if(hrml.count(tagPath) && hrml[tagPath].count(attr)){
            cout<<hrml[tagPath][attr]<<endl;
        }else{
            cout<<"Not Found!"<<endl;
        }
    }    
  //***************************************************************************
  return 0;
}
