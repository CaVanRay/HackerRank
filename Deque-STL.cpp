/**********************************************
Date: 08/26/2026
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

void printMaxK(int arr[], int n, int k){
    std::deque<int> mahDeque;
}

int main() {

int numOfTestCases;
std::cin >> numOfTestCases;

    while(numOfTestCases > 0){
        numOfTestCases--;
        
        int n, k;
        std::cin >> n >> k;
        int arr[n];
        for(int i = 0; i < n; i++){
            std::cin >> arr[i];
        }
        printMaxK(arr, n, k);    
    }      
    
    return 0;
}
