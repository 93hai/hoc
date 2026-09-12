//link bai: https://lqdoj.edu.vn/problem/26hsg9hti3?

#include<bits/stdc++.h>
using namespace std;

long long a[1000005];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n;
    cin >> n;

    for(int i=0;i<n;i++){
        cin >> a[i];
    }



    long long x, y, z;
    cin >> x >> y >> z;

    vector<long long> max_phai(n+5, -2e18);
    for(int i=n-1;i>=0;i--){
        max_phai[i] = max(max_phai[i+1], a[i] * z);
    }

    long long ben_trai = a[0] * x;
    long long ans = -2e18;
    for(int j=1;j<n-1;j++){
        ben_trai = max(ben_trai, a[j-1] * x);
        long long sum = ben_trai + a[j] * y + max_phai[j+1];
        ans = max(ans,sum);
    }

    cout << ans;

    return 0;
}