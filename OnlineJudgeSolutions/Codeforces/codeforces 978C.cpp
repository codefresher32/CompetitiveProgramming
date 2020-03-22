#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long arr, p, k;
    int n, m, t, i, j, l , h, mid;
    cin >> n >> m;
    long long sum[205];
    long long b[205];
    sum[0] = 0;
    for (int i = 1; i <= n; i++) {
        cin >> arr;
        sum[i] = sum[i - 1] + arr;
    }
    for (i = 0; i < m; i++)
        cin >> b[i];
    for (i = 0; i < m; i++) {
        k = b[i];
        l = 1;
        h = n;
        mid = 0;
        while (h >= l) {
            mid = (l + h) / 2;
            if (sum[mid] == k) {
                t = mid;
               break;
            }
           else if (k > sum[mid]) {
            l = mid + 1;
            }
           else {
              h = mid - 1;
              t = mid;
          }
      }
      cout << t << " " << k - sum[t - 1] << endl;
    }
    return 0;
}
