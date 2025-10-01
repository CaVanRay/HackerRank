#include <vector>
#include <iostream>
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
        for(int l = 0; l < N; l++){
            if(Nset[l] < query){}
            if(Nset[l] == query){
                cout << "Yes " << l+1 << endl;
                break;
            }
            if(Nset[l] > query){
                cout << "No " << l+1 << endl;
                break;
            }
        }
    }
    return 0;
}
