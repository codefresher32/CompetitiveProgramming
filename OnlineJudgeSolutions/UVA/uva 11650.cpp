#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,h,m;
    cin>>t;
    while(t--)
    {
        scanf("%d:%d",&h,&m);
        h=23-h;
        m=60-m;
        if(m==60)
        {
            m=0;
            h++;
        }
        h=h>12?h-12:h;
        printf("%02d:%02d\n",h,m);
    }
    return 0;
}
