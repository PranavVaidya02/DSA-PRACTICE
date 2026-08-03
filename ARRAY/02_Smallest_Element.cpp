/*
============================================================
Problem    : Smallest Element in an Array
Topic      : Arrays
Difficulty : Easy

Problem Statement:
Find the smallest element present in the given array.

Approach:
1. Assume the first element is the smallest.
2. Traverse the array from the second element.
3. If the current element is smaller than the smallest,
   update the smallest.
4. Return the smallest element.

Time Complexity : O(n)
Space Complexity: O(1)

Key Learning:
- Finding minimum using a single traversal.
- Maintaining a running minimum.
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
    
    int smallest = arr[0];

    for(int i = 1; i<n; i++){
        if(arr[i]<smallest){
            smallest = arr[i];
        }
        
    }
    cout<<smallest<<" ";
}
