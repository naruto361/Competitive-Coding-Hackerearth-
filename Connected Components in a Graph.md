## [Connected Components In A Graph](https://www.hackerearth.com/problem/algorithm/connected-components-in-a-graph/)
```cpp
#include<bits/stdc++.h>
using namespace std;
void dfs(int x,vector<int> &vis,vector<vector<int>> v)
{
	vis[x]=1;
	for(int i=0;i<v[x].size();i++)
	{
		int k=v[x][i];
		if(vis[k]==0) dfs(k,vis,v);
	}
}
int main()
{
	int n,m;
	cin>>n>>m;
	vector<vector<int>> v(n+1);
	vector<int> vis(n+1,0);
	for(int i=0;i<m;i++)
	{
		int a,b;
		cin>>a>>b;
		v[a].push_back(b);
		v[b].push_back(a);
	}
	int cnt=0;
	for(int i=1;i<=n;i++)
	{
		if(vis[i]==0)
		{
			cnt++;dfs(i,vis,v);
		}
	}
	cout<<cnt;
	return 0;
}
```
