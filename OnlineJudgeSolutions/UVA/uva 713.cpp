#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s1,s2,s3;
        cin>>s1>>s2;
        if(s1.size()>s2.size())
            swap(s1,s2);
        int sum,carry=0;
        for(int i=0;i<s1.size();i++)
        {
            sum=(s1[i]-'0')+(s2[i]-'0')+carry;
            s3.push_back(sum%10+'0');
            carry=sum/10;
        }
        for(int i=s1.size();i<s2.size();i++)
        {
            sum=(s2[i]-'0')+carry;
            s3.push_back(sum%10+'0');
            carry=sum/10;
        }
        if(carry)
            s3.push_back(carry+'0');
        int c=0,l,j;
        l=s3.size();
        for(j=0;j<l;j++)
        {
            if(s3[j]=='0')
                c++;
            else
                break;
        }

        if(c!=0)
            s3.erase(0,c);
        cout<<s3<<endl;
    }
}
