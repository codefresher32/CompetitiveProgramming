#include<bits/stdc++.h>
using namespace std;

int main()
{
    char s1[100000],s2[100000];
    int c;
    while(cin>>s1>>s2)
    {
        c=0;
        int k=0;
        for(int i=0;i<strlen(s1);i++)
        {
            for(int j=k;j<strlen(s2);j++)
            {
                if(s1[i]==s2[j])
                {
                    c++;
                    k=j+1;
                    break;
                }
            }
        }
        if(c==strlen(s1))
        {
            cout<<"Yes\n";
        }
        else
        {
            cout<<"No\n";
        }
    }
    return 0;
}
