// https://practice.geeksforgeeks.org/problems/union-of-two-arrays3538/1

#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
    //Function to return the count of number of elements in union of two arrays.
    int doUnion(int a[], int n, int b[], int m)  {
        //code here
        set <int> newSet;
        for(int i=0;i<n;i++)
        {
            newSet.insert(a[i]);
        }
        for(int i=0;i<m;i++)
        {
            newSet.insert(b[i]);
        }
        
        return newSet.size();
    }
};