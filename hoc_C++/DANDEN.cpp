//link bai: https://oj.clue.edu.vn/problem/na_hsg9_26_b
#include<bits/stdc++.h>
using namespace std;

struct DIEM{
    long long den_do = 0;
    long long den_xanh = 0;
};

DIEM dp[1000006];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n,k;
    cin >> n >> k;

    dp[0].den_do = 0;
    dp[0].den_xanh = 0;

    for(int i=1;i<=n;i++){
        long long x;
        cin >> x;

        if(x == 0){
            dp[i].den_do = dp[i-1].den_do + 1;
            dp[i].den_xanh = dp[i-1].den_xanh;
        }else{
            dp[i].den_xanh = dp[i-1].den_xanh + 1;
            dp[i].den_do = dp[i-1].den_do;
        }
    }

    long long tong_den = dp[n].den_xanh
}