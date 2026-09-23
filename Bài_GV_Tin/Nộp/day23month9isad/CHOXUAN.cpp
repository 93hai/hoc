#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    freopen("CHOXUAN.INP", "r", stdin);
    freopen("CHOXUAN.OUT", "w", stdout);

    long long n,k;
    cin >> n >> k;

    long long g = k * 7;

    if(n - g >= 0){
        cout << n - g;
    }else{
        cout << "-1";
    }
    return 0;
}