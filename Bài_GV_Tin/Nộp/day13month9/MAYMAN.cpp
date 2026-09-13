#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    freopen("MAYMAN.INP", "r", stdin);
    freopen("MAYMAN.OUT", "w", stdout);

    long long n;
    cin >> n;

    long long g = floor(sqrtl(n));

    long long dem = floor(g / 2);
    long long tong = (g + 1) * (g / 2);

    cout << dem << "\n" << tong;
    return 0;
}