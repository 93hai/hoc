//link bai:https://lqdoj.edu.vn/problem/lqoj09
#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;

    for(int i=0;i<s.size()-3;i++){
        cout << s[i];
    }
    return 0;
}