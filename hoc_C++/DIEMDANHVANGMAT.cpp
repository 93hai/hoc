//link bai:https://lqdoj.edu.vn/problem/swcabsence
#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    long long m,n;
    cin >> m >> n;

    map<long long, long long> he;

    for(int i=0;i<n;i++){
        long long x;
        cin >> x;
        he[x]++;
    }

    for(int i=1;i<=m;i++){
        if(he[i] == 0){
            cout << i << " ";
        }
    }
    return 0;
}