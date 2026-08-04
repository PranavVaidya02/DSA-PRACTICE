/*
============================================================
Problem    : Second Largest Element in an Array
Topic      : Arrays
Difficulty : Easy

Problem Statement:
Find the second largest distinct element present in the array.
Return an appropriate value if no such element exists.

Approach:
1. Initialize two variables to store the largest and second largest elements.
2. Traverse the array once.
3. Update the largest and second largest values whenever required.
4. Return the second largest distinct element.

Time Complexity : O(n)
Space Complexity: O(1)

Key Learning:
- A single traversal is enough to find the second largest element.
- Always handle duplicate values carefully.
- Initialize variables properly to avoid incorrect results.
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
     int largest = INT_MIN;
     int slargest = INT_MIN; 

      if (n < 2) {
        cout << -1;
        return 0;
    }


     for(int i = 0;i<n;i++){
        if(arr[i]>largest){
            slargest = largest ;
            largest = arr[i];
        }
        else if(arr[i]!= largest && arr[i]>slargest){
            slargest = arr[i];
        }
     }

if(slargest == INT_MIN){
    cout<<-1;
}
else{
    cout<<slargest;
}
return 0;
}


