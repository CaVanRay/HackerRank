#include <iostream>
using namespace std;

class Box(int l, int b, int h){
    int l = 0, b = 0, h = 0, volume = 1;
    
    public:
    
    int getLength(){
        return l;
    };
    int getBreadth(){
        return b;
    };
    int getHeight(){
        return h;
    };
    long long CalculateVolume(){
        volume = (l*b*h);
        return volume;
    };
    
};

int main() {
    
    
    
    return 0;
}
