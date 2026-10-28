//link bai: https://oj.clue.edu.vn/problem/hp_hsg9_26_c?
#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n,m;
    cin >> n >> m;

    vector<long long> a(n);
    map<long long, long long> he;

    for(int i=0;i<n;i++){
        cin >> a[i];
        he[a[i]]++;
    }

    long long dem = 0;

    for(int i=0;i<n;i++){
        long long r = a[i] % m;
        long long need = (m - r) % m;

        if(he[need] > 0){
            dem++;
        }
    }

    cout << dem / 2;
    return 0;
}