#include <bits/stdc++.h>
using namespace std;
#define int long long

int gr[100][100];
bool visit[100];
int n,e;

void dfs(int node)
{
    cout << node <<" ";
    visit[node]=true;
    for(int i=1; i<=n; ++i)
    {
        if(gr[node][i]==1 && visit[i]==0)
        {
            dfs(i);
        }
    }
}

int32_t main()
{

    cin >> n >> e;
    for(int i=0; i<e; ++i){
        int u,v;
        cin >> u >> v;
        gr[u][v]=1;
        gr[v][u]=1;
    }
    dfs(1);
}

