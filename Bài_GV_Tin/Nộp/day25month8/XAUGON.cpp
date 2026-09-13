#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    freopen("XAUGON.INP", "r", stdin);
    freopen("XAUGON.OUT", "w", stdout);

    string s;
    cin >> s;
    s = '#' + s;
    string a = "";

    for(int i=1;i<s.size();i++){
        if(s[i] == s[i-1]) continue;
        a += s[i];
    }
    cout << a;
    return 0;
}