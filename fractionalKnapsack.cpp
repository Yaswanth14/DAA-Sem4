#include<bits/stdc++.h>
using namespace std;

struct Item
{
    int value;
    int weight;
};

double calc(int w, Item *arr, int n)
{
    int weight = 0;
    double value = 0.0;

    for(int i=0;i<n; i++)
    {
        if(weight + arr[i].weight <= w)
        {
            weight += arr[i].weight;
            value += arr[i].value;
        }
        else
        {
            int left = w-weight;
            value += (arr[i].value / (double)arr[i].weight)*(double)left;
            break;
        }
    }

    return value;
}

//////////////////////////////////////////////////////////////////


bool comp(Item a, Item b)
{
    double r1 = (double)a.value / (double)a.weight;
    double r2 = (double)b.value / (double)b.weight;
    return r1>r2;
}

bool pro(Item a, Item b)
{
    return a.value>b.value;
}

bool wei(Item a, Item b)
{
    return a.weight < b.weight;
}


/////////////////////////////////////////////////////////////////

double maxProfit(int w, Item arr[], int n)
{
    sort(arr, arr+n, pro);
    double ans = calc(w, arr, n);
    return ans;
}

double maxProByWei(int w, Item arr[], int n)
{
    sort(arr, arr+n, comp);
    double ans = calc(w, arr, n);
    return ans;
}

double minWeight(int w, Item arr[], int n)
{
    sort(arr, arr+n, wei);
    double ans = calc(w, arr, n);
    return ans;
}

/////////////////////////////////////////////////////////////////////

int main()
{
    int n, weight;
    cout<<"Enter number of items: ";
    cin>>n;
    cout<<"Enter capacity of sack: ";
    cin>>weight;
    int v, w;
    Item arr[n];
    for(int i=0;i<n;i++)
    {
        cout<<"Enter value of item "<<i+1<<" :";
        cin>>v;
        cout<<"Enter weight of item "<<i+1<<" :";
        cin>>w;
        arr[i] = {v, w};
    } 
    cout<<"Maximum Profit is = "<<maxProfit(weight, arr, n)<<"\n";
    cout<<"Maximum Weight is = "<<minWeight(weight, arr, n)<<"\n";
    cout<<"This maximum profit per unit weight is = "<<maxProByWei(weight, arr, n)<<"\n";
    

    return 0;
}
