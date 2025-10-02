#include<iostream>
#include<set>
using namespace std;

int main() {

    int rounds, type, item;
    set<int>S;
    set<int>::iterator clue;
    
    cin >> rounds;
    
    while(rounds--){
        
        cin >> type >> item;
        
        switch(type) {
            case 1: //Add
                S.insert(item);
                break;
            case 2: //Delete
                S.erase(item);
                break;
            case 3: //Search
                clue = S.find(item);
                if(clue != S.end()){
                    cout << "Yes" << endl;
                }else{
                    cout << "No" << endl;
                }
                break;
        }
    }
    
    return 0;
}
