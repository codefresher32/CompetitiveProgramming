#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[6]={0},sum=0,cnt=0;
    for(int i=1;i<=5;i++)
    {
        cin>>a[i];
        if(a[i]==0)
            cnt++;
        sum+=a[i];
    }
    if(sum%5==0&&cnt!=5)
        cout<<sum/5<<endl;
    else
        cout<<-1<<endl;
    return 0;
}
