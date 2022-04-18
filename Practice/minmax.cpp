// Maximum and minimum of an array using minimum number of comparisons
#include <bits/stdc++.h>
using namespace std;

struct Pair{
    int min;
    int max;
};

struct Pair getVal(int arr[], int n)
{
    struct Pair minmax;
    int i;

    if(n%2==0) // even so first 2 elements
    {
        if(arr[0]>arr[1])
        {
            minmax.max = arr[0];
            minmax.min = arr[1];
        }
        else
        {
            minmax.max = arr[1];
            minmax.min = arr[0];
        }
        i=2; // starting index of loop
    }

    else  // odd so only first element
    {
        minmax.max = arr[0];
        minmax.min = arr[0];
        i=1;  // starting index of loop
    }
    

    while (i < n - 1)
    {        
        if (arr[i] > arr[i + 1])        
        {
            if(arr[i] > minmax.max)    
                minmax.max = arr[i];
                 
            if(arr[i + 1] < minmax.min)        
                minmax.min = arr[i + 1];    
        }
        else       
        {
            if (arr[i + 1] > minmax.max)    
                minmax.max = arr[i + 1];
                 
            if (arr[i] < minmax.min)        
                minmax.min = arr[i];    
        }
         
        // Increment the index by 2 as
        // two elements are processed in loop
        i += 2;
    }  
    return minmax;
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

    Pair minmax = getVal(arr, n);
    cout<<"\n Minimum element: "<<minmax.min<<"\n";
    cout<<"\n Maximum element: "<<minmax.max<<"\n";

    return 0;

}





