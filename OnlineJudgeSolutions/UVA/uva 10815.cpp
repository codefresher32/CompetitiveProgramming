#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

#define pii pair<int,int>
#define pi pair<char,char>
#define F first
#define S second
#define pb push_back
#define pp pop_back
#define mod 1000003



int main ()
{
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
    string s,p,o;
    int l,x;
    set<string>st;
    while(getline(cin,s)){
        l=s.size();
        o="";
        transform(s.begin(),s.end(),s.begin(),::tolower);
        for(int i=0;i<l;i++){
            if(s[i]>='a'&&s[i]<='z'){
                o+=s[i];
            }
            else{
                x=o.size();
                if(x){
                    st.insert(o);
                    o="";
                }
            }
        }
        if(o.size()){
            st.insert(o);
        }
    }
    for(auto x:st){
        cout<<x<<endl;
    }
    return 0;
}


