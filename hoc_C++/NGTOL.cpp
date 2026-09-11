//link bai: https://lqdoj.edu.vn/problem/26hsg9dna2

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
    while(n > 0){
        long long r = n % 10;
        if(r % 2 ==0) return false;
        n/=10;
    }
    return true;
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