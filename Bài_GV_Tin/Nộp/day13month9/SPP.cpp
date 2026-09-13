#include<bits/stdc++.h>
using namespace std;

bool so_phong_phu(long long n){
    long long sum = 0;
    for(long long i=1;i*i<=n;i++){
        if(n%i==0){
            sum += i;
            if(i*i != n){
                sum += n / i;
            }
        }
    }
    return sum - n > n;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    freopen("SPP.INP", "r", stdin);
    freopen("SPP.OUT", "w", stdout);

    long long n;
    cin >> n;

    for(int i=n;i<=n+12;i++){
        if(so_phong_phu(i)){
            cout << i;
            return 0;
        }
    }
}