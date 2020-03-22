#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,d,a[105]={0},c=2,x,y;
    cin>>n>>d;
    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int i=0;i<n-1;i++)
    {
        x=abs(a[i]-a[i+1]);
        y=x/d;
        if(y>2){
            c+=2;
            continue;
        }
        else if(y==2&&x%d!=0)
            c+=2;
        else if(y==2&&x%d==0)
            c+=1;

    }
    cout<<c<<endl;
    return 0;
}
