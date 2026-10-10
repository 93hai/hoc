//link bai: https://lqdoj.edu.vn/problem/26thtbhaichau1
#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    getline(cin >> ws, s);

    for(int i=0;i<s.size();i++){
        if(s[i-1] == ' ' || i == 0){
            char kq;
            if(s[i] >= 'a' && s[i] <= 'z'){
                kq = s[i] - ('a' - 'A');
            }else if(s[i] >= 'A' && s[i] <= 'Z'){
                kq = s[i];
            }
            cout << kq;
        }
    }
}