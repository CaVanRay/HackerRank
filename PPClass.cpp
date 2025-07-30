#include <iostream>
using namespace std;

 class Students{
    
    int age, stan;
    string fname, lname;
    
    public:
    
    void set_age(int a){ age = a;};
    void set_fname(string f){ fname = f;};
    void set_lname(string l){ lname = l;};
    void set_stan(int s){ stan = s;};
    
    int get_age(){
        return age;
    }
    string get_fname(){
        return fname;
    }
    string get_lname(){
        return lname;
    }
    int get_stan(){
        return stan;
    }
};

int main() {
    
    int stu_age, stu_stan;
    string stu_fname, stu_lname;
    
    
    cin >> stu_age >> stu_fname >> stu_lname >> stu_stan;
    
    Students student;
    
    student.set_age(stu_age);
    student.set_fname(stu_fname);
    student.set_lname(stu_lname);
    student.set_stan(stu_stan);
    
    cout << student.get_age() << endl;
    cout << student.get_lname() << ", " << student.get_fname() << endl;
    cout << student.get_stan() << endl << endl;
    cout << student.get_age() << "," << student.get_fname() << "," ;
    cout << student.get_lname() << "," << student.get_stan() << endl;
    
    
       
    return 0;
}
