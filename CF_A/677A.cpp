#include<bits/stdc++.h>
#define ll long long
#define pb push_back

using namespace std;

int main(){
	//freopen("input.txt","r",stdin);
	ll n,h;
	cin>>n>>h;
	ll c=0;
	for(ll i=0;i<n;i++){
		ll a;
		cin>>a;
		if(a>h)
			c++;
	}
	ll sum=0;
	sum+=n+c;
	cout<<sum<<endl;
	return 0;
	
}
