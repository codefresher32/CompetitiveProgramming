#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define pii pair<int,int>
#define F first
#define S second
#define pb push_back
#define pp pop_back

bool vis[50];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    string s1,s2,o,p;
    int l1,l2;
    while(n--){
        cin>>s1>>s2;
        l1=s1.size();
        l2=s2.size();
        int i,j;
        o=s1,p=s2;
        o.erase(unique(o.begin(),o.end()),o.end());
        p.erase(unique(p.begin(),p.end()),p.end());

        if(s2.size()<s1.size()||o!=p){
            cout<<"NO\n";
            continue;
        }
        char ch='0';
        for(i=0,j=0;j<s2.size();j++){
            if(s2[j]==s1[i]){
                ch=s1[i];
                i++;
            }
            else if(ch!=s2[j]){
                break;
            }
        }
        if(i==s1.size()){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
    }

    return 0;
}

