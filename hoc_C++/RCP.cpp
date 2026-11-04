//Bài 3 — Đề khảo sát Tin HSG ngày 29/10/2026
#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    long long g,l;
    cin >> g >> l;

    long long sum = l / g;

    long long be_nhat = 2e18;
    long long X;
    long long Y;
    for(int i=2;i*i<=sum;i++){
        long long x,y;
        if(sum % i == 0){
            x = i * g;
            y = sum/i * g;
            if(l % x == 0 && l % y == 0 && (x + y) < be_nhat){
                be_nhat = (x + y);
                X = x;
                Y = y;
            }
        }
    }
    cout << X << " " << Y;
    return 0;
}

//ô mài cớt one shot