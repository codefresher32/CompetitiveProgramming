#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,l,r;
    int a[100005]={0},b[100005]={0};
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
        b[i]=a[i];
    }
    sort(b,b+n);
    l=r=-1;
    for(int i=0,j=n-1;i<n;i++,j--)
    {
        if(a[i]!=b[i]&&l==-1)
            l=i;
        if(a[j]!=b[j]&&r==-1)
            r=j;
    }
    if(r==l)
    {
        printf("yes\n1 1\n");
        return 0;
    }
    for(int i=r,j=l;i>=l;i--,j++)
    {
        if(a[i]!=b[j])
        {
            cout<<"no\n";
            return 0;
        }
    }
    printf("yes\n%d %d\n",l+1,r+1);
    return 0;
}
