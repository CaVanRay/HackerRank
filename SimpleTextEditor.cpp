#include <string>
#include <vector>
#include <iostream>

void append(std::string& current){
    std::string addThis;
    std::cin >> addThis;
    current.append(addThis);
}

void deleteText(std::string& current){
    int toRemove;
    std::cin >> toRemove;
    if(toRemove <= current.length()){
        current.erase(current.length() - toRemove, toRemove);
    }
}

void print(std::string current){
    int toPrint;
    std::cin >> toPrint;
    char letterToPrint = current[toPrint -1];
    std::cout << letterToPrint << std::endl;
}

void undo(std::string& current, vector<string>&pastStates){
    if(!pastStates.empty()){
        current = pastStates.back();
        pastStates.pop_back();
    }
}
    
int main() {
    
    std::string current;
    std::vector<std::string> pastStates;
    int numberOfActions, thisAction;

    std::cin >> numberOfActions; 

    for(int i = 0; i < numberOfActions; i++){

        std::cin >> thisAction;

        switch(thisAction){
            case 1 :
            pastStates.push_back(current);
            append(current);
            break;
            
            case 2 :
            pastStates.push_back(current);
            deleteText(current);
            break;

            case 3 :
            print(current);
            break;

            case 4 :
            undo(current, pastStates);
            break;

            default :
            std::cout << "Error: Invalid Action";
            
        }
    }
    
    return 0;
}
