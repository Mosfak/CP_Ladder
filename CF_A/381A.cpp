#include<bits/stdc++.h>
#define ll long long
#define pb push_back


using namespace std;

int main(){

	ll n;
	cin>>n;
	deque<ll> q;
	for(ll i=0;i<n;i++){
		ll a;
		cin>>a;
		q.pb(a);

	}
	ll a=0,b=0;
	for(ll i=1;i<=n;i++){
		
		ll x,y;
		x=q.front();
		y=q.back();


		if(i%2!=0){
			if(x>y){
				a+=x;
				q.pop_front();
			}
			else{
				a+=y;
				q.pop_back();
			}
		}
		else{
			if(x>y){
				b+=x;
				q.pop_front();
			}
			else{
				b+=y;
				q.pop_back();
			}
		}
	}
	cout<<a<<" "<<b<<endl;
	return 0;
}