//link: https://lqdoj.edu.vn/problem/cppb2p123
#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    long long q;
    cin >> q;

    for(int i=0;i<q;i++){
        long long n,k;
        cin >> n >> k;

        vector<long long> a(n + 5);
        map<long long, long long> he;

        for(long long i=0;i<n;i++){
            cin >> a[i];
            he[a[i]]++;
        }

        long long dem = 0;
        for(long long i=0;i<n;i++){
            if(he[k - a[i]] > 0){
                dem++;
            }
        }

        cout << dem << "\n";
    }
    return 0;
}