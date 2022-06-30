#include <bits/stdc++.h>
using namespace std;

int graph[100], t=-1;

void push(int m)
{
    t++;
    graph[t] = m;
}
void pop()
{
    t--;
}

int main()
{
    int n, e, i, j, k, x ,y , z;
    cout<<"Enter number of nodes: ";
    cin>>n;
    int a[n][n];
    cout<<"Enter values in adjacency matrix: \n";
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            printf("Enter value at [%d][%d]: ",i,j);
            cin>>k;
            a[i][j] = k;
        }
    }

    int vis[n];
    for(i=0; i<n; i++) vis[i] = 0;
    x = 0;

    push(0); vis[0] = 1;
    x++;

    while(t>=0)
    {
        for(j=0; j<n; j++)
        {
            if(a[graph[t]][j]&&!vis[j])
            {
                push(j);
                vis[j] = 1;
                j = -1;
                x++;
            }
        }
        if(j==n) pop();
    }

    if(x<n) cout<<"Graph is disconnected.\nNumber of connected nodes = "<<x;
    else cout<<"Graph is connected.\nNumber of connected nodes = "<<x;

}
