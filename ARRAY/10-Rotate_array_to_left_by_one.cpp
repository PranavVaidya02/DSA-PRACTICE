/*
============================================================
Problem    : Left Rotate Array by One Position
Topic      : Arrays
Difficulty : Easy

Problem Statement:
Rotate the array to the left by one position while preserving the order of the remaining elements.

Approach:
1. Store the first element in a temporary variable.
2. Shift every element one position to the left.
3. Place the stored first element at the last index.
4. Return the modified array.

Time Complexity : O(n)
Space Complexity: O(1)

Key Learning:
- Store the first element before shifting to avoid losing its value.
- Rotation is different from reversal because element order is preserved.
- In-place shifting provides an optimal solution.
============================================================
*/

#include <bits/stdc++.h>
using namespace std;


int main(){
    int n;
    cin>>n;

    int arr[n];
    for(int i = 0; i<n ; i++){
        cin>>arr[i];
    }

    if (n <= 0) return 0;

    int temp = arr[0];

    for(int i = 1; i < n; i++){
        arr[i-1] = arr[i];
    }

  arr[n-1] = temp;

    for(int i = 0;i <n; i++){
        cout<<arr[i]<<" ";
    }

}