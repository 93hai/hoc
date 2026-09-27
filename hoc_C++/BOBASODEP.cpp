#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n;
    cin >> n;

    vector<long long> a(n);

    long long sum = 1;

    bool flag = false;
    for(int i=0;i<n;i++){
        cin >> a[i];
        if(a[i] % 5 == 0){
            sum = sum * 3;
            flag = true;
        }
    }
    if(flag) cout << sum;
    else cout << "0";
}