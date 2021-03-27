## [Monk and the Magical Candy Bags](https://www.hackerearth.com/practice/data-structures/trees/heapspriority-queues/practice-problems/algorithm/monk-and-the-magical-candy-bags/)
```cpp

#include <bits/stdc++.h>

using namespace std;
#define ll long long 
int main() {
	int t;
	cin>>t;
	while(t--)
	{
		int n,m;
		cin>>n>>m;
		ll ans=0;
		multiset<ll> s;
		for(int i=0;i<n;i++) {ll x;cin>>x;s.insert(x);}
		for(int i=0;i<m;i++)
		{
			auto k=s.end();
			k--;
			ans+=*k;
			s.insert(*k/2);
			s.erase(k);
		}
		cout<<ans<<endl;
	}
}

```
