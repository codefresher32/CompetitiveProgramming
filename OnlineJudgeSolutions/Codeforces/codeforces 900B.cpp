#include<bits/stdc++.h>
using namespace std;

typedef long long ll;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a,b,c;
    cin>>a>>b>>c;
    int cnt=0,d,r;
    vector<int>v;
    bool f;
    while(v.size()<=b){
        f=0;
       while(a<b){
           a*=10;
            if(f){
                v.push_back(0);
            }
            f=1;
       }
       d=a/b;
       v.push_back(d);
       a=a%b;
       if(a==0){
            v.push_back(0);
            break;
       }
    }
    for(int i=0;i<v.size();i++){
        if(v[i]==c){
            cout<<i+1<<endl;
            return 0;
        }
    }
    cout<<-1<<endl;
    return 0;
}
