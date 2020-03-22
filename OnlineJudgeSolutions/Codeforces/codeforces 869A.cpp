#include <bits/stdc++.h>
using namespace std;
int vis[4000007];
int main()
{
    int a[2007],b[2007],n,x;
	cin>>n;
	for (int i=1;i<=n;i++)
	{
		cin>>a[i];
		vis[a[i]]=1;
	}
	for (int i=1;i<=n;i++)
	{
		cin>>b[i];
		vis[b[i]]=1;
	}
	int ans=0;
	for (int i=1;i<=n;i++)
		for (int j=1;j<=n;j++){
                x=a[i]^b[j];
			if (vis[x])
                ans++;
		}
	if (ans%2==0)
        cout<<"Karen\n";
    else
        cout<<"Koyomi\n";
	return 0;
}

