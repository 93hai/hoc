#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    long long t;
    cin >> t;

    for(int i=0;i<t;i++){
        long long n,k;
        cin >> n >> k;

        vector<long long> a(n + 5);
        map<long long, long long> he;

        for(long long i=0;i<n;i++){
            cin >> a[i];
            he[a[i]]++;
        }
    }
}