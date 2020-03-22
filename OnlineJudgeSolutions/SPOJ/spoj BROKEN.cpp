#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

#define pii pair<int,int>
#define pi pair<string,int>
#define F first
#define S second
#define pb push_back
#define pp pop_back
#define mod 1000003
#define ex 1e-7

char s[1000005];

int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,li;
    //string s;
    while(scanf("%d",&n),n){
        getchar();
        gets(s);
        li=strlen(s);
        int l,r,cnt,c1,mx;
        map<char,int>c;
        cnt=l=r=c1=0;
        mx=0;
        while(l<=r&&l<li){
            while(r<li){
                //cout<<c[s[r]]<<endl;
                if(!c[s[r]]){
                    if(cnt==n) break;
                    cnt++;
                }

                c1++,c[s[r]]++,r++;
                mx=max(mx,c1);
            }
            c[s[l]]--,c1--;
            if(!c[s[l]]) cnt--;
            l++;
        }
        cout<<mx<<endl;
    }
    return 0;
}


