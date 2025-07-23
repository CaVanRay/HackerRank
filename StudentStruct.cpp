#include <iostream>
using namespace std;


struct Student{
    int age;
    string fname;
    string lname;
    int stands; 
};


int main() {
    
    Student student;   
    
    cin >> student.age;
    cin >> student.fname;
    cin >> student.lname;
    cin >> student.stands;
    
    cout << student.age << " " ; 
    cout << student.fname << " " ;
    cout << student.lname << " " ;
    cout << student.stands << endl;
     
    return 0;
}
