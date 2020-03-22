#include<bits/stdc++.h>
#include <cmath>
using namespace std;

typedef long long ll;

#define pii pair<int,int>
#define pi pair<string,int>
#define F first
#define S second
#define pb push_back
#define pp pop_back
#define mod 1000003
#define ex 1e-7

bool isp(int n)
{
    if(n%2==0&&n!=2||n==1) return false;
    for(int i=3;i*i<=n;i+=2){
        if(n%i==0) return false;
    }
    return true;
}


int main ()
{
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
    int t,l,id1,id2,id=0;
    string s,o;
    scanf("%d",&t);
    while(t--){
        cin>>s;
        l=s.size();
        o="";
        sort(s.begin(),s.end());
        for(int i=0;i<l;){
            id1=lower_bound(s.begin(),s.end(),s[i])-s.begin();
            id2=upper_bound(s.begin(),s.end(),s[i])-s.begin();
            if(isp(id2-id1)) o+=s[i];
            i+=(id2-id1);
        }
        printf("Case %d: ",++id);
        (!o.size())?cout<<"empty\n":cout<<o<<"\n";
    }
    return 0;
}

