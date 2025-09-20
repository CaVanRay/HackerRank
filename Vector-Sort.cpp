#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


    // sortingBin.push_back(tempInt); pushing integer into vector
    // sortingBin.pop_back(tempInt); popping the last element from vector (size decreases by 1)
    // sort(sortingBin.begin(), sortingBin.end()); (Will sort all the elements in the vector)
        

int main() {
    
    int count, tempInt;
    cin >> count;
    vector<int>sortingBin;
    for(int i = 0; i < count; i++){
        cin >> tempInt;
        sortingBin.push_back(tempInt);
    }
    sort(sortingBin.begin(), sortingBin.end());
    for (int i = 0; i < count; i++) {
        cout << sortingBin[i] << " ";
    }
    return 0;
}
