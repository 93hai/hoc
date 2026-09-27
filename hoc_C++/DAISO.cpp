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

    map<long long, long long> he;

    cin >> a[0];
    dp[0] = a[0];
    he[dp[0]]++:

    for(int i=1;i<n;i++){
        cin >> a[i];
        dp[i] = a[i] + dp[i-1];
        he[dp[i]]++;
    }

    long long 
}