/*
============================================================
Problem    : Element Appearing Once
Topic      : Arrays
Difficulty : Easy

Problem Statement:
In an array where every element appears twice except one, find the element that appears only once.

Approach:
1. Initialize a variable to store XOR of all elements.
2. Traverse the array and XOR every element with the variable.
3. Pairs cancel out due to XOR property (a ^ a = 0).
4. The remaining value will be the element appearing once.

Time Complexity : O(n)
Space Complexity: O(1)

Key Learning:
- XOR is useful for problems involving pairs.
- a ^ a = 0 and a ^ 0 = a are key properties.
- Avoid extra space using bit manipulation.
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

 for(int i = 0; i < n; i++) {
        int count = 0;
        
       
        for(int j = 0; j < n; j++) {
            if(arr[i] == arr[j]) {
                count++;
            }
        }
        
       
        if(count == 1) {
            cout << arr[i];
            return 0; 
        }
    }

    return 0;
}