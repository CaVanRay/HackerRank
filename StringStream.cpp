#include <sstream>
#include <vector>
#include <iostream>
using namespace std;


//Function for seperating string into parts and converting into integers
vector<int> parser(string input_string) {
    
    //create vector "result" for returning integers to main
    vector<int> result;
    
    //create string "chunk" for handling split off sections of input_stream
    string chunk;
    
    //create stringstream "input_stream" for treating input str as a stream of data
    stringstream input_stream(input_string);
    
    //getline takes "input_stream" breaks it into "chunk"s using ',' to tell the different sections apart
    //as long as getline() recieves more data, the while() function returns true
    while(getline( input_stream, chunk,',')){
        
        //"result" is the vector we created at the beginning
        //".push_back" adds item to vector and increases its size
        //"stoi()" is a simple "string to int" tool for converting a string of numbers to actual integers
        result.push_back(stoi(chunk));
    }
    
    // we now return the whole vector of numbers from the input string back to main()
    return result;
}

int main() {
    
    // First declare and then take in the original string of numbers
    string input_string;
    cin >> input_string;
    
    // Declare a vecter that takes the results of the parser funtion as input
    vector<int> integers = parser(input_string);
    
    // Finally make a for() loop that tests against the size of the vector
    for(int i = 0; i < integers.size(); i++) {
        
        // each loop outputs the current item in the vector
        cout << integers[i] << "\n";
    }
    
    return 0;
}
// Boom motherfucker
