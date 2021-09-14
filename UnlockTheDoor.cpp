#include<bits/stdc++.h>
using namespace std;
int mod=1000000007;
int power(int n,int p)
{
    if(p==0) return 1;
    if(p%2==0)
    {
        int ret = power(n,p/2)%mod;
        return (1LL * (ret%mod)*(ret%mod))%mod;
    }
    else return (1LL * (n%mod)*(power(n,p-1)%mod))%mod;
}
int main()
{
	int fact[100001];
	fact[0]=1;
	for(int i=1;i<=100000;i++)
	{
		fact[i]=(1LL *i%mod * fact[i-1]%mod)%mod;
	}
	int t;
	cin>>t;
	while(t--)
	{
		int n,k;
		cin>>n>>k;
		int ans= fact[k];
		ans = (1LL * ans%mod * fact[n]%mod)%mod;
		int f= power(fact[k-n],mod-2);
		ans = (1LL * ans%mod * f%mod)%mod;
		int g= power(fact[n],mod-2);
		ans = (1LL * ans%mod * g%mod)%mod;
		cout<<ans<<'\n';
	}
	return 0;
}
