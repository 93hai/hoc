#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    freopen("DEMCP.INP", "r", stdin);
    freopen("DEMCP.OUT", "w", stdout);
    
    long long l, r;
    cin >> l >> r;
    cout << floorl(sqrtl(r)) - floorl(sqrtl(l-1));
    return 0;
}