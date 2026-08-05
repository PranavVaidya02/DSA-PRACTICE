/*
============================================================
Problem    : Remove Duplicates (Sorted Array)
Topic      : Arrays
Difficulty : Easy

Problem Statement:
Remove duplicates from a sorted array in-place such that each element appears only once.

Approach:
1. Use two pointers: one for unique elements and one for traversal.
2. Compare current element with previous unique element.
3. If different, place it at the next position of unique pointer.
4. Return the count of unique elements.

Time Complexity : O(n)
Space Complexity: O(1)

Key Learning:
- Two-pointer technique works efficiently on sorted arrays.
- In-place modification avoids extra space.
- Important pattern for array compaction problems.
============================================================
*/

#include <bits/stdc++.h>
using namespace std;


 int main(){
    int n;
    cin>>n;

    int arr[n];
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }

  int i = 0;
  for(int j = 1;j<n;j++){
    if(arr[j]!=arr[i]){
        arr[i+1] = arr[j];
        i++;
    }

  }
  
  for(int k = 0;k<=i;k++){
    cout<<arr[k]<<" ";
  }
}
