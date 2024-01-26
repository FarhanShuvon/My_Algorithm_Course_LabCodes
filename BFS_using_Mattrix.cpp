#include<bits/stdc++.h>
using namespace std;
int visit[10001];
int graph [10001][10001];
int n;
void bfs(int start)
{
    visit[start]=1;
    cout<<start<<" ";
    queue<int>Q;//stl queue (ans a add)
    Q.push(start);//queue the push

    while(!Q.empty())
    {
        //first work after in pop
        int x=Q.front();//delete

        Q.pop();

        for(int j=1; j<=n; j++)
        {
            if(graph[x][j]!=0 && visit[j]==0)
            {
                visit[j]=1;
                cout<<j<<" ";
                Q.push(j);
            }
        }
    }
}
int main()
{
    int e;
    cin>>n>>e;
    int u,v;
    for(int i=1; i<=e; i++)
    {
        cin>>u>>v;
        graph[u][v]=1;
        graph[v][u]=1;
    }

    bfs(2);


    return 0;
}
