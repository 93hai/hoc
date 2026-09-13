#include<bits/stdc++.h>
using namespace std;

long long tong(long long n){
    long long sum = 0;
    for(long long i=1;i*i<=n;i++){
        if(n%i==0){
            sum += i;
            if(i*i!=n){
                sum += n/i;
            }
        }
    }
    return sum;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    freopen("TONGUOC.INP", "r", stdin);
    freopen("TONGUOC.OUT", "w", stdout);

    long long a,b,c;
    cin >> a >> b >> c;

    cout << max(tong(a), max(tong(b), tong(c)));
    return 0;
}