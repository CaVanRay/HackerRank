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
#include <vector>

void printMaxK(std::vector<int>& arr, int n, int k){
    
    std::deque<int> mahDeque;

    for(int i; i < n; i++){
        while(!mahDeque.empty() && mahDeque.front() < (i - k + 1)){
            mahDeque.pop_front();
        }
        while(!mahDeque.empty() && arr[mahDeque.back()] < arr[i]){
            mahDeque.pop_back();
        }
        mahDeque.push_back(i);
        if(i >= k - 1){
            std::cout << arr[mahDeque.front()] << " ";
        }
    }
    
}

int main() {

int numOfTestCases;
std::cin >> numOfTestCases;

    while(numOfTestCases > 0){
        numOfTestCases--;
        
        int n, k;
        std::cin >> n >> k;
        std::vector<int> arr(n);
        for(int i = 0; i < n; i++){
            std::cin >> arr[i];
        }
        printMaxK(arr, n, k); 
        std::cout << std::endl;
    }      
    
    return 0;
}
