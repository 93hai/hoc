#include<bits/stdc++.h>
using namespace std;

const long long MAXN = 1000000;
vector<bool> sangso(MAXN + 5, true);
vector<long long> cnt(MAXN + 5, 0);

void sang(){
    sangso[0] = sangso[1] = false;
    for(long long i=2;i*i<=MAXN;i++){
        if(sangso[i]){
            for(long long j=i*i;j<=MAXN;j+=i){
                sangso[j] = false;
            }
        }
    }
}

bool check(long long n){
    long long dem = 0;

    for(long long i=2;i*i<=n;i++){
        if(n % i == 0){
            dem++;
            while(n % i == 0){
                n/=i;
            }
        }
    }
    if(n > 1) dem++;
    return dem == 3;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    long long l,r;
    cin >> l >> r;

    long long so_dau_tien = 0;
    bool flag = false;
    long long dem = 0;
    for(long long i=l;i<=r;i++){
        if(check(i)){
            if(!flag){
                so_dau_tien = i;
                flag = true;
            }
            dem++;
        }
    }
    if(dem == 0 && so_dau_tien == 0) cout << "0";
    else cout << dem << " " << so_dau_tien;
    return 0;
}