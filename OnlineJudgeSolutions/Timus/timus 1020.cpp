#include<bits/stdc++.h>

using namespace std;

typedef long long ll;
#define pii pair<int,int>
#define pis pair<string,int>
#define F first
#define S second
#define pb push_back
#define pp pop_back

const double pi=acos(-1);



int main()
{
    int n;
    double x[105],y[105],r,l;
    cin>>n>>r;
    for(int i=1;i<=n;i++){
        cin>>x[i]>>y[i];
    }
    l=0;
    int p1,p2;
    for(int i=1;i<=n;i++){
        p1=i,p2=(i+1)%(n+1);
        if(!p2) p2++;
        l+=sqrt(abs(x[p1]-x[p2])*abs(x[p1]-x[p2])+abs(y[p1]-y[p2])*abs(y[p1]-y[p2]));
    }
    l+=(2.0*pi*r);
    cout<<fixed<<setprecision(2)<<l<<endl;
    return 0;
}



