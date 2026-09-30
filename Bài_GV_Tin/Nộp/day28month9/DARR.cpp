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

    long long lon_nhat = 0;
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n;j++){
            if(a[j] > a[i]){
                lon_nhat = max(lon_nhat, a[i] % a[j]);
            }
        }
    }
    cout << lon_nhat;
    return 0;
}