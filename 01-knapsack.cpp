/**  01_knapsack
**/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin >> n >> m;

    int profit[n];
    int weight[n];
    for(int i=0; i<n; i++)
    {
        cin >> profit[i];
    }
    for(int i=0; i<n; i++)
    {
        cin >> weight[i];
    }
    int v[n+1][m+1];
    for(int i=0; i<=n; i++)
    {
        for(int w=0; w<=m; ++w)
        {
            if(i==0 || w==0)
            {
                v[i][w]=0;
            }
            else if(weight[i] <= w)
            {
                v[i][w]=max(v[i-1][w], v[i-1][w-weight[i]]+profit[i]);
            }
            else
            {
                v[i][w]=v[i-1][w];
            }
        }
    }
    cout << v[n][m] << '\n';
    /* for(int i=0; i<=n; ++i)
    {
        for(int j=0; j<=m; ++j)
        {
           // cout << v[i][j] <<' ';
        }
        cout << '\n';
    } */
}
