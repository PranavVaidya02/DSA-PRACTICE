/*
============================================================
Problem    : Largest Element in an Array
Topic      : Arrays
Difficulty : Easy

Problem Statement:
Find the largest element present in the given array.

Approach:
1. Assume the first element is the largest.
2. Traverse the array from the second element.
3. If the current element is greater than the largest,
   update the largest.
4. Return the largest element.

Time Complexity : O(n)
Space Complexity: O(1)

Key Learning:
- Basic array traversal.
- Maintaining a running maximum.
============================================================
*/


#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    
    int largest = arr[0];

    for(int i = 1; i<n; i++){
        if(arr[i]>largest){
            largest = arr[i];
        }
        
    }
    cout<<largest<<" ";
}

