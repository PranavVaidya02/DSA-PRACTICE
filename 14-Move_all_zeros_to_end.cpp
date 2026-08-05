/*
============================================================
Problem    : Move Zeroes
Topic      : Arrays
Difficulty : Easy

Problem Statement:
Move all zeroes in the array to the end while maintaining the relative order of non-zero elements.

Approach:
1. Use two pointers: one for placing non-zero elements.
2. Traverse the array and shift all non-zero elements forward.
3. Fill remaining positions with zeroes.
4. Maintain order of non-zero elements.

Time Complexity : O(n)
Space Complexity: O(1)

Key Learning:
- Two-pointer technique is useful for in-place operations.
- Maintain relative order while modifying array.
- Avoid unnecessary swaps for better efficiency.
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
  for(int j = 0; j < n; j++){
    if(arr[j]!=0){
      swap(arr[i],arr[j]);
      i++;
    }
    
  }
   for(int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }
  
}