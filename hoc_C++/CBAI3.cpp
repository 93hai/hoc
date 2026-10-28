//link bai: https://oj.clue.edu.vn/problem/hp_hsg9_26_c?
#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long n,m;
    cin >> n >> m;

    vector<long long> a(n);
    map<long long, long long> he;

    long long dem = 0;

    for(int i=0;i<n;i++){
        cin >> a[i];
        long long len_duong = (a[i] % m + m) % m;
        long long need = (m - len_duong) % m;

        dem += he[need];
        he[len_duong]++;
    }

    cout << dem;
    return 0;
}