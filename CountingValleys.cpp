//******************************************************************************************

/*
Title: Counting Valleys
Author: Cavan Ray Theiss

Description: given the number of steps in a hike and whether they were uphill or downhill
we need to return the number of Valleys traveled through. every hike starts and ends at sea
level

Input: a single integer count of the steps in the provided string, and a string comprised of
U & D, for uphill and downhill

Output: returns a single integer representing the number of valleys traveled through
*/

int countingValleys(int steps, string path) {
    int currentAltitude = 0, numberOfValleys = 0;
    bool belowSeaLevel = false;
    
    for(char angle : path){
        if(angle == 'D'){
            currentAltitude--;
            if(currentAltitude < 0){
                belowSeaLevel = true;
            }
        }else{
            currentAltitude++;
            if(belowSeaLevel == true && currentAltitude >= 0){
                numberOfValleys++;
                belowSeaLevel = false;
            }
        }    
    }
    return numberOfValleys;
}

//******************************************************************************************
