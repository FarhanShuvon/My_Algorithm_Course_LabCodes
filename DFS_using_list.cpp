#include <bits/stdc++.h>
using namespace std;
#define int long long

vector <int> gr[100];
bool visit[100];


void dfs(int node)
{
    cout << node <<" ";
    visit[node]=true;
    for(int i=0; i<gr[node].size(); ++i)
    {
        if(visit[gr[node][i]]==0)
        {
            dfs(gr[node][i]);
        }
    }
}

int32_t main()
{
    int n,e;
    cin >> n >> e;
    for(int i=0; i<e; ++i){
        int u,v;
        cin >> u >> v;
        gr[u].push_back(v);
        gr[v].push_back(u);
    }
    dfs(1);
}

