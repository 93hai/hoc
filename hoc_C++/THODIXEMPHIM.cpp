//link bai: https://lqdoj.edu.vn/problem/son001?
#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n;
    cin >> n;

    map<long long, long long> he;

    long long dem = 0;

    for(int i=0;i<n;i++){
        long long x;
        cin >> x;
        he[x]++;

        if(he[x] == 2){
            dem++;
        }
    }
    cout << dem;
    return 0;
}