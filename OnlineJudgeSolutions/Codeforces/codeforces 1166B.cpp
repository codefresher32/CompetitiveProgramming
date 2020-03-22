#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

#define pii pair<int,int>
#define pi pair<char,char>
#define F first
#define S second
#define pb push_back
#define pp pop_back

char ar[2005][2005];

int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int k,n,m,x,y;
    cin>>k;
    n=m=0;
    for(int i=5;i<=k;i++){
        x=i;
        if(k%x==0&&k/x>4){
            n=i;
            m=k/n;
        }
    }
    if(n*m!=k){
        cout<<-1<<endl;
        return 0;
    }

    string s="xaeiou";
    int st=1;
    k=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=5;j++){
            ar[i][j]=s[k];
            k++;
            if(k>5){
               k=1;
            }
        }
        st++;
        if(st>5){
            st=1;
        }
        k=st;
    }
    for(int j=6;j<=m;j++){
        st=1;
        for(int i=1;i<=n;i++){
            ar[i][j]=s[st];
            st++;
            if(st>5){
                st=1;
            }
        }
    }
    //cout<<n<<m<<endl;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cout<<ar[i][j];
        }
        //cout<<endl;
    }
    return 0;
}

