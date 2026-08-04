/*
============================================================
Problem    : Reverse an Array
Topic      : Arrays
Difficulty : Easy

Problem Statement:
Reverse all elements of the given array in-place.

Approach:
1. Initialize two pointers at the beginning and end of the array.
2. Swap the elements at both pointers.
3. Move the left pointer forward and the right pointer backward.
4. Continue until both pointers meet or cross.

Time Complexity : O(n)
Space Complexity: O(1)

Key Learning:
- Two-pointer technique allows in-place reversal.
- Swapping avoids the need for an extra array.
- Stop when both pointers meet or cross.
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

     int start = 0;       
    int end = n - 1;     
    while (start < end) {
      
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

     
        start++;
        end--;
    }

    
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;

}
