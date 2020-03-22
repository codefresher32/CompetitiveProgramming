#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll a,b,l=0,x,y,q,sm;
    cin>>a>>b;

    vector<ll>a1,b1;
    ll lo=1,hi=1e7,mid=0;
    int c[100006]={0};
    while(lo<=hi){
       mid=(lo+hi)/2;
       sm=mid*(mid+1)/2;
       if(sm==a+b){
        l=mid;
        break;
       }
       if(sm>a+b){
        hi=mid-1;
       }
       else{
        l=mid;
        lo=mid+1;
       }
    }
    if(a<=b){
        if(a<=l&&a!=0){
            a1.push_back(a);
            c[a]++;
        }
        else if(a!=0){
            a1.push_back(l);
            c[l]++;
            x=l;
            a-=l;
            int i=l;
            while(a){
               if(!c[i]&&a-i>=0){
                a1.push_back(i);
                c[i]=i;
                a-=i;
               }
               i--;
            }
        }
        if(b!=0){
        for(int i=1;i<=l;i++){
            if(!c[i]){
                b1.push_back(i);
            }
        }
        }
    }
    else{
        if(b<=l&&b!=0){
            b1.push_back(b);
            c[b]++;
        }
        else if(b!=0){
            b1.push_back(l);
            c[l]++;
            x=l;
            b-=l;
            int i=l;
            while(b){
               if(!c[i]&&b-i>=0){
                b1.push_back(i);
                c[i]=i;
                b-=i;
               }
               i--;
            }
        }
        if(a!=0){
        for(int i=1;i<=l;i++){
            if(!c[i]){
                a1.push_back(i);
            }
        }
        }
    }
    cout<<a1.size()<<endl;
    for(int i=0;i<a1.size();i++){
        cout<<a1[i]<<" ";
    }
    cout<<endl;
    cout<<b1.size()<<endl;
    for(int i=0;i<b1.size();i++){
        cout<<b1[i]<<" ";
    }
    cout<<endl;
}

