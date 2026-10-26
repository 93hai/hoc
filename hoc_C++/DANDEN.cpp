//link bai: https://oj.clue.edu.vn/problem/na_hsg9_26_b
#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n,k;
    cin >> n >> k;

    vector<long long> a(n+1);
    vector<long long> dp(n+1);

    long long den_xanh = 0;
    long long demtam = 0;
    bool flag = true;
    long long lon_nhat;
    long long vi_tri;
    for(int i=1;i<=n;i++){
        cin >> a[i];
        if(a[i] == 1){
            den_xanh++;
        }
        if(i<k && a[i] == 0){
            demtam++;
        }else if(flag == true && i==k){
            flag = false;
            dp[i] = demtam;
            lon_nhat = dp[i];
            vi_tri = i;
        }
    }

    for(int i=k+1;i<=n;i++){
        if(a[i] == 1){
            dp[i] = dp[i-1];
        }else{
            dp[i] = dp[i-1] + 1;
        }
        if(dp[i] > lon_nhat){
            lon_nhat = dp[i];
            vi_tri = i;
        }
    }

    long long den_xanh_con_thua = 0;

    if(dp[vi_tri] - dp[vi_tri - k] != k){
        den_xanh_con_thua = k - dp[vi_tri] - dp[vi_tri - k];
    }

    cout << den_xanh + (dp[vi_tri] - dp[vi_tri - k]) - den_xanh_con_thua;
}