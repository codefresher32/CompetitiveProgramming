#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define pii pair<int,int>
#define F first
#define S second
#define pb push_back
#define pp pop_back

vector<stack<char>>v;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    char ch;
    int l,id=0;
    while(cin>>s){
        if(s=="end"){
            break;
        }
        l=s.size();
        for(int i=0;i<l;i++){
            bool f=0;
            if(v.size()!=0){
                for(int j=0;j<v.size();j++){
                    ch=v[j].top();
                    if(v[j].top()>=s[i]){
                        v[j].push(s[i]);
                        f=1;
                        break;
                    }
                }
            }
            if(v.size()==0||!f){
                stack<char>st;
                st.push(s[i]);
                v.pb(st);
            }
        }
        printf("Case %d: %d\n",++id,v.size());
        v.clear();
    }

    return 0;
}



