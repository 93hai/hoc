#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    freopen("VITRI.INP", "r", stdin);
    freopen("VITRI.OUT", "w", stdout);

    long long n;
    cin >> n;
    
    long long g;
    if(n % 2 == 0){
        g = n / 2;
    }else{
        g = (n + 1) / 2;
    }

    if(g > n || 2 * g - 1 < n){
        g++;
    }

    long long tong = (g + 1) * (g / 2);

    long long thua = g - (n - g + 1);

    cout << tong - thua;
    return 0;
}