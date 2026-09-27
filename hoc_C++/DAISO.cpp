//link bai: https://lqdoj.edu.vn/problem/numstrip?
#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n;
    cin >> n;

    vector<long long> a(n);
    vector<long long> dp(n);

    cin >> a[0];
    dp[0] = a[0];

    for(int i=1;i<n;i++){
        cin >> a[i];
        dp[i] = a[i] + dp[i-1];
    }

    long long dem = 0;

    for(int i=1;i<n;i++){
        long long tong_trai = dp[i-1];
        long long tong_phai = dp[n-1] - dp[i-1];

        if(tong_trai == tong_phai){
            dem++;
        }
    }
    cout << dem;
    return 0;
}