//Đề giao lưu Olympic Tin học lớp 8 · Năm học 2025–2026
#include<bits/stdc++.h>
using namespace std;
using ll = long long;

bool check(ll a,ll b){
    long long x,y;
    x = a;
    y = b;
    for(long long i=2;i*i<=a;i++){
        int dem = 0;
        if(a % i == 0){
            while(a % i == 0){
                a/=i;
                dem++;
            }
        }
        if(dem >= 2) return true;
    }

    for(long long i=2;i*i<=b;i++){
        int dem = 0;
        if(b % i == 0){
            while(b % i == 0){
                b/=i;
                dem++;
            }
        }
        if(dem >= 2) return true;
    }

    if(__gcd(x,y) > 1) return true;
    else return false;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    ll l,r;
    cin >> l >> r;

    ll dem = 0;
    for(ll i=l;i<r;i++){
        for(ll j=i+1;j<=r;j++){
            if(check(i,j)){
                dem++;
            }
        }
    }
    cout << dem;
    return 0;
}
//vcl sai th cx dc :>>> 