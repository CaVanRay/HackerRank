#include <iostream>
using namespace std;

class Box{
    int length = 0, breadth = 0, height = 0, volume = 1;
    
    public:
    
    int getLength(){
        return length;
    };
    
    int getBreadth(){
        return breadth;
    };
    
    int getHeight(){
        return height;
    };
    
    long long CalculateVolume(){
        volume = (length*breadth*height);
        return volume;
    };
    
};

int main() {
    
    
    
    return 0;
}
