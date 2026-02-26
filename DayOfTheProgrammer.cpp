//***************************************************************************

/*
Title: Day Of The Programmer
Author: Cavan Ray Theiss
Description: given the year return what day is the 256th day in the year.
take into account both the julian & gregorian calenders

Input: a single integer
Output: a single string
*/

string dayOfProgrammer(int year) {

  // return in the form of dd.mm.yyyy
  // dd & mm will always be either 12.09 or 13.09
  // we can append the provided year at the end
  
  string commonYearProgrammersDay = string("13.09.") + to_string(year);
  string leapYearProgrammersDay = string("12.09.") + to_string(year);

    // Julian years
    if(year < 1918){
        if(year % 4 == 0){
           return leapYearProgrammersDay; 
        }else{
           return commonYearProgrammersDay;
        }
    }

    // the year of conversion 1918
    if(year == 1918){
        return "26.09.1918";
    }
    
    // Gregorian years
    if(year % 400 == 0 || (year % 4 == 0 && year % 100 != 0)){
        return leapYearProgrammersDay;
    }else{
        return commonYearProgrammersDay;
    }
}

//***************************************************************************
