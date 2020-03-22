#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define pii pair<char,int>
#define F first
#define S second
#define pb push_back



int main()
{
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
    int n,m,l,t;
    string s;
    char ch;
    scanf("%d",&t);
    for(int j=1;j<=t;j++){
        cin>>s;
        l=s.size();
        stack<char>q;
        q.push('0');
        map<char,int>mp;
        for(int i=0;i<l;i++){
            ch=q.top();
            if(s[i]==ch){
                s.erase(s.begin()+(i-1),s.begin()+i+1);
                i-=2;
                l-=2;
                q.pop();
                ch=q.top();
                if(ch!='0'&&i+2!=l){
                    mp[ch]++;
                }
            }
            else{
                mp[s[i]]++;
                q.push(s[i]);
            }
        }
        printf("Case %d\n",j);
        for(auto x:mp){
            printf("%c = %d\n",x.F,x.S);
        }

    }
    return 0;
}


