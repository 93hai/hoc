//link bai: https://codeforces.com/problemset/problem/1850/D?
#include<bits/stdc++.h>
using namespace std;



int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    long long t;
    cin >> t;

    while(t > 0){
        long long n, k;
        cin >> n >> k;

        vector<long long> a(n);

        for(int i=0;i<n;i++){
            cin >> a[i];
        }

        sort(a.begin(), a.end());

        long long lon_nhat = 0;
        long long do_dai = 0;

        for(int i=0;i<n-1;i++){
            if(abs(a[i] - a[i+1]) <= k){
                do_dai++;
            }else{
                do_dai = 0;
            }
            lon_nhat = max(do_dai, lon_nhat);
        }

        lon_nhat = max(do_dai, lon_nhat);

        cout << n - lon_nhat - 1 << "\n";
        t--;
    }
    return 0;
}