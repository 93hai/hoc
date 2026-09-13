#include<bits/stdc++.h>
using namespace std;

long long a[100005];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    freopen("PHILAO.INP", "r", stdin);
    freopen("PHILAO.OUT", "w", stdout);
    
    long long n,m,k,c;
    cin >> n >> m >> k >> c;

    for(int i=0;i<n;i++){
        cin >> a[i];
    }

    sort(a, a+n);

    long long dau = 0;
    long long cuoi = 2000000000000000000;
    long long lon_nhat = 0;
    while(dau<cuoi){
        long long mid = (dau + cuoi) / 2;

        long long sum = 0;
        for(int i=n-k;i<n;i++){
            if(a[i] + mid > c){
                sum += a[i] + mid - c;
            }
            if(sum >= m){
                cuoi = mid;
                lon_nhat = cuoi;
                break;
            }
        }
        if(sum < m) dau = mid + 1;
    }
    cout << cuoi;
    return 0;
}