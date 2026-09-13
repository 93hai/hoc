#include<bits/stdc++.h>
using namespace std;

map<char, int> he;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    freopen("BAI03.INP", "r", stdin);
    freopen("BAI03.OUT", "w", stdout);

    string s;
    cin >> s;

    for(int i=0;i<s.size();i++){
        he[s[i]]++;
    }

    cout << he.size() << "\n";

    for(auto i : he){
        cout << i.first << " " << i.second << "\n";
    }
    return 0;
}