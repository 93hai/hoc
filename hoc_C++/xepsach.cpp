//link bai:https://lqdoj.edu.vn/problem/arrbook
#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n;
    cin >> n;

    map<long long, long long> he;

    for(int i=0;i<n;i++){
        long long x;
        cin >> x;
        he[x]++;
    }

    for(auto i : he){
        for(int j=0;j<i.second;j++){
            cout << i.first << " ";
        }
    }
    return 0;
}