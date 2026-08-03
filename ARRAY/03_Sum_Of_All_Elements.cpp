/*
============================================================
Problem    : Sum of All Elements
Topic      : Arrays
Difficulty : Easy

Problem Statement:
Find the sum of all elements in the given array.

Approach:
1. Initialize a variable 'sum' to 0.
2. Traverse the array.
3. Add each element to 'sum'.
4. Return the final sum.

Time Complexity : O(n)
Space Complexity: O(1)

Key Learning:
- Accumulating values during traversal.
- Using a running sum.
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

        int sum = 0;
        for(int i = 0; i <n; i++){
            sum = arr[i]+sum;
        }
        cout<<sum;
}
