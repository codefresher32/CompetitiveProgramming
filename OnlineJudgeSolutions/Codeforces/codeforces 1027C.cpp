#include<bits/stdc++.h>
using namespace std;

int arr[1000005];
int brr[1000005];

int main()
{
    int t,n,x,y;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        for(int i=0;i<n;i++)
            scanf("%d",&arr[i]);
        sort(arr,arr+n);
        int j=0;
        for(int i=0;i<n-1;i++)
        {
            if(arr[i]==arr[i+1]){
                brr[j++]=arr[i];
                i++;
            }
        }
       double s1,s2;
       x=brr[0];
       y=brr[1];
       s1=(double)pow(2*(brr[0]+brr[1]),2)/(double)(brr[0]*brr[1]);
        for(int i=0;i<j-1;i++)
        {
            s2=(double)pow(2*(brr[i]+brr[i+1]),2)/(double)(brr[i]*brr[i+1]);
            if(s2<s1)
            {
                x=brr[i];
                y=brr[i+1];
                s1=s2;
            }
        }
        printf("%d %d %d %d\n",x,x,y,y);
    }
    return 0;
}
