#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

struct data
{
    int c,p,gn;
}a[1005];

struct mp
{
    int ca,id;
}m[1005];

bool c(data A,data B)
{
   return A.p>B.p;
}

bool cp(mp A,mp B)
{
    return A.ca<B.ca;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,k,x,y;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i].c>>a[i].p;
        a[i].gn=i+1;
    }
    cin>>k;
    vector<pair<int,int>>ans;
    for(int i=0;i<k;i++){
        cin>>m[i].ca;
        m[i].id=i+1;
    }
    sort(a,a+n,c);
    sort(m,m+k,cp);

    int po,sum=0,ck[1005];
    memset(ck,-1,sizeof(ck));
    for(int i=0;i<n;i++){
       for(int j=0;j<k;j++){
            if(ck[j]==-1&&a[i].c<=m[j].ca){
                sum+=a[i].p;
                ans.push_back(make_pair(a[i].gn,m[j].id));
                ck[j]=1;
                break;
            }
       }
    }
    cout<<ans.size()<<" "<<sum<<endl;
    for(int i=0;i<ans.size();i++){
        cout<<ans[i].first<<" "<<ans[i].second<<endl;
    }
    return 0;
}
