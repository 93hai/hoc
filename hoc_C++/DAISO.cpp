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

    long long tong_trai = a[0];
    long long tong_phai = a[n-1];

    long long l=0, r=n-1;
    long long dem = 0;

    while(l<r){
        if(tong_phai == tong_trai){
            dem++;
        }else if(tong_phai > tong_trai){
            l++;
            tong_trai += a[l];
        }else if(tong_trai > tong_phai){
            r--;
            tong_phai += a[r];
        }
    }
    cout << dem;
    return 0;
}