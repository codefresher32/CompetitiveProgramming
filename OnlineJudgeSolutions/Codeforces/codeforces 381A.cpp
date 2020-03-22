#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,a[1001],x=0,y=0;
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>a[i];
    int l=0,r=n-1;
    for(int i=0;i<n;i++)
    {
        if(i%2==0)
        {
            if(a[l]>a[r])
            {
                x+=a[l];
                l++;
            }
            else
            {
                x+=a[r];
                r--;
            }
        }

        else if(i&1)
        {
            if(a[l]>a[r])
            {
                y+=a[l];
                l++;
            }
            else
            {
                y+=a[r];
                r--;
            }
        }
    }
    cout<<x<<" "<<y<<endl;
    return 0;
}
