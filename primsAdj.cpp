#include <bits/stdc++.h>
using namespace std;

struct edge{
    int a,b,c;
};
bool comp(edge a, edge b)
{
    return a.c<b.c;
}

int main()
{
    int n,i,j,k,x,y,z,t;
    cout<<"Enter number of nodes: ";
    cin>>n;

    int vis[n];
    for(i=0; i<n; i++) vis[i] = 0;
    int a[n][n];
    cout<<"Enter weights in adjacency matrix: \n";
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            printf("Enter value at [%d][%d]: ",i,j);
            cin>>x;
            a[i][j] = x;
        }
    }
    vector<edge> c;
    struct edge e;
    vis[0] = 1;
    t = 0, x = 0;

    cout<<"Minimal spanning tree obtained by Prims algo is: ";
    while(t<n-1)
    {
        for(i=0; i<n; i++)
        {
            if(a[x][i]&&!vis[i])
            {
                e.a = x;//source
                e.b = i;//destination
                e.c = a[x][i];//adjacency matrix with weights
                c.push_back(e);
            }
        }
        sort(c.begin(), c.end(), comp);
        t++;
        x = c[0].b;//destination of min 
        vis[x] = 1;
        cout<<c[0].a<<"->"<<c[0].b<<"\n";
        c.erase(c.begin());

    }
}
