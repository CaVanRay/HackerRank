/**********************************************
Title: Deque-STL
Difficulty: Medium
Author: Cavan Ray Theiss

Description:
provided with a deque size, size of subarrays
and the integers to populate the subarrays

output the largest integer in each
subarray

**********************************************/

#include <iostream>
#include <deque>

int main() {
    
    int numOfCases = 0, sizeOfDeque = 0, sizeOfSub = 0; 
    int inputBufr, largestInSub = 0;
    
    std::cin >> numOfCases;
    
    for(int i = 0; i < numOfCases; i++){
        
        std::cin >> sizeOfDeque >> sizeOfSub
        std::deque<int> mahDeque;
        
        for(int j = 0; j < sizeOfDeque; j++){
            
            std::cin >> inputBufr;
            mahDeque.push_back(inputBufr);
            
        }
        
    }
      
    return 0;
}
