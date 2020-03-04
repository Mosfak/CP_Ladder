#include<bits/stdc++.h>
#define ll long long
#define pb push_back

using namespace std;

int main(){

	ll n;
	cin>>n;
	vector<ll> vec;
	for(ll i=0;i<n;i++){
		ll a;
		cin>>a;
		vec.pb(a);
	}
	sort(vec.begin(),vec.end());
	for(auto it=vec.begin();it!=vec.end();it++)
		cout<<*it<<" ";
	cout<<endl;
	return 0;
}