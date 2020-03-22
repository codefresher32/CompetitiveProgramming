#include<bits/stdc++.h>

#define N 10000000

using namespace std;


int nod[N + 2];
int arr[N + 2];
int dp[1000007];

void FF()
{
    for (int i = 1; i <= N; i++) {
        for (int j = i; j <= N; j += i) {
            nod[j]++;
        }
    }
}

int main()
{
    FF();
    arr[0] = 1;
    int i, k = 1,l;
    for (i = 1; ; i++) {
        arr[i] = nod[arr[i - 1]] + arr[i - 1];
        if(arr[i]>1000000){
            l=i;
            break;
        }
    }

    for (int i = 1; i <= 1000000; i++) {
        if (binary_search(arr, arr + l, i)) {
            dp[i] = dp[i - 1] + 1;
         }
         else {
            dp[i] = dp[i - 1];
         }
    }
    int t, a, b, id = 0, p1, p2;
    scanf ("%d", &t);
    while (t--) {
        scanf ("%d %d", &a, &b);

        printf ("Case %d: %d\n", ++id, dp[b] - dp[a - 1]);
    }
    return 0;
}
