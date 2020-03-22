#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s1,s2="0",s3;
    int l1,l2,sum,carry;
    while(cin>>s1)
    {
        if(s1[0]=='0')
        {
            cout<<s3<<endl;
            return 0;
        }
        s3="";
        reverse(s1.begin(),s1.end());
        reverse(s2.begin(),s2.end());
        if(s1.length()>s2.length())
        {
            swap(s1,s2);
        }
        l1=s1.length();
        l2=s2.length();
        carry=0;
        for(int i=0;i<l1;i++)
        {
            sum=s1[i]-'0'+s2[i]-'0'+carry;
            s3.push_back(sum%10+'0');
            carry=sum/10;
        }
        for(int i=l1;i<l2;i++)
        {
            sum=s2[i]-'0'+carry;
            s3.push_back(sum%10+'0');
            carry=sum/10;
        }
        if(carry)
        {
            s3.push_back(carry+'0');
        }
        reverse(s3.begin(),s3.end());
        s2=s3;
    }
}
