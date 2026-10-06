//link bai: https://lqdoj.edu.vn/problem/21ts10dna3
#include<bits/stdc++.h>
using namespace std;

const long long MAXN = 3000000;
vector<bool> sangso(MAXN + 5, true);

void sang(){
    sangso[0] = sangso[1] = false;

    for(int i=2;i*i<=MAXN;i++){
        if(sangso[i]){
            for(long long j=i*i;j<=MAXN;j+=i){
                sangso[j] = false;
            }
        }
    }
}

long long tongso(long long n){
    long long tong = 0;
    while(n > 0){
        long long d = n % 10;
        tong += d;
        n/=10;
    }
    return tong;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    long long t;
    cin >> t;
    
    sang();

    for(int i=0;i<t;i++){
        long long dem = 0;
        long long l,r;
        cin >> l >> r;

        for(long long j=l;j<=r;j++){
            if(sangso[j] && tongso(j) % 5 == 0) dem++;
        }
        cout << dem << "\n";
    }
    return 0;
}