//link bai: https://lqdoj.edu.vn/problem/26hsg9hti3?

#include<bits/stdc++.h>
using namespace std;

long long a[1000005];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n;
    cin >> n;

    for(int i=0;i<n;i++){
        cin >> a[i];
    }



    long long x, y, z;
    cin >> x >> y >> z;

    long long i = n / 2 - 1;
    long long is = -2e18;
    long long index_i = i;


    while(i>=0){
        if(is <= a[i] * x){
            index_i = i;
            is = a[i] * x;
        }
        i--;
    }

    long long k = n / 2 ;
    long long ks = -2e18;
    long long index_k = k;


    while(k<n){
        if(ks <= a[k] * z){
            index_k = k;
            ks = a[k] * z;
        }
        k--;
    }

    long long lon_nhat = -2e18;

    for(int j=index_i;j<=index_k;j++){
        if(lon_nhat < is + ks + (a[j] * y)) lon_nhat = is + ks + (a[j] * y);
    }
    cout << lon_nhat;
    return 0;
}