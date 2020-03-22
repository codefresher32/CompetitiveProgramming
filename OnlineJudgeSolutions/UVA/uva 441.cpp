#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,j,k,l,o,p,arr[50];
    bool f=false;
    while(cin>>n)
    {
        if(n==0)
            break;
        if(f)
            cout<<endl;
        f=true;
        for(i=0;i<n;i++)
            cin>>arr[i];
        for(i=0;i<n-5;i++)
        {
            for(j=i+1;j<n-4;j++)
            {
                for(k=j+1;k<n-3;k++)
                {
                    for(l=k+1;l<n-2;l++)
                    {
                        for(o=l+1;o<n-1;o++)
                        {
                            for(p=o+1;p<n;p++)
                                printf("%d %d %d %d %d %d\n",arr[i],arr[j],arr[k],arr[l],arr[o],arr[p]);
                        }
                    }
                }
            }
        }
    }
    return 0;
}
