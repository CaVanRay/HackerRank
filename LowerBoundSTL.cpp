#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

/*

input N
for(N) -> array
input Q
for(Q) -> search for K
    for(N)
        if < k = keep going
        if == k = "yes", output location, break
        if > k = "No", output location, break
        

*/

int main() {
    int N, Q, K, input, query;
    vector<int> Nset;
    cin >> N;
    for(int i = 0; i < N; i++){
        cin >> input;
        Nset.push_back(input);
    }
    
    cin >> Q;
    for(int j = 0; j < Q; j++){
        cin >> query;
        
        auto Found = lower_bound(Nset.begin(), Nset.end(), query);

        if(Found != Nset.end() && *Found == query) {
            cout << "Yes " << (Found - Nset.begin() + 1) << endl;
        } else {
            cout << "No " << (Found - Nset.begin() + 1) << endl;
        }
    }
    return 0;
}
