#include <vector>
#include <iostream>
using namespace std;

/*

Removes the element present at position.  
Ex: v.erase(v.begin()+4); (erases the fifth element of the vector v)

Removes the elements in the range from start to end inclusive of the start and exclusive of the end.
Ex:v.erase(v.begin()+2,v.begin()+5);(erases all the elements from the third element to the fifth element.)

*/

int main() {
    
    int n, temp, removeUno, removeFrom, removeTo;
    vector<int> Shrinky;
    cin >> n;
    
    for(int i = 0; i < n; i++){
        cin >> temp;
        Shrinky.push_back(temp);
    }
    
    cin >> removeUno;
    Shrinky.erase(Shrinky.begin() + (removeUno - 1));
    
    cin >> removeFrom >> removeTo;
    Shrinky.erase(Shrinky.begin() + (removeFrom - 1), Shrinky.begin() + (removeTo - 1));
    
    cout << Shrinky.size() << endl;
    
    for(int i = 0; i < Shrinky.size(); i++){
        cout << Shrinky[i] << " ";
    }
    
    
    return 0;
}
