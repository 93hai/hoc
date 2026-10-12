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
    for(int i=0;i<n;i++){
        if(he[i] > 1){
            dem += he[i];
        }
    }

    cout << dem - 1;
    return 0;
}