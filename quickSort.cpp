#include <bits/stdc++.h>
using namespace std;

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int Partition(int *a, int l, int h)
{
    int pivot = a[l];
    int i=l,j=h;

    while(i<j)
    {
        do{
            i++;
        } while(a[i]<=pivot);

        do
        {
            j--;
        } while (a[j]>pivot);

        if(i<j)
        {
            swap(&a[i],&a[j]);
        }     
    }

    swap(&a[l],&a[j]);

    return j;
}

void QuickSort(int *a,int l,int h)
{
    int j;
    if(l<h)
    {
        j = Partition(a,l,h);
        QuickSort(a,l,j);
        QuickSort(a,j+1,h);
    }
}

int main()
{
    int i,n,a[100];
    printf("Enter number of elements: ");
    scanf("%d",&n);
    printf("Enter elements: ");
    for(i=0;i<n;i++) scanf("%d",&a[i]);

    QuickSort(a,0,n);

    printf("After sorting :");
    for(i=0;i<n;i++) printf("%d ",a[i]);

    return 0;
}





// int Partition(int arr[], int low, int high)
// {
//     int pivot = arr[high];
//     int i= low-1, j = high +1;
//     while(i<j)
//     {
//         do{
//             i++;
//         }while(arr[i]<pivot);
//         do{
//             j--;
//         }while(arr[j]>pivot);

//         swap(arr[i], arr[j]);
//     }
//     swap(arr[high], arr[i]);
// }

// int quickSort(int arr[], int low, int high)
// {
//     int p;
//     if(low<high)
//     {
//         p = Partition(arr, low, high);
//         quickSort(arr, low, p-1);
//         quickSort(arr, p, high);
//     }
// }

// int main()
// {
//     int arr[10],n;
//     int i;
//     printf("Enter number of elements: ");
//     cin>>n;
//     for(i=0;i<n;i++) cin>>arr[i];
//     quickSort(arr,0, n);
//     for(i=0;i<n;i++) cout<<arr[i]<<" ";

//     return 0;
// }
