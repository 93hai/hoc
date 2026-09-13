#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    //freopen("MAYMAN.INP", "r", stdin);
    //freopen("MAYMAN.OUT", "w", stdout);

    long long n;
    cin >> n;

    long long g = floor(sqrtl(n));

    long long dem = floor(g / 2);
    long long tong = 4LL * dem * (dem + 1) * (dem * 2 + 1) / 6;

    cout << dem << "\n" << tong;
    return 0;
}