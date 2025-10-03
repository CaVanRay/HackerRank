#include <iostream>
#include <map>
using namespace std;

int main() {

int rounds, type, grade;
string name;
map<string, int> Students;
map<string, int>::iterator Clue;

cin >> rounds;
    
    while(rounds--){
        cin >> type >> name;
        Clue = Students.find(name);
        switch(type){
            case 1: //Add
                cin >> grade;
                
                if(Clue != Students.end()){
                    Students[name] = Students[name] + grade;
                }else{
                    Students.insert(make_pair(name, grade));
                }
            break;
            case 2: //Delete
                Students[name] = 0;
            break;
            case 3: //Output
                if(Clue != Students.end()){
                    cout << Students[name] << endl;
                }else{
                    cout << 0 << endl;
                }
            break;
        }
    }
    
    return 0;
}
