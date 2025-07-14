#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
    
// First you take in two integers, n = lines, q = queries    
    int n, q;
    cin>>n>>q;
    cin.ignore();
// make sure to clear the input buffer for getline() later    
    
// next make a map inside a map
// outer map = tag# lines
// inner map = name to name, other to other       
    map<string, map<string, string>> hrml;
    string line, path = "";
    
// Take in the line of hrml code
    while (n-->0) {
        getline(cin, line);
        
// break it into words in stringstream
        stringstream ss(line);
        
// first word, either <tag1> or </tag1>
        string token;
        ss >> token;
        
// the [1] character in the word is tested to either be / or not
        if(token[1]=='/'){
            size_t pos = path.rfind('.');
            if(pos!=string::npos){
                path = path.substr(0, pos);
            }else{
                path = "";
            }
        }else{
            string tag = token.substr(1);
            if(!tag.empty() && tag.back() == '>') tag.pop_back();
            
            if(!path.empty()){
                path += "." + tag;
            }else{
                path = tag;
            }
            
            string attr, eq, value;
            while (ss >> attr >> eq >> value) {    
                
                if(value.front()=='"'){
                    if(!value.empty() && value.back() == '>') value.pop_back();
                    value = value.substr(1, value.size() - 2);
                }
                 
                hrml[path][attr]=value;
            }
        }
    }
    
    while (q-->0) {
        getline(cin, line);
        size_t tilPos = line.find('~');
        string tagPath = line.substr(0,tilPos);
        string attr = line.substr(tilPos + 1);
        
        if(hrml.count(tagPath) && hrml[tagPath].count(attr)){
            cout<<hrml[tagPath][attr]<<endl;
        }else{
            cout<<"Not Found!"<<endl;
        }
    }
       
    return 0;
}
