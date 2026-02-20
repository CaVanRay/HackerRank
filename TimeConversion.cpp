//**********************************************************

/*
Title: Time Conversion
Author: Cavan Ray Theiss
Description: Take a string input of a civilian time and 
convert it to military time before outputting it in the
same format - HH:MM:SS:(AM/PM)
Input: a single string
Output: a single string
*/

string timeConversion(string s) {
    string hoursString = s.substr(0, 2);
    string amORpm = s.substr(8, 2);
    string militaryTime = s.substr(0, 8);
    if(amORpm == "AM" && hoursString == "12"){
        militaryTime.replace(0, 2, "00");
    }else{
        int hours = stoi(s);
        hours = hours + 12;
        militaryTime.replace(0, 2, to_string(hours));
    }
    return militaryTime;
}

//**********************************************************
