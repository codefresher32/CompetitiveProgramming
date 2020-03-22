#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,p;
    cin>>n;
    string s;
    vector<pair<int,string>>v;
    for(int i=0;i<n;i++){
       cin>>p>>s;
       sort(s.begin(),s.end());
       v.push_back(make_pair(p,s));
    }
    int a=INT_MAX,b=INT_MAX,c=INT_MAX,ab=INT_MAX,ac=INT_MAX,bc=INT_MAX,abc=INT_MAX,cnt=0;
    for(int i=0;i<n;i++){
        if(v[i].second=="A"){
            a=min(a,v[i].first);
        }
        else if(v[i].second=="B"){
            b=min(b,v[i].first);
        }
        else if(v[i].second=="C"){
            c=min(c,v[i].first);
        }
        else if(v[i].second=="AB"){
            ab=min(ab,v[i].first);
        }
        else if(v[i].second=="AC"){
            ac=min(ac,v[i].first);
        }
        else if(v[i].second=="BC"){
            bc=min(bc,v[i].first);
        }
        else{
            abc=min(abc,v[i].first);
        }
    }
    int cost=INT_MAX;
    if(a!=INT_MAX&&b!=INT_MAX&&c!=INT_MAX){
        cnt=1;
        cost=min(cost,a+b+c);
    }
    if(abc!=INT_MAX){
        cnt=1;
        cost=min(cost,abc);
    }
    if(a!=INT_MAX&&bc!=INT_MAX){
        cnt=1;
        cost=min(cost,a+bc);
    }
    if(ac!=INT_MAX&&b!=INT_MAX){
        cnt=1;
        cost=min(cost,ac+b);
    }
    if(ab!=INT_MAX&&c!=INT_MAX){
        cnt=1;
        cost=min(cost,ab+c);
    }
    if(ab!=INT_MAX&&ac!=INT_MAX){
        cnt=1;
        cost=min(cost,ac+ab);
    }
    if(ab!=INT_MAX&&bc!=INT_MAX){
        cnt=1;
        cost=min(cost,ab+bc);
    }
    if(ac!=INT_MAX&&bc!=INT_MAX){
        cnt=1;
        cost=min(cost,ac+bc);
    }

    if(!cnt){
        cout<<-1<<endl;
    }
    else{
        cout<<cost<<endl;
    }
    return 0;
}
