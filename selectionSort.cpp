#include <bits/stdc++.h>
using namespace std;

void selectionSort(int arr[], int n)
{
    int i,j,min,temp;
    for(i=0;i<n;i++)
    {
        min = i;
        for(j=i;j<n;j++)
        {
            if(arr[j]<arr[min])
            min = j;
        }
        temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
    }
}

int main()
{
    int arr[10],n;
    int i;
    printf("Enter number of elements: ");
    cin>>n;
    for(i=0;i<n;i++) cin>>arr[i];
    selectionSort(arr,n);
    for(i=0;i<n;i++) cout<<arr[i]<<" ";

    return 0;
}
