//Đề giao lưu Olympic Tin học lớp 8 · Năm học 2025–2026
#include<bits/stdc++.h>
using namespace std;

const long long MAXN = 1000000;
vector<bool> sangso(MAXN + 5, true);

void sang(){
    sangso[0] = sangso[1] = false;
    for(int i=2;i<=MAXN;i++){
        if(sangso[i]){
            for(long long j=i*i;j<=MAXN;j+=i){
                sangso[j] = false;
            }
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n;
    cin >> n;

    vector<long long> a(n);

    long long le = 0;
    for(int i=0;i<n;i++){
        cin >> a[i];
        if(a[i] % 2 != 0){
            le++;
        }
    }

    cout << (n*(n - 1) / 2) - (le*(le - 1) / 2); 

}