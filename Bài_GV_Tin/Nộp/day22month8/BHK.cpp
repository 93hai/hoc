#include<bits/stdc++.h>
using namespace std;

bool tachso(long long n){
    while(n > 0){
        long long d = n % 10;
        if(d != 7 && d != 2 && d != 0){
            return false;
        }
        n/=10;
    }
    return true;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    freopen("BHK.INP", "r", stdin);
    freopen("BHK.OUT", "w", stdout);
    
    long long n;
    cin >> n;

    bool flag = false;
    long long s = n;
    while(s <= 1000000000){
        if(s % n == 0 && tachso(s)){
            flag = true;
            break;
        }
        s+=n;
    }
    if(flag){
        cout << s;
    }else{
        cout << 0;
    }
}