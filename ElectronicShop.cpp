//******************************************************************************

/*
Title: Electronics Shop
Author: Cavan Ray Theiss

Description: provided with a budget, an array of keyboard costs, & an array of
usb drive costs, we need to return an integer price of the most expensive items
we can afford

Input: 2 arrays of integers representing the prices of keyboards & drives, and a 
single integer representing your budget

Output: find the highest amount that we can pay without going over budget and 
return that integer
*/

int getMoneySpent(const vector<int> keyboards,const vector<int> drives, int b) {
    
    int highestPrice = 0;

    for(int keyboardPrice : keyboards){
        for(int drivePrice : drives){
            if(keyboardPrice + drivePrice <= b){
                highestPrice = max(highestPrice, (keyboardPrice + drivePrice));
            }
        }
    }
    if(highestPrice == 0) return -1; 
    return highestPrice;
}

//******************************************************************************
