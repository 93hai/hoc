//link bai: https://lqdoj.edu.vn/problem/son001?
#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n;
    cin >> n;

    vector<long long> a(n);

    long long dem = 0;

    for(int i=0;i<n;i++){
        if(a[i] < a[i-1])dem++;
    }
    cout << dem;
    return 0;
}