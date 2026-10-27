//link bai: https://oj.clue.edu.vn/problem/hp_hsg9_26_b?
#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n;
    cin >> n;

    vector<long long> a(n);

    for(int i=0;i<n;i++){
        cin >> a[i];
    }

    long long max1 = a[0];
    long long lon_nhat = a[0];

    for(int i=1;i<n;i++){
        max1 = max(a[i], max1 + a[i]);
        lon_nhat = max(lon_nhat, max1);
    }

    cout << lon_nhat;
}