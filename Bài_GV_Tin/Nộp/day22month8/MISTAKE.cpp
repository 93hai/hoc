#include<bits/stdc++.h>
using namespace std;

long long trace_5(long long n){
    long long dem = n % 10;
    if(dem == 6) dem = 5;
    n /= 10;
    while(n > 0){
        long long d = n % 10;
        if(d == 6) d = 5;
        dem = dem + d * 10;
        n /= 10;
    }
    return dem;
}

long long trace_6(long long n){
    long long dem = n % 10;
    if(dem == 5) dem = 6;
    n /= 10;
    while(n > 0){
        long long d = n % 10;
        if(d == 5) d = 6;
        dem = dem + d * 10;
        n /= 10;
    }
    return dem;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    freopen("MISTAKE.INP", "r", stdin);
    freopen("MISTAKE.OUT", "w", stdout);

    long long a,b;
    cin >> a >> b;

    long long nho = trace_5(a) + trace_5(b);
    long long lon = trace_6(a) + trace_6(b);

    cout << min(nho,lon) << " " << max(nho, lon);
    return 0;
}