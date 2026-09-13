#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    freopen("XAUDX.INP", "r", stdin);
    freopen("XAUDX.OUT", "w", stdout);

    string s;
    cin >> s;

    long long dau = 0;
    long long cuoi = s.size()-1;

    while(dau < cuoi){
        if(s[dau] == s[cuoi]){
            dau++;
            cuoi--;
        }else if(s[dau] != s[cuoi]){
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
    return 0;
}