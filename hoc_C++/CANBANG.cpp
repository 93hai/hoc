//link bai giai https://lqdoj.edu.vn/problem/26hsg9hno2?

#include<bits/stdc++.h>
using namespace std;

map<int, bool> he;
long long a[100005];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n,k;
    cin >> n >> k;

    for(int i=0;i<n;i++){
        cin >> a[i];

        he[a[i]] = true;
    }

    long long dem = 0;
    for(int i=0;i<n;i++){
        if(he[a[i]+k] && he[a[i]-k]){
            dem++;
        }
    }

    cout << dem;
    return 0;
}