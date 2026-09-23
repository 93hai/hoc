#include<bits/stdc++.h>
using namespace std;

const long long MAXN = 1000000;
vector<bool> sangso(MAXN + 5, true);

void sang(){
    sangso[0] = sangso[1] = false;

    for(long long i=2;i*i<=MAXN;i++){
        if(sangso[i]){
            for(long long j=i*i;j<=MAXN;j+=i){
                sangso[j] = false;
            }
        }
    }
}

bool check(long long n){
    long long g = sqrtl(n);
    if(sangso[g]) return true;
    return false;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    long long n;
    cin >> n;

    sang();

    for(int i=0;i<n;i++){
        long long x;
        cin >> x;
        for(int j=0;j<=x;j++){
            if(check(j)){
                cout << j << " ";
            }
        }
        cout << "\n";
    }
    return 0;
}