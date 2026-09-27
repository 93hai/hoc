//link bai: https://lqdoj.edu.vn/problem/20ts10dla2?
#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    long long n;
    cin >> n;

    long long g = n % 5;

    cout << ceil(n / 5) << " " << ceil((n - ceil(n / 5)) / 2) << " " << n - (ceil(n / 5) * 5 + ceil((n - ceil(n / 5)) / 2) * 2);

    return 0;
}