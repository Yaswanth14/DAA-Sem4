// https://www.geeksforgeeks.org/move-negative-numbers-beginning-positive-end-constant-extra-space/

#include <bits/stdc++.h>
using namespace std;

void rearrange(int arr[], int n)
{
    int low =0, high = n-1;
    while(low<high)
    {
        if(arr[low]<0) low++;
        else if(arr[high]>0) high--;
        else{
            swap(arr[low], arr[high]);
            low++;
            high--;
        }
    }
}


int main()
{
    int arr[20],n,i;
    cout<<"Enter number of elements: ";
    cin>>n;
    cout<<"Enter elements: ";
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    rearrange(arr, n);

    cout<<"After rearranging: ";
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}

