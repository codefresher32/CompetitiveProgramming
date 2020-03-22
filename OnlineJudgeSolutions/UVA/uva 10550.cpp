#include<bits/stdc++.h>
using namespace std;

int first(int s,int f1,int sum)
{

    sum+= (s-f1)>0?(s-f1)*9:(s-f1+40)*9;
    return sum;
}

int second(int f1,int s2,int sum)
{

    sum+= (s2-f1)>0?(s2-f1)*9:(s2-f1+40)*9;
    return sum;
}
int third(int s2,int t3,int sum)
{

    sum+= (s2-t3)>0?(s2-t3)*9:(s2-t3+40)*9;
    return sum;
}
int main()
{
    int s,f1,s2,t3,sum;
    while(cin>>s>>f1>>s2>>t3)
    {
        sum=1080;
        if(s==0&&f1==0&&s2==0&&t3==0)
        {
            return 0;
        }
        sum=first(s,f1,sum);
        sum=second(f1,s2,sum);
        sum=third(s2,t3,sum);
        cout<<sum<<endl;
    }
}
