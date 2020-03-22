#include<bits/stdc++.h>
#include <cmath>
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


int main ()
{
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
    int t,n,id=0;
    scanf("%d",&t);
    vector<char>v,c;
    v.pb('A'),v.pb('U');
    v.pb('E'),v.pb('O');
    v.pb('I'),c.pb('J');
    c.pb('S'),c.pb('B');
    c.pb('K'),c.pb('T');
    c.pb('C'),c.pb('L');
    c.pb('D'),c.pb('M');
    c.pb('V'),c.pb('N');
    c.pb('W'),c.pb('F');
    c.pb('X');c.pb('G');
    c.pb('P'),c.pb('Y');
    c.pb('H'),c.pb('Q');
    c.pb('Z');c.pb('R');
    while(t--){
        scanf("%d",&n);
        string ans1,ans2;
        int l,r,c1,c2;
        l=r=c1=c2=0;
        for(int i=1;i<=n;i++){
            if(i&1){
               if(c1>=21){
                    l++,c1=0;
               }
               ans1+=v[l];
               c1++;
            }
            else{
                if(c2>=5){
                    r++,c2=0;
               }
               ans2+=c[r];
               c2++;
            }
        }

        sort(ans1.begin(),ans1.end());
        sort(ans2.begin(),ans2.end());
        l=r=0;
        printf("Case %d: ",++id);
        for(int i=1;i<=n;i++){
            if(i&1){
                printf("%c",ans1[l++]);
            }
            else{
                printf("%c",ans2[r++]);
            }
        }
        printf("\n");
    }

    return 0;
}

