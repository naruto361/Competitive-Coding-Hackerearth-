## [Monk's Birthday Party](https://www.hackerearth.com/problem/algorithm/monks-birthday-party/?fbclid=IwAR3COuGp9LqoHKWOnfS-duVdKrF0Vx5shbCbGeiWqSgkdoA2z9926vNy5Ew)
```cpp
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		set<string> st;
		while(n--)
		{
			string s;
			cin>>s;
			st.insert(s);
		}
		for(auto i:st) cout<<i<<endl;
	}
}
```
