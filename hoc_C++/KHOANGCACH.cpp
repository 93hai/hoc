//link bai: https://lqdoj.edu.vn/problem/26hsg9hno3?
#include<bits/stdc++.h>
using namespace std;

long long a[26][100005];

void build(string s){
    s = '#' + s;
    for(int i=0;i<=25;i++){
        for(int j=1;j<s.size();j++){
            a[i][j] = 0;
        }
    }

    for(int i=0;i<=25;i++){
        for(int j=1;j<s.size();j++){
            if(i == (long long) s[j] - 'a'){
                a[i][j] = a[i][j-1] + 1;
            }else{
                a[i][j] = a[i][j-1];
            }
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;

    long long q;
    cin >> q;

    build(s);

    for(int i=0;i<q;i++){
        string test = "";
        long long l,r;
        cin >> l >> r;
        long long ans = 0;
        long long lon_nhat = 0;
        for(int j=0;j<26;j++){
            if(a[j][r] - a[j][l-1] > 0){
                test += 'a' + j;
            }
        }

        for(int u=0;u<test.size()-1;u++){
            for(int v=u+1;v<test.size();v++){
                ans = min(abs(test[u] - test[v]), 26 - abs(test[u] - test[v]));
                lon_nhat = max(ans, lon_nhat);
            }
        }
        cout << lon_nhat << "\n";
    }
    return 0;
}