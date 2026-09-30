//link bai:https://lqdoj.edu.vn/problem/24hsg12b
#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n, m;
    cin >> n >> m;

    map<long long, long long> he;

    long long dem = 0;
    for(int i=0;i<n;i++){
        long long x;
        cin >> x;
        he[x]++;
        dem = max(dem, he[x]);
    }
    
    cout << dem;
    return 0;
}