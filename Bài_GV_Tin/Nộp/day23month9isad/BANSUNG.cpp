#include<bits/stdc++.h>
using namespace std;

vector<long long> a(200005);

bool check(long long n, long long k){
    vector<long long> b(200005);

    b = a;

    long long oneshot = 0;

    for(long long i=0;i<n;i++){
        if(b[i] < 1) continue;

        oneshot = max(n,b[i]) / min(n, b[i]);

        if(oneshot > k) return false;

        for(long long j=i;j<n;j++){
            b[i] -= max(0, n - (j - i) * (j - i));
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n,k;
    cin >> n >> k;

    for(int i=0;i<n;i++){
        cin >> a[i];
    }

    long long dau = 0, cuoi = 2e18;

    while(dau < cuoi){
        long long mid = (dau + cuoi) / 2;
        
        check(x);
    }
    return 0;
}