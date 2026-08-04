/*
============================================================
Problem    : Second Smallest Element in an Array
Topic      : Arrays
Difficulty : Easy

Problem Statement:
Find the second smallest distinct element present in the array.
Return an appropriate value if no such element exists.

Approach:
1. Initialize two variables to store the smallest and second smallest elements.
2. Traverse the array once.
3. Update the smallest and second smallest values whenever required.
4. Return the second smallest distinct element.

Time Complexity : O(n)
Space Complexity: O(1)

Key Learning:
- Similar logic to finding the second largest element.
- Ignore duplicate values while updating answers.
- One traversal is sufficient for an optimal solution.
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
     int smallest = INT_MAX;
     int second_smallest = INT_MAX; 
    
        for(int i = 0;i<n;i++){

            if(arr[i]<smallest){
                second_smallest = smallest;
                smallest = arr[i];
            }

            else if(arr[i] != smallest && arr[i]<second_smallest ){
                second_smallest = arr[i];
            }


        }
        if(second_smallest==INT_MAX){
            cout<< -1;
            return 0;
        }
        else {
            cout<<second_smallest;
        }

    }