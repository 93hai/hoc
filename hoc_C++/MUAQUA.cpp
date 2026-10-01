#include<bits/stdc++.h>
using namespace std;

long long a[200005];
long long dp[200005];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n,m;
    cin >> n >> m;

    for(int i=0;i<n;i++){
        cin >> a[i];
    }

    sort(a, a + n);

    dp[0] = a[0];
    for(int i=0;i<n;i++){
        dp[i] = dp[i-1] + a[i];
    }

    long long dau = 0;
    long long cuoi = m-1;
    long long be_nhat = dp[cuoi] - dp[dau];
    for(int i=1;i<n;i++){
        be_nhat = min(be_nhat, dp[cuoi] - dp[dau-1]);
        cuoi++;
        dau++;
    }
    cout << be_nhat;
    return 0;
}