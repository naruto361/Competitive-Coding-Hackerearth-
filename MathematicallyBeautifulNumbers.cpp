
#include <bits/stdc++.h>

using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
		long long n;int m;
		cin>>n>>m;
		int ans=1;
		while(n>0)
		{
			if(!(n%m==0 || (n-1)%m==0)) {
				ans=0;break;
			}
			if(n%m==0) n=n/m;
			else n=(n-1)/m;
		}
		if(ans==1) cout<<"YES\n";
		else cout<<"NO\n";
	}
}

