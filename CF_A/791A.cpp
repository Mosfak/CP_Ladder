#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define loop(i,s,e) for(ll i=s;i<e;i++)

using namespace std;


int main(){

	ll a,b;
	cin>>a>>b;
	ll sum=0;
	ll i=1;
	while(1){
		a*=3;
		b*=2;
		if(a>b)
			break;
		else
			i++;
	}
	cout<<i<<endl;
	return 0;
}