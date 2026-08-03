/*
============================================================
Problem    : Linear Search
Topic      : Arrays
Difficulty : Easy

Problem Statement:
Search for a given element in the array using
Linear Search.

Approach:
1. Traverse the array from beginning to end.
2. Compare each element with the target value.
3. If found, return its index.
4. If the traversal ends without finding the element,
   return -1 (or indicate that the element is not found).

Time Complexity : O(n)
Space Complexity: O(1)

Key Learning:
- Sequential searching.
- Best suited for unsorted arrays.
============================================================
*/

#include <bits/stdc++.h>
using namespace std;

 int main(){
    int n;
    cin>>n;
    int target;
    cin>>target;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    
        for(int i = 0;i < n; i++){
            if(arr[i]==target){
                cout<<i;
                return 0;
            }

        }
        
        cout<<-1;
        return 0;

}