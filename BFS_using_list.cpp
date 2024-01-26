#include <bits/stdc++.h>
using namespace std;
#define int long long

vector<int>gr[100];
bool visit[100];
int n,e;

void bfs(int node)
{
    cout << node <<" ";
    visit[node]=1;
    queue<int>q;
    q.push(node);
    while(!q.empty())
    {
        int top = q.front();
        q.pop();
        for(int i=0; i<gr[top].size(); ++i)
        {
            if(visit[gr[top][i]]==0)
            {
                cout << gr[top][i] <<" ";
                visit[gr[top][i]]=1;
                q.push(gr[top][i]);
            }
        }
    }
}

int32_t main()
{

    cin >> n >> e;
    for(int i=0; i<e; ++i)
    {
        int u,v;
        cin >> u >> v;
        gr[u].push_back(v);
        gr[v].push_back(u);
    }
    bfs(1);
}

