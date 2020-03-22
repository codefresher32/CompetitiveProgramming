#include<bits/stdc++.h>
using namespace std;

int main()

{
    int a,b,t,x=1,ans;
    cin>>t;
    while(t--)
    {
        ans=0;
        cin>>a>>b;
        for(int i=a;i<=b;i+=2)
        {
            if(i%2==0)
            {
                i++;
            }
            ans+=i;
        }
        cout<<"Case "<<x<<": "<<ans<<endl;
        x++;
    }
    return 0;
}
