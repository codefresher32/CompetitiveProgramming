#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,j,c=0;
    char s1[101],s2[101],s3[101];
    gets(s1);
    gets(s2);
    gets(s3);
    strcat(s1,s2);
    sort(s1,s1+strlen(s1));
    sort(s3,s3+strlen(s3));
    if(strlen(s1)!=strlen(s3))
    {
       cout<<"NO"<<endl;
       return 0;
    }
    for(i=0;i<strlen(s1);i++)
        {
            if(s1[i]!=s3[i])
            {
                cout<<"NO"<<endl;
                return 0;
            }
        }
        cout<<"YES"<<endl;
    return 0;
}
