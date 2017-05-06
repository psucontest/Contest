#include <bits/stdc++.h>
using namespace std;

int n,a1,a2,a3,ans,tmp;

int main(){
	cin >> n;
	for(int i=0;i<n;i++){
		cin >> tmp;
		if (tmp==1) a1++;
		if (tmp==2) a2++;
		if (tmp==3) a3++;
		if (tmp==4) ans++;
	}

	ans += a3;
	if (a1>a3) a1 -= a3;
	else a1 = 0;
	//tmp = (a1+a2*2)*1.0/4>(a1+a2*2)/4 ? ((a1+a2*2)/4+1) : (a1+a2*2)/4;
	tmp = a1+a2*2;
	if(tmp % 4 > 0) ans += tmp/4+1;
	else ans += tmp/4;
	cout << ans;

	return 0;
}
