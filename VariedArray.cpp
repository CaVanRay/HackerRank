#include <vector>
#include <iostream>
using namespace std;


int main() {
    
    int rows, queries;
    cin >> rows >> queries;
    
    // Vector of vectors to hold variable length arrays
    vector<vector<int>> arr(rows);
            
    // For loop for creating rows
    for(int i = 0; i < rows; i++){
        int items;
        cin >> items;
        arr[i].resize(items);
    // For loop for creating space for and stocking items
        for(int j = 0; j < items; j++){
            cin >> arr[i][j];
        }
    } 
    // For loop for running through the search queries
    for(int i = 0; i < queries; i++){
        int x, y;
        cin >> x >> y;
        cout << arr[x][y] << endl;
    }
    return 0;
    }

