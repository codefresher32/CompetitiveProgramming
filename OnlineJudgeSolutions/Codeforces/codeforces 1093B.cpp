#include<bits/stdc++.h>
using namespace std;

typedef long long ll;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    string s,o,p;
    cin>>t;
    while(t--){
        cin>>s;
        o=s;
        sort(o.begin(),o.end());
        o.erase(unique(o.begin(),o.end()),o.end());

        p=s;
        reverse(p.begin(),p.end());
        if(o.size()==1){
            cout<<-1<<endl;
        }
        else if(s!=p){
            cout<<s<<endl;
        }
        else{
            sort(s.begin(),s.end());
            cout<<s<<endl;
        }
    }
    return 0;
}
