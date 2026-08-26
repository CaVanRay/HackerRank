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

void printMaxK(std::vector<int>& arr, int n, int k){
    
    std::deque<int> mahDeque;
    int i = 0;

    while(i < n){
        while(mahDeque.size() < k){
            mahDeque.push_back(arr[i]);
            i++;
        }
    
        int largest = 0;
        for(int card : mahDeque){
            if(card > largest)
                largest = card;
        }
        std::cout << largest << " ";
        mahDeque.pop_front();
    }    
}

int main() {

int numOfTestCases;
std::cin >> numOfTestCases;

    while(numOfTestCases > 0){
        numOfTestCases--;
        
        int n, k;
        std::cin >> n >> k;
        vector<int> arr(n);
        for(int i = 0; i < n; i++){
            std::cin >> arr[i];
        }
        printMaxK(arr, n, k);    
    }      
    
    return 0;
}
