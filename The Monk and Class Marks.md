## [The Monk and Class Marks](https://www.hackerearth.com/problem/algorithm/the-monk-and-class-marks/?fbclid=IwAR09BMLG-1NhqDlVQq0KIzSr8ZTgqrbJmdfnsXc7KnDiphgX5UmbFLoEYjE)
```cpp
#include<bits/stdc++.h>
using namespace std;
bool sortbysec(const pair<int,string> &a, 
              const pair<int,string> &b) 
{ 
	if(a.first==b.first) return a.second<b.second;
    return (a.first > b.first); 
}
int main()
{
	int t;
	cin>>t;
	vector<pair<int,string>> v;
	while(t--)
	{
		string s;int n;
		cin>>s>>n;
		v.push_back(make_pair(n,s));
	}
	sort(v.begin(),v.end(),sortbysec);
	for(auto i:v)
	{
		cout<<i.second<<" "<<i.first<<endl;
	}

}
```
