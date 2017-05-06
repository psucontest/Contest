#include<bits/stdc++.h>
using namespace std;

const int nmax = 14;

int n,x[nmax],y[nmax],r[nmax];

int main(){
    ios::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);

    cin >> n;
    double a,b,c;
    for(int i=1;i<=n;i++){
        cin >> a >> b >> c;
        // do a,b,c là kiểu double khác kiểu với x[i],y[i],r[i]
        // vì vây ta phải ép kiểu của nó cho trùng với x,y,r
        x[i] = (int)(a*1000);
        y[i] = (int)(b*1000);
        r[i] = (int)(c*1000);
    }

    int res = 0;
    for(int i=0;i<=1000;i++){
        for(int j=0;j<=1000;j++){
            for(int k=1;k<=n;k++){
                int tmp = (i - x[k])*(i - x[k]) + (j - y[k])*(j - y[k]);
                if(tmp <= r[k]*r[k]) {res++;break;}
            }
        }
    }

    cout << res*1./10000;
}
