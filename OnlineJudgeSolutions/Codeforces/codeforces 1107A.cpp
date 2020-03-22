#include<bits/stdc++.h>
using namespace std;

typedef long long ll;



int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int q,n,x,y,a,b;
    string s;
    cin>>q;
    while(q--){
        cin>>n>>s;
        x=0;
        vector<int>v;
        bool f=0;
        for(int i=0;i<n;i++){
            y=s[i]-'0';
            if(y>x){
                f=1;
                v.push_back(y);
                x=y;
            }
            else{
                f=0;
                x=x*10+y;
            }
        }
        if(!f){
            cout<<"NO\n";
        }
        else{
            cout<<"YES\n"<<v.size()<<endl;
            for(int i=0;i<v.size();i++){
                cout<<v[i]<<" ";
            }
            cout<<endl;
        }

    }
    return 0;
}


