//link bai: https://lqdoj.edu.vn/problem/20ts10dla2?
#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    long long n;
    cin >> n;

    long long g = n % 5;

    cout << floor(n / 5) << " " << floor((n - floor(n / 5)) / 2) << " " << n - floor(n / 5) * 5 + floor((n - floor(n / 5)) / 2) * 2;

    return 0;
}