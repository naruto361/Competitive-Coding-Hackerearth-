// PRIMS ALGO
// USING PRIORITY QUEUE
#include<bits/stdc++.h>
using namespace std;
void primsalgo(vector<pair<int,int>> a[],vector<bool> &vis)
{
    priority_queue<pair<int,int> , vector<pair<int,int>> , greater<pair<int,int>>> pq;
    pq.push({0,1});
    long long cost=0;
    //int prev=1;
    while(!pq.empty())
    {
        int f=pq.top().first , s=pq.top().second;
        pq.pop();
        if(vis[s]) continue;
        vis[s]=1;
        cost+=f;
        //if(prev!=s) cout<<prev<<"->"<<s<<endl; // prints the path
        //prev=s;
        for(auto i:a[s])
        {
            if(!vis[i.second])
            pq.push(i);
        }
    }
    cout<<cost;
}
int main()
{
    int v,e;cin>>v>>e;
    vector<bool> vis(v+1,0);
    vector<pair<int,int>> a[v+1];
    while(e--)
    {
        int x,y,z;cin>>x>>y>>z;
        a[x].push_back({z,y});
        a[y].push_back({z,x});
    }
    primsalgo(a,vis);
    return 0;
}
