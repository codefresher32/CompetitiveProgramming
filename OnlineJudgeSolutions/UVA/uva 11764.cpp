#include<bits/stdc++.h>
using namespace std;


int main()

{
    int t,n,a[55]={0},h,l,x;
    cin>>t;
    int y=1;
    while(t--)
    {
        h=l=0;
        cin>>n;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        x=a[0];
        for(int i=1;i<n;i++)
        {
            if(x<a[i])
            {
                x=a[i];
                h++;
            }
            else if(x>a[i])
            {
                x=a[i];
                l++;
            }
        }
        printf("Case %d: %d %d\n",y,h,l);
        y++;
    }
    return 0;
}
