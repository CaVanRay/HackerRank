#include <bits/stdc++.h>

using namespace std;
//************************************************************************************************
//Define the structs Workshops and Available_Workshops.
//Implement the functions initialize and CalculateMaxWorkshops

struct Workshops{
int StartTime, EndTime, DurTime;

};

struct Available_Workshops{
int n;

// It looks like Available_Workshop is the engine & Workshop is the storage.
// These excersizes suck at explaining what they want you to do.
// I think I'm supposed to store the start & duration times and then calculate how many classes can be taken at once
// but they specifically want it done with arrays?

};
//************************************************************************************************
int main(int argc, char *argv[]) {
    int n; // number of workshops
    cin >> n;
    // create arrays of unknown size n
    int* start_time = new int[n];
    int* duration = new int[n];

    for(int i=0; i < n; i++){
        cin >> start_time[i];
    }
    for(int i = 0; i < n; i++){
        cin >> duration[i];
    }

    Available_Workshops * ptr;
    ptr = initialize(start_time,duration, n);
    cout << CalculateMaxWorkshops(ptr) << endl;
    return 0;
}
