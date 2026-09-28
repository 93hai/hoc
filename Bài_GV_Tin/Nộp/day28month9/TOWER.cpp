#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n;
    cin >> n;

    const long long MAXN = 5005;
    vector<long long> a(MAXN);
    vector<long long> b(MAXN);
    vector<long long> c(MAXN);

    for(int i=0;i<n;i++){
        cin >> a[i] >> b[i] >> c[i];
    }

    reverse(a.begin(), a.end());

    
}