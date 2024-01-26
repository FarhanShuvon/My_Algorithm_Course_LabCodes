#include <bits/stdc++.h>
using namespace std;
const int N = 1e4;
int node, edge;
int graph[N][N];
int visit[N];
stack<int>st;
void dfs(int source)
{
    visit[source] = 1;
    for (int i = 1; i <= node; ++i)
    {
        if (visit[i] == 0 && graph[source][i] == 1)
        {
            dfs(i);
            st.push(source);
        }
    }
}
int main()
{
    cin >> node >> edge;
    int u, v;
    for (int i = 1; i <= edge; ++i)
    {
        cin >> u >> v;
        graph[u][v] = 1;
        graph[v][u] = 1;
    }
    for (int i = 1; i <= edge; ++i)
    {
        if (visit[i] == 0)
            dfs(i);
    }
    while(!st.empty())
    {
        cout << st.top() <<" ";
        st.pop();
    }
}
