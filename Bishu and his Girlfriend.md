## [Bishu and his Girlfriend](https://www.hackerearth.com/practice/algorithms/graphs/depth-first-search/practice-problems/algorithm/bishu-and-his-girlfriend/)
```cpp
#include<bits/stdc++.h>
using namespace std;
void dfs(int node,int distance,vector<int> &vis,vector<vector<int>> v,
vector<int> dist)
{
	vis[node]=1;
	for(int i=0;i<v[node].size();i++)
	{
		int k=v[node][i];
		if(vis[k]==0)
		{
			dfs(k,dist[node]+1,vis,v,dist);
		}

	}
}
int main()
{
	int n;cin>>n;
	vector<vector<int>> v(n+1);
	vector<int> vis(n+1),dist(n+1);
	for(int i=0;i<n-1;i++)
	{
		int x,y;
		cin>>x>>y;
		v[x].push_back(y);
		v[y].push_back(x);
	}
	dfs(1,0,vis,v,dist);
	int q;
	cin>>q;
	int ans=n;
	int mini=INT_MAX;
	while(q--)
	{
		int x;
		cin>>x;
		if(dist[x]<=mini)
		{
			mini=dist[x];
			if(x<ans) ans=x;
		}
		
	}
	cout<<ans;
}
```
