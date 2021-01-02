#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
		int n,k;
		cin>>n>>k;
		set<long long,greater<int>> s;
		for(int i=0;i<n;i++) 
		{	long long x;
			cin>>x;
			s.insert(x);
		}
		int j=0;
		long long ans=0;
		for(auto i=s.begin();i!=s.end() && j<k;i++)
		{
			ans+=*i;
			j++;
		}
		cout<<ans<<endl;
	}
}
