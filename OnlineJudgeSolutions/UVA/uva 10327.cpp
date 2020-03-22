#include<bits/stdc++.h>
using namespace std;

int main()

{
    int n,a[10001],c;
    while(cin>>n)
    {
        c=0;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(int i=1;i<n;i++)
        {
            for(int j=0;j<i;j++)
            {
                if(a[j]>a[i])
                {

                    c++;
                }
            }
        }
        printf("Minimum exchange operations : %d\n",c);
    }
   return 0;
}
