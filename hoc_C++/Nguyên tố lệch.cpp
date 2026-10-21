//link bai: https://oj.clue.edu.vn/problem/dn_hsg9_26_b?
#include<bits/stdc++.h>
using namespace std;

const long long MAXN = 1000000;
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

bool check(long long n){
    long long chan = 0, le = 0;
    while(n > 0){
        long long d = n % 10;
        if(d % 2 == 0){
            chan++;
        }else{
            le++;
        }
        n/=10;
    }
    return chan != le;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n;
    cin >> n;

    sang();

    long long dem = 0;
    for(int i=0;i<n;i++){
        long long x;
        cin >> x;
        if(sangso[x] && check(x)){
            dem++;
        }
    }

    cout << dem;
    return 0;
}