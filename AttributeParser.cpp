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

            // set pos to the position of the last occurance of .
            size_t pos = path.rfind('.');

            // if pos found something
            if(pos!=string::npos){

                // Remove everything after the pos position
                path = path.substr(0, pos);
            }else{

                // Set path to an empty string
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

                // if first character of value is "
                if(value.front()=='"'){

                    // if value is not empty and the last character is >
                    if(!value.empty() && value.back() == '>')

                    // remove the > from the end, "value"> = "value"
                    value.pop_back();
                    
                    // remove the quotations from value, "value" = value
                    value = value.substr(1, value.size() - 2);
                }

                // sets current location in map map to equal value
                hrml[path][attr]=value;
            }
        }
    }
//***************************************************************************
    
    
//***************************************************************************
// while queries equals more than 0
    while (q-->0) {

        // take all cin input and save it to string line
        getline(cin, line);

        // find the first instance of ~ and save its location to tilpos
        size_t tilPos = line.find('~');

        // set tagpath to equal line after you remove everything after the ~
        string tagPath = line.substr(0, tilPos);

        // set attr to equal everything after the ~ in line
        string attr = line.substr(tilPos + 1);

        // if using the collected tagpath & attr successfully relay to something then go ahead and return it
        if(hrml.count(tagPath) && hrml[tagPath].count(attr)){
            cout<<hrml[tagPath][attr]<<endl;

            // if using the collected tagpath & attr do not connect to anything, return "Not Found"
        }else{
            cout<<"Not Found!"<<endl;
        }
    }    
  //***************************************************************************
  return 0;
}
