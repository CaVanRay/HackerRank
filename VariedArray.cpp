#include <vector>
#include <iostream>
using namespace std;
// This program is pissing me off, because I can't figure out how it's coming up with the outputs for the inputs.


int main() {

        int a,b,x;
        cin>>a>>b;
        int* arr[a];
        int c[b][2],d[a];
        vector<int> v;
        for(int i=0;i<a;i++){
                int k;
                cin>>k;
                for(int j=0;j<k;j++){
                        cin>>x;
                        v.push_back(x);
                }
                d[i]=k;
                }
        for(int k=0;k<b;k++){
                cin>>(c[k][0])>>(c[k][1]);
        }
        int* p = &v[0];
        for(int i=0;i<a;i++){
            arr[i]=p;
            p += d[i]; 
        }
        for(int i=0;i<b;i++){
            cout<<*(arr[c[i][0]] + c[i][1])<<endl;
        }

                             
    return 0;
    }
