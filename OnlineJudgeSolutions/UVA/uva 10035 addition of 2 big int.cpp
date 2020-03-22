#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s1,s2,s3="";

    while(cin>>s1>>s2){
            if(s1[0]=='0'&&s2[0]=='0')
            {
                return 0;
            }
    if(s1.length()>s2.length())
    {
        swap(s1,s2);
    }
    reverse(s1.begin(),s1.end());
    reverse(s2.begin(),s2.end());
    int carry=0,sum,c=0;
    for(int i=0;i<s1.length();i++)
    {
        sum=((s1[i]-'0')+(s2[i]-'0'))+carry;
        s3.push_back(sum%10+'0');
        carry=sum/10;
        if(carry)
        {
            c++;
        }
    }
    for(int i=s1.length();i<s2.length();i++)
    {
        sum=(s2[i]-'0')+carry;
        s3.push_back(sum%10+'0');
        carry=sum/10;
        if(carry)
        {
            c++;
        }
    }
    if(carry)
    {
        s3.push_back(carry+'0');
    }
    reverse(s3.begin(),s3.end());
    if(c==0)
    {
        printf("No carry operation.\n");
    }
    else if(c==1)
    {
        printf("%d carry operation.\n",c);
    }
    else
    {
        printf("%d carry operations.\n",c);
    }
}

}
