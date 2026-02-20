//**************************************************************************************************

/*
Title: Apple and Orange
Author: Cavan Ray Theiss

Description: given the locations of 2 fruit trees, the space occupied by the house
and the distances traveled by fruit that have fallen from the trees, we need to 
calculate and return then amounts of each fruit that have landed on top of the
house

Input: 
        4 seperate integers representing points on X-axis 
            s - house start 
            t - house end
            a - apple tree
            b - orange tree
            
        2 integer arrays representing distance fruit falls from
        their respective tree, positive numbers fall to the right
        while negative numbers fall to the left
        
Output: print 2 numbers to the screen, the first is the number
of apples to fall on the house, the second is the number of oranges 
to fall on the house
*/

void countApplesAndOranges(int s, int t, int a, int b, const vector<int>& apples, const vector<int>& oranges) {
int applesOnRoof = 0, orangesOnRoof = 0;
    for(int appleFallingDistance : apples){
        if((a + appleFallingDistance >= s) && (a + appleFallingDistance <= t))
        applesOnRoof++;
    }
    for(int orangeFallingDistance : oranges){
        if((b + orangeFallingDistance >= s) && (b + orangeFallingDistance <= t))
        orangesOnRoof++;
    }
    cout << applesOnRoof << endl << orangesOnRoof << endl;
}

//**************************************************************************************************
