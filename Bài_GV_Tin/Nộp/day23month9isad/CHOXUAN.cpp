#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n,k;
    cin >> n >> k;

    long long g = k * 7;

    if(n - g >= 0){
        cout << n - k;
    }else{
        cout << "-1";
    }
    return 0;
}