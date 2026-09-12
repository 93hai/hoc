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

    long long so_ba = -2e18;
    long long so_hai = -218;
    long long so_mot = -2e18;
    for(int j=1;j<n-1;j++){
        so_ba = max(so_ba, a[j-1]*x);
        so_hai = max(so_hai, a[j]*y);
        so_mot = max(so_mot, a[j+1]*z);
    }

    cout << so_ba + so_hai + so_mot;

    return 0;
}