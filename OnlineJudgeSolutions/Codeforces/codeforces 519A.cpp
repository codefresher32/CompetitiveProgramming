#include<bits/stdc++.h>
using namespace std;

int cnt(char s)
{
    if(s=='Q'||s=='q')
        return 9;
    if(s=='R'||s=='r')
        return 5;
    if(s=='B'||s=='b')
        return 3;
    if(s=='N'||s=='n')
        return 3;
    if(s=='P'||s=='p')
        return 1;
    if(s=='K'||s=='k')
        return 0;
}
int main()
{
    int sum1,sum2;
    char s[10][10];
    for(int i=0;i<8;i++)
    {
        for(int j=0;j<8;j++)
        {
            cin>>s[i][j];
        }
    }
    sum1=sum2=0;
    for(int i=0;i<8;i++)
    {
        for(int j=0;j<8;j++)
        {
            if(s[i][j]>='A'&&s[i][j]<='Z')
                sum1+=cnt(s[i][j]);
            else if(s[i][j]>='a'&&s[i][j]<='z')
                sum2+=cnt(s[i][j]);
        }
    }
    if(sum1>sum2)
        cout<<"White\n";
    else if(sum1<sum2)
        cout<<"Black\n";
    else if(sum1==sum2)
        cout<<"Draw\n";
    return 0;
}
