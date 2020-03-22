#include<bits/stdc++.h>
using namespace std;

int main()
{
    char s[101][101],ss[16][100]={"Happy","birthday","to","you","Happy","birthday","to","you","Happy","birthday","to","Rujia","Happy","birthday","to","you"};
    int n;
    while(cin>>n)
    {
        for(int i=0;i<n;i++)
        {
            cin>>s[i];
        }
        int x=n,c=0;
        if(n%16!=0){
            n/=16;
            n++;
        }

        for(int i=0,j=0; ;i++,j++)
        {
            printf("%s: %s\n",s[j],ss[i]);
            if(i==15){
                i=-1;
                c++;
            }
            if(c==n)
                break;
            if(j==x-1)
                j=-1;
        }
    }
    return 0;
}
