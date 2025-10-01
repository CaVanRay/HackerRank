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
    for(int i = N; i > 0; i--){
        cin >> input;
        Nset.push_back(input);
    }
    cin >> Q;
    for(int j = Q; j > 0; j--){
        cin >> query;
        for(int l = 1; l < N; l++){
            if(Nset[l] < query){}
            if(Nset[l] == query){
                cout << "Yes " << l << endl;
                break;
            }
            if(Nset[l] > query){
                cout << "No " << l << endl;
                break;
            }
        }
    }
    return 0;
}
