#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

#define pii pair<int,int>
#define pi pair<char,char>
#define F first
#define S second
#define pb push_back
#define pp pop_back

int c[505];

int main ()
{
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
    int n,a[105],t,id;
    string s;
    scanf("%d",&t);
    getline(cin,s);
    while(t--){
        memset(c,0,sizeof(c));
        getline(cin,s);
        id=1;
        istringstream ssin(s);
        while(ssin>>a[id]){
            id++;
        }
        int mx=1;
        for(int i=1;i<id;i++){
            for(int j=i+1;j<id;j++){
                mx=max(mx,__gcd(a[i],a[j]));
            }
        }
        printf("%d\n",mx);
    }
    return 0;
}


