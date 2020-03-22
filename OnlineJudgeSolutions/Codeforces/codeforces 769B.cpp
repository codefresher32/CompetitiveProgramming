 #include<bits/stdc++.h>
using namespace std;

typedef long long ll;

#define pii pair<int,int>

bool com(const pair<int,int>&A,const pair<int,int>&B)
{
    return A.first>B.first;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,a,k;
    pair<int,int>p[105];
    bool f[105]={0};
    vector<pii>v;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>a;
        p[i]={a,i};
    }
    int cnt=1;
    sort(p+2,p+1+n,com);
    for(int i=1;i<=n;i++){
        if(p[i].first>0){
            k=i+1;
           while(p[i].first!=0&&k<=n){
               if(!f[p[k].second]){
                    v.push_back({p[i].second,p[k].second});
                    f[p[k].second]=1;
                    cnt++;
                    p[i].first--;
               }
               k++;
           }
        }
        else if(p[i].first==0&&cnt<n||cnt==n){
           break;
        }
    }
    if(cnt!=n){
        cout<<"-1\n";
    }
    else{
        cout<<v.size()<<endl;
        for(auto o:v){
            cout<<o.first<<" "<<o.second<<endl;
        }
    }
    return 0;
}

