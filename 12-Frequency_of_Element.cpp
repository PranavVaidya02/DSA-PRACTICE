/*
============================================================
Problem    : Frequency of Element
Topic      : Arrays
Difficulty : Easy

Problem Statement:
Count the frequency of each element in the array.

Approach:
1. Use a hash map (unordered_map) to store element frequencies.
2. Traverse the array and update count for each element.
3. Access or print frequencies from the map.

Time Complexity : O(n)
Space Complexity: O(n)

Key Learning:
- Hashing helps in efficient counting problems.
- unordered_map provides average O(1) operations.
- Useful in many frequency-based problems.
============================================================
*/

#include <bits/stdc++.h>
using namespace std;

 int main(){
    int n;
    cin>>n;
    int d;
    cin>>d;
    int arr[n];
    for(int i = 0; i < n; i++){
      cin>>arr[i];
    }

    int count = 0;
    
    for(int i = 0;i<n;i++){
      if(arr[i]==d){
        count = count+1;
      }
    }
    cout<<count;


  }