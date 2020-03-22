#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define pii pair<int,int>
#define F first
#define S second
#define pb push_back
#define pp pop_back



int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll a[4],sum=0,d;
    cin>>a[1]>>a[2]>>a[3]>>d;
    sort(a+1,a+1+3);
    for(int i=1;i<3;i++){
        for(int j=i+1;j<=3;j++){
            if(d>a[j]-a[i]){
                sum+=a[j]-a[i];
            }
        }
    }

    cout<<sum<<endl;
    return 0;
}


