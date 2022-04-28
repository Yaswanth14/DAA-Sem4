#include <bits/stdc++.h>
using namespace std;
int cnt=0;
int gcd(int a, int b)
{
    if(a==0) return b;
    else if(b==0) return a;
    else{
        cnt++;
        gcd(b,a%b);
    }
}

int main()
{
    int a,b;
    cout<<"Enter two values: ";
    cin>>a>>b;
    cout<<"GCD = "<<gcd(a,b)<<"\n";
    cout<<"Number of steps = "<<cnt;
    return 0;
}
