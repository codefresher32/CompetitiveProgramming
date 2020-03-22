#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

#define pii pair<int,int>
#define pi pair<char,char>
#define F first
#define S second
#define pb push_back
#define pp pop_back

bool f,pr;
int n,idd;
string nf,a,b,c;
vector<string>vc[105];
map<string,set<int>>mp[105];

void makeid(string s,int n,int r)
{
    string o="";
    int l=s.size();
    map<string,bool>pm;
    transform(s.begin(),s.end(),s.begin(),::tolower);
    for(int i=0;i<l;i++){
        if((s[i]>='a'&&s[i]<='z')||(s[i]>='A'&&s[i]<='Z')){
            o+=s[i];
        }
        else{
            if(!pm[o]&&o.size()){
                pm[o]=1,mp[n][o].insert(r);
            }
            o="";
        }
    }
    if(!pm[o]&&o.size()){
        pm[o]=1,mp[n][o].insert(r);
    }
    return ;
}


void print(int x,set<int>v)
{
    //cout<<f<<endl;
    if(f) cout<<b<<endl;
    f=1;
    for(auto j=v.begin();j!=v.end();j++){
        pr=1;
        cout<<vc[x][*j]<<endl;
    }
}

void no()
{
    cout<<nf<<"\n";
    return ;
}

void single(string s)
{
    for(int i=1;i<=n;i++){
        auto it=mp[i].find(s);
        if(it==mp[i].end()){
            continue;
        }
        print(i,it->S);
    }
    return ;
}

void NOT(string s)
{
    for(int i=1;i<=n;i++){
        auto it=mp[i].find(s);
        if(it!=mp[i].end()){
            continue;
        }
        if(f) cout<<b<<endl;
        f=1;
        for(auto x:vc[i]){
            pr=1;
            cout<<x<<endl;
        }
    }
    return ;
}

void AND(string s1,string s2)
{
    for(int i=1;i<=n;i++){
        set<int>x1;
        auto it1=mp[i].find(s1);
        auto it2=mp[i].find(s2);
        if(it1!=mp[i].end()&&it2!=mp[i].end()){
            for(auto x:it1->S){
                x1.insert(x);
            }
            for(auto x:it2->S){
                x1.insert(x);
            }
            print(i,x1);
        }
    }
    return ;
}

void OR(string s1,string s2)
{
    for(int i=1;i<=n;i++){
        set<int>x1;
        auto it1=mp[i].find(s1);
        auto it2=mp[i].find(s2);
        if(it1!=mp[i].end()){
            for(auto x:it1->S){
                x1.insert(x);
            }
        }
        if(it2!=mp[i].end()){
            for(auto x:it2->S){
                x1.insert(x);
            }
        }
        if(x1.size()){
            print(i,x1);
        }
    }
    return ;
}


int main ()
{
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
    int t,m,id,sid;
    string s,o,p;
    nf="Sorry, I found nothing.",a="**********",b="----------",c="==========";
    scanf("%d",&n);
    getchar();
    for(int i=1;i<=n;i++){
        id=0;
        while(getline(cin,s)){
            if(s==a) break;
            vc[i].pb(s);
            makeid(s,i,id);
            id++;
        }
    }
    scanf("%d",&m);
    int l,r;
    getchar();
    while(m--){
        getline(cin,s);
        vector<string>qu;
        transform(s.begin(),s.end(),s.begin(),::tolower);
        stringstream ssin(s);
        while(ssin>>o) qu.pb(o);
        int cnt=0;
        f=pr=0;
        if(qu.size()==1){
            single(qu[0]);
        }
        else if(qu.size()==2){
            NOT(qu[1]);
        }
        else{
            if(qu[1]=="and"){
                AND(qu[0],qu[2]);
            }
            else{
                OR(qu[0],qu[2]);
            }
        }
        if(!pr) no();
        cout<<c<<"\n";
    }
    return 0;
}


