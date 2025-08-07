#include <iostream>
using namespace std;

class Box{
    private:
    int l, b, h;
    long long volume = 1;
    
    public:
    // Constructors
    Box() : l(0), b(0), h(0) {}
    Box(int l, int b, int h) : l(l), b(b), h(h) {}
    Box(const Box& box) : l(box.l), b(box.b), h(box.h) {}
    
    
    // Getter functions
    int getLength(){
        return l;
    };
    int getBreadth(){
        return b;
    };
    int getHeight(){
        return h;
    };
    
    // Calculate volume
    long long CalculateVolume(){
        volume = (l*b*h);
        return volume;
    };
    
    // Operator overloading <
    
};

int main() {
    
    
    
    return 0;
}
