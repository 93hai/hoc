#include<bits/stdc++.h>
using namespace std;

long long a[100005];
vector<long long> dp(100005, 0);
const long long MAXN = 10000000;
vector<bool> sang(MAXN + 5, true);

void sangso(){
    sang[0] = sang[1] = false;
    for(int i=2;i*i<=MAXN;i++){
        if(sang[i]){
            for(long long j=i*i;j<=MAXN;j+=i){
                sang[j] = false;
            }
        }
    }
}

bool check(long long n){
    if(n < 2) return false;
    if(!sang[n]) return false;
    else if(n < 10 && sang[n]) return true;
    long long sum = 0;
    while(n > 0){
        long long d = n % 10;
        sum = sum * 10 + d;
        n/=10;
    }
    if(sang[sum]) return true;
    return false;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    freopen("NGUYENTO.INP", "r", stdin);
    freopen("NGUYENTO.OUT", "w", stdout);

    long long n,q;
    cin >> n >> q;

    sangso();

    for(int i=1;i<=n;i++){
        cin >> a[i];
        if(check(a[i])){
            dp[i] = dp[i-1] + 1;
        }else{
            dp[i] = dp[i-1];
        }
    }

    for(int i=0;i<q;i++){
        long long l,r;
        cin >> l >> r;
        cout << dp[r] - dp[l-1] << "\n";
    }
    return 0;
}