#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int n=100005;
bool status[100005];
vector<int>p;

void sieve()
{
    int limit=sqrt(n);
    for(int i=4;i<=n;i+=2){
        status[i]=1;
    }
    for(int i=3;i<=n;i+=2)
    {
        if(!status[i])
        {
            if(i<=limit)
            {
                for(int j=i*i;j<=n;j+=i*2)
                    status[j]=1;
            }
        }
    }

}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    sieve();
    int m,l;
    cin>>m;
    l=sqrt(m);
    if(m<=2){
        cout<<1<<endl;
        if(m==1){
            cout<<1<<endl;
        }
        else{
            cout<<"1 1\n";
        }
    }
    else{
        cout<<2<<endl;
        for(int i=2;i<=m+1;i++){
        if(!status[i]){
            cout<<"1 ";
        }
        else{
            cout<<"2 ";
        }
    }
    }

    return 0;
}

