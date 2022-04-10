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
    int pivot = a[h];
    int i=l-1,j=h;

    while(i<j)
    {
        do{
            i++;
        } while(a[i]<pivot);

        do
        {
            j--;
        } while (a[j]>pivot);

        if(i<j)
        {
            swap(&a[i],&a[j]);
        }     
    }

    swap(&a[h],&a[i]);

    return i;
}

void QuickSort(int *a,int l,int h)
{
    int p;
    if(l<h)
    {
        p = Partition(a,l,h);
        QuickSort(a,l,p-1);
        QuickSort(a,p+1,h);
    }
}

int main()
{
    int i,n,a[100];
    printf("Enter number of elements: ");
    scanf("%d",&n);
    printf("Enter elements: ");
    for(i=0;i<n;i++) scanf("%d",&a[i]);

    QuickSort(a,0,n-1);

    printf("After sorting :");
    for(i=0;i<n;i++) printf("%d ",a[i]);

    return 0;
}


