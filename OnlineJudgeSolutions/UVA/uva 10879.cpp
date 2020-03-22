#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,n,x=1,a[11];
    cin>>t;
    while(t--)
    {
        cin>>n;
        int j=1;
        for(int i=2;i<=n/2;i++)
        {
            if(n%i==0){
                a[j]=i;
                j++;
                if(j>2)
                    break;
            }
        }
        printf("Case #%d: %d = %d * %d = %d * %d\n",x,n,a[1],n/a[1],a[2],n/a[2]);
        x++;
    }
    return 0;
}

