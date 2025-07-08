#include <iostream>
using namespace std;

//This wont work without the intput given but i'm saving it anyways

int main() {
    
    int n, i;
    cin >> n;
    
    if(n >= 0 && n <= 1000){
        int numbers[n];
        for (i = n-1; i >= 0; i--){
            cin >> numbers[i];
        }
        
        for (i = 0; i <= n-1; i++){
            cout << numbers[i];
            cout << " ";
        }
    }else return 1;
         
    return 0;
}
