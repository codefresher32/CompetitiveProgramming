#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

#define pii pair<int,int>
#define pi pair<char,char>
#define F first
#define S second
#define pb push_back
#define pp pop_back

bool F(int n1,int n2)
{
    if(n1<10000) n1*=10;
    if(n2<10000) n2*=10;
    set<int>st;
    while(n1){
        st.insert(n1%10);
        st.insert(n2%10);
        n1/=10,n2/=10;
    }

    if(10==st.size()) return true;
    return false;
}

int main ()
{
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
    int n,t;
    bool f=0,fr;
    while(scanf("%d",&n),n){
        if(f) printf("\n");
        f=1,fr=0;
        for(int i=1000;i<=99999;i++){
            if(i*n<100000&&F(n*i,i)){
                fr=1;
                printf("%05d / %05d = %d\n",n*i,i,n);
            }
        }
        if(!fr){
            printf("There are no solutions for %d.\n",n);
        }
    }
    return 0;
}

