#include<bits/stdc++.h>
#include <cmath>
using namespace std;

typedef long long ll;

#define pii pair<int,ll>
#define pi pair<char,char>
#define F first
#define S second
#define pb push_back
#define pp pop_back
#define mod 1000003
#define ex 1e-7





int main ()
{
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
    int T,n,a,x1,x2,y1,y2,sum;
    char s[100];
    scanf("%d",&T);
    while(T--){
        map<string,int>mp;
        map<int,string>pm;
        scanf("%d",&n);
        deque<int>dq1,dq2,dq3;
        vector<string>vs;

        //getchar();
        //getchar();
        gets(s);
        for(int i=1;i<=2*n;i++){
            gets(s);
            if(i<=n){
                vs.pb(s);
            }
            else{
                mp[s]=i-n,pm[i-n]=s;
                dq1.pb(i-n);
            }
        }
        for(auto x:vs){
            //cout<<mp[x]<<endl;
            dq2.pb(mp[x]);
        }
        int mn;
        for(int i=n;i>=0;i--){
            dq3=dq2;
            for(int j=i;j>=1;j--){
                auto it=find(dq3.begin(),dq3.end(),j);
                dq3.erase(it);
                dq3.push_front(j);
            }
//            for(int v:dq3){
//                cout<<v<<" ";
//            }
//            cout<<endl;
            if(dq3==dq1){
                mn=i;
            }
        }
        //cout<<endl;
        for(int i=mn;i>=1;i--){
            cout<<pm[i]<<endl;
        }

        printf("\n");
    }
    return 0;
}


