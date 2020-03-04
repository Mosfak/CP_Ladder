#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define loop(i,s,e) for(ll i=s;i<e;i++)

using namespace std;

int main(){
	//freopen("input.txt","r",stdin);
	ll n;
	cin>>n;
	ll ara[n+5];
	loop(i,0,n){
		cin>>ara[i];
	}
	ll mx=1;
	ll l=0;
	ll r=0;
	for(ll i=0;i<n;i++){
		for(ll j=i;j<n-1;j++){
			if(ara[j+1]<=ara[j]){
				l++;
			}
			else break;

		}
		for(ll j=i;j>0;j--){
			if(ara[j-1]<=ara[j])
				r++;
			else break;
		}
		if(l+r+1>mx)
			mx=l+r+1;
		l=0;
		r=0;
		//cout<<mx<<endl;
	}
	cout<<mx<<endl;
	return 0;
}