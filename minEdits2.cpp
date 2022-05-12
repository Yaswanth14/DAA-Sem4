#include <bits/stdc++.h>
using namespace std;

int min(int a, int b, int c)
{
    a = a<b?a:b;
    return a<c?a:c;
}

int main()
{
    cout<<"Enter 2 strings: ";
    char a[10],b[10];
    int la, lb, i, j, k;

    cin>>a;
    cin>>b;
    la = strlen(a);
    lb = strlen(b);

    int c[la+1][lb+1];

    for(j=0;j<=la;j++) c[j][0] = j;
    for(j=0;j<=lb;j++) c[0][j] = j;

    for(i=1;i<=la;i++)
    {
        for(j=1;j<=lb;j++)
        {
            if(a[i-1] != b[j-1])
            {
                k = min(c[i-1][j], c[i][j-1], c[i-1][j-1]);
                c[i][j] = k+1;
            }
            else
            {
                c[i][j] = c[i-1][j-1];
            }
        }
    }

    for(i=0;i<=la;i++)
    {
        for(j=0;j<=lb;j++) cout<<c[i][j]<<" ";
        cout<<"\n";
    }
    cout<<c[la][lb];
}

