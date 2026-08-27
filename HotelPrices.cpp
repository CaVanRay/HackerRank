/******************************************************************
Date: 08/26/2026
Title: Hotel Prices
Difficulty: Medium
Author: Cavan Ray Theiss

Description:
rather than write the code, it seems I need to 
go through the existing code and fix whatever 
the problem is

proble: sometimes calculated profits are lower than they should be

*******************************************************************/

//
// PROVIDED CODE BELOW - NOT MY WORK
//

#include <iostream>
#include <vector>

// I dislike when "using namespace" is used but I don't know why
using namespace std;

//**************************************************************

class HotelRoom {
public:
    HotelRoom(int bedrooms, int bathrooms) 
    : bedrooms_(bedrooms), bathrooms_(bathrooms) {}

// base class funtion needed to be labeled "virtual"
   virtual int get_price() {
        return 50*bedrooms_ + 100*bathrooms_;
    }
private:
    int bedrooms_;
    int bathrooms_;
};

//**************************************************************

class HotelApartment : public HotelRoom {
public:
    HotelApartment(int bedrooms, int bathrooms) 
    : HotelRoom(bedrooms, bathrooms) {}

// derived class function needed to be labeled "override"
    int get_price() override {
        return HotelRoom::get_price() + 100;
    }
};

//**************************************************************

int main() {
    int n;
    cin >> n;
    vector<HotelRoom*> rooms;
    for (int i = 0; i < n; ++i) {
        string room_type;
        int bedrooms;
        int bathrooms;
        cin >> room_type >> bedrooms >> bathrooms;
        if (room_type == "standard") {
            rooms.push_back(new HotelRoom(bedrooms, bathrooms));
        } else {
            rooms.push_back(new HotelApartment(bedrooms, bathrooms));
        }
    }

    int total_profit = 0;
    for (auto room : rooms) {
        total_profit += room->get_price();
    }
    cout << total_profit << endl;

    for (auto room : rooms) {
        delete room;
    }
    rooms.clear();

    return 0;
}
