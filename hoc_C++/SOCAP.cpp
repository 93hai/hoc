#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n;
    cin >> n;

    map<long long, long long> he;

    for(int i=0;i<n;i++){
        long long x;
        cin >> x;

        he[x]++;
    }

    long long dem = 0;
    for(auto i : he){
        if(i.second > 1){
            long long so_cap = (i.second * (i.second - 1)) / 2;
            dem+= so_cap;
        }
    }

    cout << dem;
    return 0;
}