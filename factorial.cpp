#include <bits/stdc++.h>
using namespace std;

int fact(int n)
{
    int fact=1,i;
    for(i=1;i<=n;i++) fact*=i;
    return fact;
}

int recursiveFact(int n)
{ 
    if(n==1) return 1;
    return n*recursiveFact(n-1);
}

int main()
{
    int n;
    cout<<"Enter a number: ";
    cin>>n;

    int ans = fact(n);
    cout<<"Facotial of "<<n<<"="<<ans<<"\n";

    int an = recursiveFact(n);
    cout<<"Facotial using recursion of "<<n<<"="<<an;

    return 0;
}



