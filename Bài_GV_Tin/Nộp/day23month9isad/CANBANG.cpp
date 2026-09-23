#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    freopen("CANBANG.INP", "r", stdin);
    freopen("CANBANG.OUT", "w", stdout);

    long long n,k;
    cin >> n >> k;

    vector<long long> a(n);
    map<long long, long long> he;

    for(long long i=0;i<n;i++){
        cin >> a[i];

        he[a[i]]++;
    }

    long long dem = 0;
    for(long long i=0;i<n;i++){
        if(he[k + a[i]] > 0 && he[a[i] - k] > 0){
            dem++;
        }
    }
    cout << dem;
    return 0;
}