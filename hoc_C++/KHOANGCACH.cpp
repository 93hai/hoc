//link bai: https://lqdoj.edu.vn/problem/26hsg9hno3?

#include<bits/stdc++.h>
using namespace std;

vector<char> a(60);

void build(){
    long long check = 122;
    for(int i=0;i<26;i++){
        a[i] = (char) check;
        check--;
    }

    check = 98;
    for(int i=26;i<=51;i++){
        a[i] = (char) check;
        check++;
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;

    build();

    long long q;
    cin >> q;

    for(int i=0;i<51;i++){
        cout << a[i] << " ";
    }
    cout << "\n";

    for(int i=0;i<q;i++){
        long long l, r;
        cin >> l >> r;
        long long dau = 0;
        long long cuoi = 0;

        for(int j=0;j<26;j++){
            if(s[l] == a[j]){
                dau = j;
                break;
            }
        }

        for(int j=52;j>=26;j--){
            if(s[r] == a[j]){
                cuoi = j;
                break;
            }
        }

        long long kq = 0;
        if(cuoi - dau <= 26){
            kq = abs(cuoi - dau - 26);
        }else{
            kq = cuoi - dau;
        }
        cout << kq << "\n";
    }
    return 0;
}