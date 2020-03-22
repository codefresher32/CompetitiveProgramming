#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s,o;
    int n,p;
    cin>>n>>p>>s;
    o=s;
    reverse(o.begin(),o.end());
    if(o==s){
        cout<<0<<endl;
        return 0;
    }
    if(p>n/2){
        p=n-p+1;
        s=o;
    }
    p--;
    int j=p,cost=0,x,y,r=j,m1,m2;
    for(int i=j;i<n/2;i++){
        m1=s[i]-'a';
        m2=s[n-i-1]-'a';
        x=abs(m1-m2);
        if(m1>m2){
            y=(26-m1)+m2;
        }
        else{
            y=(26-m2)+m1;
        }
       if(s[i]!=s[n-i-1]){
            cost+=abs(i-r)+min(x,y);
            r=i;
       }
    }
    for(int i=j-1;i>=0;i--){
        m1=s[i]-'a';
        m2=s[n-i-1]-'a';
        x=abs(m1-m2);
        if(m1>m2){
            y=(26-m1)+m2;
        }
        else{
            y=(26-m2)+m1;
        }
       if(s[i]!=s[n-i-1]){
            cost+=abs(i-r)+min(x,y);
            r=i;
       }
    }
    cout<<cost<<endl;
    return 0;
}
