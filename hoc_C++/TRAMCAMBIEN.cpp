//link bai: https://lqdoj.edu.vn/problem/26hsg9hcm1?
#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    long long a,b;
    cin >> a >> b;

    long long g = __gcd(a,b);

    cout << g << "\n";
    cout << a / g << " " << b / g;
    return 0;
}