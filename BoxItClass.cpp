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
    bool operator<(const Box& boox){
        if (l < boox.l)
            return true;
        else if (l == boox.l && b < boox.b)
            return true;
        else if (l == boox.l && b == boox.b && h < boox.h)
            return true;
        else
            return false;
    }

    // Operator overloading <<
    friend ostream& operator<<(ostream& out, const Box& Boox) {
        out << Boox.l << " " << Boox.b << " " << Boox.h;
        return out;
    }
};


/* 
Everything from here down is bs, this whole section was supposed to be included in the excersize but wasnt, I had to google it.

If i was supposed to figure out how to write it then the instructions a messed up or straight up got forgotten.

*/
void check2()
{
    int n;
    cin>>n;
    Box temp;
    for(int i=0;i<n;i++)
    {
        int type;
        cin>>type;
        if(type ==1)
        {
            cout<<temp<<endl;
        }
        if(type == 2)
        {
            int l,b,h;
            cin>>l>>b>>h;
            Box NewBox(l,b,h);
            temp=NewBox;
            cout<<temp<<endl;
        }
        if(type==3)
        {
            int l,b,h;
            cin>>l>>b>>h;
            Box NewBox(l,b,h);
            if(NewBox<temp)
            {
                cout<<"Lesser\n";
            }
            else
            {
                cout<<"Greater\n";
            }
        }
        if(type==4)
        {
            cout<<temp.CalculateVolume()<<endl;
        }
        if(type==5)
        {
            Box NewBox(temp);
            cout<<NewBox<<endl;
        }

    }
}

int main()
{
    check2();
}
