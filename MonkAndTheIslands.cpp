// monk and the islands HACKEREARTH
#include<bits/stdc++.h>
using namespace std;
#define pb push_back
vector<vector<int>> v(10001);
int vis[10001];
int size[10001];
int dist[10001];
void bfs(int node)
{
    queue<int> q;
    q.push(node);
    vis[node]=1;
    dist[node]=0;
    while(!q.empty())
    {
        int curr=q.front();
        q.pop();
        for(int child:v[curr])
        {
            if(vis[child]==0)
            {
                q.push(child);
                dist[child]=dist[curr]+1;
                vis[child]=1;
            }
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int vertex,edges;
        cin>>vertex>>edges;
        for(int i=1;i<=vertex;i++) v[i].clear(),dist[i]=0,vis[i]=0;
        for(int i=1;i<=edges;i++)
        {
            int x,y;cin>>x>>y;
            v[x].pb(y);
            v[y].pb(x);
        }
        bfs(1);
        cout<<dist[vertex]<<endl;
    }
}
