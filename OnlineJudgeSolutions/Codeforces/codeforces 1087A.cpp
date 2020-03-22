#include<bits/stdc++.h>
using namespace std;

typedef long long ll;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s,p,o;
    cin>>p;
    s=p[0];
    for(int i=1;i<p.size();i++){
        o=p[i];
        if(i&1){
            s+=p[i];
        }
        else{
            s.insert(0,o);
        }
    }
    cout<<s<<endl;
    return 0;
}

