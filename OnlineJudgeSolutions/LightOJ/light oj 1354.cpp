#include<iostream>
#include<string>
#include<bits/stdc++.h>

using namespace std;

typedef long long ll;
#define pb push_back
#define pp pop_back


int F(string s)
{
    int a=0,p=1;
    for(int i=s.size()-1;i>=0;i--){
        if(s[i]=='1') a+=p;
        p*=2;
    }
    return a;
}


int main()
{
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
    string s1,s2;
    int t,id=0;
    scanf("%d",&t);
    while(t--){
        cin>>s1>>s2;
        string o=".",a,b,c,d,e,f,g,h;
        size_t f1;
        f1=s2.find(o);
        a=s2.substr(0,f1);
        s2=s2.substr(f1+1);
        f1=s2.find(o),b=s2.substr(0,f1);
        s2=s2.substr(f1+1);
        f1=s2.find(o),c=s2.substr(0,f1);
        d=s2.substr(f1+1);

        f1=s1.find(o);
        e=s1.substr(0,f1);
        s1=s1.substr(f1+1);
        f1=s1.find(o),f=s1.substr(0,f1);
        s1=s1.substr(f1+1);
        f1=s1.find(o),g=s1.substr(0,f1);
        h=s1.substr(f1+1);
        printf("Case %d: ",++id);
        if(F(a)==atoi(e.c_str())&&F(b)==atoi(f.c_str())&&F(c)==atoi(g.c_str())&&F(d)==atoi(h.c_str())){
            printf("Yes\n");
        }
        else{
            printf("No\n");
        }
    }
    return 0;
}
