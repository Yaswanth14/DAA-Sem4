// https://www.geeksforgeeks.org/write-a-program-to-reverse-an-array-or-string/

#include <bits/stdc++.h>
using namespace std;

void reverse(int arr[], int n)
{
    int low =0, high = n-1;
    while(low<high)
    {
        int temp = arr[low];
        arr[low] = arr[high];
        arr[high] = temp;
        low++;
        high--;
    }
}

void rReverse(int arr[], int low, int high)
{
    if(low>=high) return;

    int temp = arr[low];
    arr[low] = arr[high];
    arr[high] = temp;

    rReverse(arr, low+1, high-1);
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

    reverse(arr, n);
    cout<<"After reversing: ";
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<"\n";

    rReverse(arr, 0, n-1);

    cout<<"After reversing recursively: ";
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<"\n";

    return 0;
}
