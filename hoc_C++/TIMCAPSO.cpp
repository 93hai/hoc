//Đề giao lưu Olympic Tin học lớp 8 · Năm học 2025–2026
#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n;
    cin >> n;

    vector<long long> a(n);

    long long le = 0;
    long long chan = 0;
    for(int i=0;i<n;i++){
        cin >> a[i];
        if(a[i] % 2 == 0){
            chan++;
        }else{
            le++;
        }
    }

    long long tong = chan + le;
    cout << ((chan * (chan - 1)) / 2) + 
}