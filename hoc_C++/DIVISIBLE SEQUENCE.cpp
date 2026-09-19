//link: https://lqdoj.edu.vn/problem/seq11
#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n,k;
    cin >> n >> k;

    vector<long long> a(n);
    vector<long long> dp(n);

    dp[0] = 0;
    for(long long i=1;i<=n;i++){
        cin >> a[i];
        dp[i] = dp[i-1] + a[i];
    }

    
    return 0;
}