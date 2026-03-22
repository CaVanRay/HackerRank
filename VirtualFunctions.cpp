#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

//*****************************************************************************

/*

Title: Vitual Functions
Author: Cavan Ray Theiss

Description: The first line of input contains the number of objects that are being created. 
If the first line of input for each object is 1, it means that the object being created 
is of the Professor class, you will have to input the name, age and publications of the professor.
If the first line of input for each object is 2, it means that the object is of the Student 
class, you will have to input the name, age and the marks of the student in  subjects.

Input:
Output:

*/

class Person {
public:
    string name;
    int age;
    virtual void getdata() = 0; // purely virtual
    virtual void putdata() = 0; // purely virtual

};

class Professor : public Person{
public:
    int publications;
    void getdata() override {
        // read name, age, publications
    }
    void putdata() override {
        // print the required output
    }
};

class Student : public Person{

};


//*****************************************************************************


int main(){

    int n, val;
    cin>>n; //The number of objects that is going to be created.
    Person *per[n];

    for(int i = 0;i < n;i++){

        cin>>val;
        if(val == 1){
            // If val is 1 current object is of type Professor
            per[i] = new Professor;

        }
        else per[i] = new Student; // Else the current object is of type Student

        per[i]->getdata(); // Get the data from the user.

    }

    for(int i=0;i<n;i++)
        per[i]->putdata(); // Print the required output for each object.

    return 0;

}
