#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,a,x[3],i=0;
    cin>>t;
    while(t--)
    {
        int sum=0;
        for(int i=0;i<4;i++)
        {
            cin>>a;
            sum+=a;
        }
        for(int i=0;i<3;i++)
            cin>>x[i];
        sort(x,x+3);
        sum+=(x[2]+x[1])/2;
        if(sum>=90)
            printf("Case %d: A\n",++i);
        else if(sum>=80&&sum<90)
            printf("Case %d: B\n",++i);
        else if(sum>=70&&sum<80)
            printf("Case %d: C\n",++i);
        else if(sum>=60&&sum<70)
            printf("Case %d: D\n",++i);
        else if(sum<60)
            printf("Case %d: F\n",++i);
    }
    return 0;
}
