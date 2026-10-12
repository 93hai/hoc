//link bai:https://lqdoj.edu.vn/problem/arrbook
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

    sort(a.begin(), a.end());

    for(int i=0;i<n;i++){
        cout << a[i] << " ";
    }
    return 0;
}