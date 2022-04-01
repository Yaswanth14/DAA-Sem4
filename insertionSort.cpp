#include <bits/stdc++.h>
using namespace std;

 void insertionSort(int arr[], int n)
 {
     int i,temp,j;
     for(i=1;i<n;i++)
     {
         j = i-1;
         temp = arr[i];

         while(temp<arr[j]&&j>=0)
         {
             arr[j+1] = arr[j];
             j--;
         }
         arr[j+1] = temp;
     }
 }

 int main()
{
    int arr[10],n;
    int i;
    printf("Enter number of elements: ");
    cin>>n;
    for(i=0;i<n;i++) cin>>arr[i];
    insertionSort(arr,n);
    for(i=0;i<n;i++) cout<<arr[i]<<" ";

    return 0;
}
