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

        for(long long j=0;j<n;j++){
            cin >> a[j];
        }

        sort(a.begin(), a.end());

        long long dau = 0, cuoi = n-1;
        long long dem = 0;
        while(dau < cuoi){
            if(a[dau] + a[cuoi] <= k){
                dau++;
                dem += cuoi - dau;
                
            }else{
                cuoi--;
            }
        }
        cout << dem << "\n";
    }
    return 0;
}