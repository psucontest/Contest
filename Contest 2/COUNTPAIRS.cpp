#include<bits/stdc++.h>
using namespace std;

long long n,k,d,dem, so[1000005];

int main(){
	ios::sync_with_stdio(0);
	cin>>n>>k;
	for(long i=1;i<=n;++i){
		cin>>d;
		d=d%k;
		dem+=so[k-d];
		++so[d];
	}
	cout<<dem;
}
