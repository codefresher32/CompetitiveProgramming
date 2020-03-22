 #include<bits/stdc++.h>
using namespace std;

typedef long long ll;




int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n,k,m,a[100005]={0};
    cin>>n>>k>>m;
    ll sum=0,s1=0;
    for(int i=1;i<=n;i++){
        cin>>a[i];
        s1+=a[i];
    }
    sort(a+1,a+1+n);
    double mx=s1,mx1;
    mx+=min(m,n*k);
    mx=(double)(mx*1.00)/(n*1.00);
    for(int i=1;i<=min(n-1,m);i++){
        s1-=a[i];
        sum=s1+min(m-i,(n-i)*k);
        mx1=(double)(sum*1.00)/((n-i)*1.00);
        mx=max(mx1,mx);
    }

    cout<<fixed<<setprecision(15)<<mx<<endl;
    return 0;
}

