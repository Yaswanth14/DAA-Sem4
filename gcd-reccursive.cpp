#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b)
{
    if(a==0) return b;
    else if(b==0) return a;
    else gcd(b,a%b);
}

int main()
{
    int a,b;
    cout<<"Enter two values: ";
    cin>>a>>b;
    cout<<"GCD = "<<gcd(a,b);

    return 0;
}
