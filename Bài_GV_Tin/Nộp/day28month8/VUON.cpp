#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    freopen("VUON.INP", "r", stdin);
    freopen("VUON.OUT", "w", stdout);
    
    long long a,b;
    cin >> a >> b;
    if(a == b){
        cout << "1";
    }else if(a > b){
        cout << b * b;
    }else if(b > a){
        cout << a * a;
    }
    return 0;
}