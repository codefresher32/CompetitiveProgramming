#include<bits/stdc++.h>
using namespace std;

int main()
{
    char s1[101];
    int c=0;
    cin>>s1;
    int k=0;
    for(int i=k;i<strlen(s1);i++)
    {
        c=0;
        for(int j=i;j<strlen(s1);j++)
        {
            if(s1[i]==s1[j])
            {
                c++;
                if(c==7)
                {
                    cout<<"YES\n";
                    return 0;
                }
            }
            else
            {
                k=j;
                i=k-1;
                break;
            }
        }
    }
    cout<<"NO\n";
    return 0;
}
