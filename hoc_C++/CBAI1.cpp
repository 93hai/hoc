#include<bits/stdc++.h>
using namespace std;

bool tong(long long n){
    long long sum = 0;
    while(n > 0){
        long long r = n % 10;
        sum += r;
        n/=10;
    }
    if(sum % 5 == 0) return true;
    return false;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n;
    cin >> n;

    long long dem = 0;
    for(int i=0;i<n;i++){
        long long x;
        cin >> x;

        if(x % 5 == 0 && tong(x)){
            dem++;
        }
    }

    cout << dem;
    return 0;
}