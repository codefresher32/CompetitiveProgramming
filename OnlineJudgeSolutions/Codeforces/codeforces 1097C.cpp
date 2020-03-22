#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int l[500005],r[500005];


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    string s;
    stack<char>st;
    cout<<(1>>5)<<endl;
    //stack<char>fi;
    cin>>n;
    while(n--){
        cin>>s;
        for(int i=0;i<s.size();i++){
            if(s[i]=='('){
                st.push(s[i]);
            }
            else{
                if(!st.empty()){
                    if(st.top()=='('){
                        st.pop();
                    }
                    else{
                       st.push(s[i]);
                    }
                }
                else{
                    st.push(s[i]);
                }
            }
        }
        int rr=0,ll=0;
        if(st.size()==0){
            l[0]++;
        }
        else{
            while(!st.empty()){
                if(st.top()=='('){
                    ll++;
                }
                else{
                    rr++;
                }
                st.pop();
            }
            if(ll==0||rr==0){
                if(ll==0){
                    r[rr]++;
                }
                else{
                    l[ll]++;
                }
            }
            //cout<<ll<<endl<<rr<<endl;
        }
    }
    int cnt=0;
    cnt+=l[0]/2;
    for(int i=1;i<=5e5;i++){
        cnt+=min(l[i],r[i]);
    }
    cout<<cnt<<endl;
    return 0;
}

