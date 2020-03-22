#include<bits/stdc++.h>

using namespace std;

typedef long long ll;
#define pii pair<int,int>
#define pis pair<string,int>
#define F first
#define S second
#define pb push_back
#define pp pop_back


stack<int>sk;
vector<set<int>>vs;
map<set<int>,int>mp;


int ID(set<int>st)
{
    if(mp.find(st)!=mp.end()) return mp[st];
    vs.pb(st);
    return mp[st]=vs.size()-1;
}

void PUSH()
{
    set<int>st;
    sk.push(ID(st));
    return ;
}

void DUP()
{
    sk.push(sk.top());
    return ;
}

void ADD()
{
    set<int>st1,st2,st;
    //int st1,st2
    st1=vs[sk.top()],sk.pop();
    st2=vs[sk.top()],sk.pop();
    st2.insert(ID(st1));
    sk.push(ID(st2));
    return ;
}

void UNION()
{
    set<int>st,st1,st2;
    st1=vs[sk.top()],sk.pop();
    st2=vs[sk.top()],sk.pop();
    set_union(st1.begin(),st1.end(),st2.begin(),st2.end(),::inserter(st,st.begin()));
    sk.push(ID(st));
    return ;
}

void INTERSECT()
{
    set<int>st,st1,st2;
    st1=vs[sk.top()],sk.pop();
    st2=vs[sk.top()],sk.pop();
    set_intersection(st1.begin(),st1.end(),st2.begin(),st2.end(),::inserter(st,st.begin()));
    sk.push(ID(st));
    return ;
}


int main()
{
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
    int t,n,x;
    char s[10];
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        while(n--){
            scanf("%s",s);
            if(s[0]=='P') PUSH();
            else if(s[0]=='D') DUP();
            else if(s[0]=='A') ADD();
            else if(s[0]=='U') UNION();
            else INTERSECT();
            set<int>st;
            st=vs[sk.top()];
            x=st.size();
            printf("%d\n",x);
        }
        printf("***\n");
        while(!sk.empty()) sk.pop();
    }
    return 0;
}

