/*
============================================================
Problem    : Count Even and Odd Numbers
Topic      : Arrays
Difficulty : Easy

Problem Statement:
Count the total number of even and odd elements
present in the given array.

Approach:
1. Initialize two counters:
   - evenCount
   - oddCount
2. Traverse the array.
3. If element % 2 == 0, increment evenCount.
4. Otherwise, increment oddCount.

Time Complexity : O(n)
Space Complexity: O(1)

Key Learning:
- Using modulo operator to determine parity.
- Maintaining multiple counters in one traversal.
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

    int even = 0;
    int odd = 0;

    for(int i = 0;i<n;i++){
        if(arr[i]%2==0){
            even = even+1;
        }
        else {
            odd = odd +1;
        }
    }
cout<<"even: "<<even<<endl;
cout<<"odd: "<<odd;
 }