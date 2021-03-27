## [Monk and his Friends](https://www.hackerearth.com/practice/data-structures/trees/binary-search-tree/practice-problems/algorithm/monk-and-his-friends/?fbclid=IwAR1n1FJUNpWIeq7dHY-HytoqqE1nbK9gD4jMjI2UWGTPE8GF4kHROCb7ouA)
```cpp
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin>>t;
	while(t--)
	{
		int n,m;
		cin>>n>>m;
		unordered_set<ll> s;
		while(n--)
		{
			ll x;
			cin>>x;
			s.insert(x);
		}
		while(m--)
		{
			ll x;cin>>x;
			if(s.find(x)==s.end()) {cout<<"NO\n";}
			else {cout<<"YES\n";}
			s.insert(x);
		}
	}
}


```
