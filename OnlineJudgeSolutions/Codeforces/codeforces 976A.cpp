#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    char s[101];
    cin>>n;
    cin>>s;
        for(int j=0;j<strlen(s);j++)
        {
            if(s[j+1]=='1'&&s[j]=='0')
            {
                swap(s[j+1],s[j]);
                j=-1;
            }
            else if(s[j+1]=='1'&&s[j]=='1')
            {
                for(int k=j+1;k<strlen(s);k++)
                    s[k]=s[k+1];
                j=-1;
            }
        }
    puts(s);
    return 0;
}
