#include<bits/stdc++.h>
using namespace std;

const long long MAXN = 1000000;
vector<bool> sangso(MAXN + 5, true);
vector<long long> cnt(MAXN + 5, 0);
long long a[8][MAXN+5];

void sang(){
    sangso[0] = sangso[1] = false;
    for(int i=0;i*i<=MAXN;i++){
        if(sangso[i]){
            for(long long j=i*i;j<=MAXN;j+=i){
                sangso[j] = false;
            }
        }
    }

    for(long long i=2;i<=MAXN;i++){
        if(sangso[i]){
            cnt[i]++;
            for(long long j=i+i;j<=MAXN;j+=i){
                cnt[j]++;
            }
        }
    }
}

void build(){
    for(int i=0;i<=7;i++){
        for(int j=0;j<=MAXN;j++){
            a[i][j] = 0;
        }
    }

    for(int i=0;i<=7;i++){
        if(cnt[0] == i){
                a[i][0] = a[i][0] + 1;
        }else{
                a[i][0] = a[i][0];
        }
        for(int j=1;j<=MAXN;j++){
            if(cnt[j] >= i){
                a[i][j] = a[i][j-1] + 1;
            }else{
                a[i][j] = a[i][j-1];
            }
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    freopen("BAI2.INP", "r", stdin);
    freopen("BAI2.OUT", "w", stdout);

    long long q;
    cin >> q;

    sang();
    build();

    for(int i=0;i<q;i++){
        long long l,r,k;
        cin >> l >> r >> k;

        cout << a[k][r] - a[k][l] << "\n";
    }
    return 0;
}