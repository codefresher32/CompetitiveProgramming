#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,q,d,s;
    char c;
    cin>>t;
    while(t--)
    {
        cin>>q;
        int yes[11]={0},no[11]={0};
        while(q--)
        {
            cin>>d>>s>>c;
            if(s==0&&c=='i')
                no[d]++;
            else if(s==1&&c=='c')
                yes[d]++;
        }

        int cnt=0;
        for(int i=1;i<10;i++)
        {
            for(int j=i+1;j<=10;j++)
            {
                cnt+=(no[i]*yes[j]);
            }
        }
        cout<<cnt<<endl;
    }
    return 0;
}
