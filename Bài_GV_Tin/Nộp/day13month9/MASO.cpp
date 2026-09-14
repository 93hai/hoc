#include<bits/stdc++.h>
using namespace std;

const long long MAXN = 1000000;
vector<bool> sangso(MAXN + 5, true);

void sang(){
    sangso[0] = sangso[1] = false;
    for(int i=0;i*i<=MAXN;i++){
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
        if(n%i==0){
            dem++;
            while(n%i==0){
                n/=i;
            }
        }
    }
    if(n > 0) dem++;
    
    return dem == 3;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    long long l, r;
    cin >> l >> r;

    long long dem = 0;
    for(int i=l;i<=r;i++){
        if(check(i)) dem++;
    }

    cout << dem;
}