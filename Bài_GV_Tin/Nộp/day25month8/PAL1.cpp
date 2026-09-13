#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    freopen("PAL1.INP", "r", stdin);
    freopen("PAL1.OUT", "w", stdout);

    string s;
    cin >> s;

    long long dau = 0;
    long long cuoi = s.size()-1;

    while(dau < cuoi){
        if(s[dau] == s[cuoi]){
            dau++;
            cuoi--;
        }else if(s[dau] != s[cuoi]){
            cout << "No";
            return 0;
        }
    }
    cout << "Yes";
    return 0;
}