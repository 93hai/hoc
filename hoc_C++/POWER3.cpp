//link: https://lqdoj.edu.vn/problem/ts10ct15b
#include<bits/stdc++.h>
using namespace std;

bool check(long long n){
    if(n == 0 || n == 1) return true;
    for(long long i=2;i*i<=n;i++){
        long long dem = 0;
        if(n % i == 0){
            long long e = n;
            while(e % i == 0){
                e/=i;
                dem++;
            }
        }
        if(dem == 3) return true;
    }
    return false;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    long long t;
    cin >> t;

    for(long long i=0;i<t;i++){
        long long n;
        cin >> n;

        if(check(n)){
            cout << "YES" << "\n";
        }else{
            cout << "NO" << "\n";
        }
    }

    
    return 0;
}