/*
============================================================
Problem    : Missing Number
Topic      : Arrays
Difficulty : Easy

Problem Statement:
Given an array containing numbers from 0 to n with one number missing, find the missing number.

Approach:
1. Compute expected sum of numbers from 0 to n using formula n*(n+1)/2.
2. Calculate actual sum of array elements.
3. Subtract actual sum from expected sum to get missing number.
4. Return the result.

Time Complexity : O(n)
Space Complexity: O(1)

Key Learning:
- Mathematical formulas can optimize problems.
- Avoid extra loops using direct computation.
- Watch out for integer overflow (use long long if needed).
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
  
    long long sum = (n*(n+1))/2;
    long long actual_sum =0;

    for(int i =0;i <n; i++){
      actual_sum = actual_sum + arr[i]; 
    }
    int missing_number = sum - actual_sum;
    cout<<missing_number;


  
  }
