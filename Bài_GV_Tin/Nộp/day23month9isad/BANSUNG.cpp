#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n,k;
    cin >> n >> k;

    vector<long long> a(n);

    for(int i=0;i<n;i++){
        cin >> a[i];
    }

    long long dau = 0;
    long long cuoi = 2e18;

    while(dau < cuoi){
        long long giua = (dau + cuoi) / 2;

        bool flag = false;
        long long h = k;

        while(h>0){
            for(int i=0;i<n;i++){
                if(a[i]<1) continue;
                for(int j=i;j<n;j++){

                }
            }
        }
    }
}