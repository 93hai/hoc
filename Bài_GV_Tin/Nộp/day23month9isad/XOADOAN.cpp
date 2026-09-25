#include<bits/stdc++.h>
using namespace std;

const long long INF = 2e18;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    freopen("XOADOAN.INP", "r", stdin);
    freopen("XOADOAN.OUT", "w", stdout);

    long long n;
    cin >> n;

    vector<long long> a(n);
    long long tong = 0;

    for(long long i=0;i<n;i++){
        cin >> a[i];
        tong += a[i];
    }

    long long s;
    cin >> s;

    long long can_tru = tong - s;

    long long l=0;
    long long sum = 0;
    long long ans = INF;

    if(tong <= s){
        cout << 0;
        return 0;
    }

    for(long long i=0;i<n;i++){
        sum += a[i];

        while(sum >= can_tru){
            ans = min(ans, i - l + 1);

            sum -= a[l];
            l++;
        }
    }
    if(ans == INF) cout << "-1";
    else cout << ans;
    return 0;
}