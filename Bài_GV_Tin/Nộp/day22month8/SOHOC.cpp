#include<bits/stdc++.h>
using namespace std;

bool sang(long long n){
    long long g = sqrt(n);
    if(g * g != n){
        return false;
    }
    if(n < 2) return false;
    for(int i=2;i*i<=g;i++){
        if(n%i==0) return false;
    }

    return true;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    freopen("SOHOC.INP", "r", stdin);
    freopen("SOHOC.OUT", "w", stdout);

    long long n;
    cin >> n;

    if(sang(n)) cout << 1;
    else cout << 0;
    return 0;
}