#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    long long int arr[200005]={0};
    for(int i=0;i<n;i++)
        cin>>arr[i];
    int mx=1,j;
    for(int i=0;i<n;i++)
    {
        j=i;
        while(j+1<n&&arr[j+1]<=2*arr[j])
            j++;
        mx=max(mx,j-i+1);
        i=j;
    }
    cout<<mx<<endl;
    return 0;
}
