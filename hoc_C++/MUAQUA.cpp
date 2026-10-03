//link bai: https://lqdoj.edu.vn/submission/9552914
#include<bits/stdc++.h>
using namespace std;

long long a[200005];
long long dp[200005];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n,m;
    cin >> n >> m;

    for(int i=1;i<=n;i++){
        cin >> a[i];
    }

    sort(a, a+n);

    long long be_nhat = 2e18;
    for(int i=m;i<=n;i++){
        be_nhat = a[m] - a[i-m+1];
    }

    cout << be_nhat;
    return 0;
}