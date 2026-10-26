//link bai: https://oj.clue.edu.vn/problem/na_hsg9_26_b
#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n,k;
    cin >> n >> k;

    vector<long long> a(n);
    vector<long long> dp(n, 0);

    long long maxping = 0;

    for(int i=0;i<n;i++){
        cin >> a[i];
        if(a[i] == 1) maxping++;
    }

    if(a[0] == 0){
        dp[0]++;
    }else{
        dp[0]--;
    }

    long long lon_nhat = -2e18;

    for(int i=1;i<k;i++){
        if(dp[i] == 0){
            dp[i] = dp[i-1] + 1;
        }else{
            dp[i] = dp[i-1] - 1;
        }
    }

    lon_nhat = max(dp[k-1], lon_nhat);

    for(int i=k;i<n;i++){
        if(dp[i] == 0){
            dp[i] = dp[i-1] + 1;
        }else{
            dp[i] = dp[i+1] - 1;
        }
        dp[i] = dp[i] - dp[i-k];
        lon_nhat = max(lon_nhat, dp[i]);
    }

    if(lon_nhat < 0) cout << maxping - abs(lon_nhat);
    else cout << maxping + abs(lon_nhat);
    return 0;
}