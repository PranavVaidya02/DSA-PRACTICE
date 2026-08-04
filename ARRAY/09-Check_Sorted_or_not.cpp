/*
============================================================
Problem    : Check if Array is Sorted
Topic      : Arrays
Difficulty : Easy

Problem Statement:
Determine whether the given array is sorted in non-decreasing order.

Approach:
1. Use two pointers (or indices) pointing to consecutive elements.
2. Compare the current element with the next element.
3. If any current element is greater than the next, the array is not sorted.
4. If all pairs satisfy the condition, the array is sorted.

Time Complexity : O(n)
Space Complexity: O(1)

Key Learning:
- Adjacent element comparison is enough to verify sorting.
- Early termination improves efficiency when an unsorted pair is found.
- Two-pointer traversal is a simple way to compare consecutive elements.
============================================================
*/

#include <bits/stdc++.h>
using namespace std;

bool sorted_or_not(int arr[],int n){
    
   for(int i = 1;i <n-1; i++){
    if(arr[i]<arr[i-1]){
        return false;
    }
    }
        return true;
}

int main(){
    int n;
    cin>>n;

    int arr[n];
    for(int i = 0; i<n ; i++){
        cin>>arr[i];
    }

    if(n<2){
        cout<<"True";
        return 0;
    }

     if (sorted_or_not(arr, n)) {
        cout << "True" << endl;
    } else {
        cout << "False" << endl;
    }

   
}

