#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    ll a,l,n;
    int i=1;
    while(cin>>a>>l)
    {
        if(a<0&&l<0)
            return 0;
        n=a;
        int c=1;
        while(n!=1)
        {
            if(n%2==0)
                n/=2;
            else
                n=n*3+1;
            c++;
            if(n>l){
                c--;
                break;
            }
        }
        printf("Case %d: A = %lld, limit = %lld, number of terms = %d\n",i,a,l,c);
        i++;
    }
}
