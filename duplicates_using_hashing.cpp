#include <bits/stdc++.h> 
using namespace std; 
  
void printDuplicates(int arr[], int n) 
{ 
    unordered_map<int, int> freq; 
    for (int i=0; i<n; i++) 
        freq[arr[i]]++; 
  
    bool dup = false; 
    unordered_map<int, int>:: iterator itr; 
    for (itr=freq.begin(); itr!=freq.end(); itr++) 
    { 
        if (itr->second > 1) 
        { 
            cout << itr->first << " "; 
            dup = true; 
        } 
    } 
    if (dup == false) 
        cout << "-1"; 
} 
int main() 
{ 
    int arr[] = {12, 11, 40, 12, 5, 6, 5, 12, 11}; 
    int n = sizeof(arr) / sizeof(arr[0]); 
    printDuplicates(arr, n); 
    return 0; 
} 
