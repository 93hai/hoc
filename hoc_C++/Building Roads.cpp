//link bai: https://lqdoj.edu.vn/problem/cses1666
#include<bits/stdc++.h>
using namespace std;

long long parent[100005];

long long find(long long u){
    if(parent[u] == u ) return u;
    return parent[u] = find(parent[u]);
}

void onion(long long x, long long y){
    long long u = find(x);
    long long v = find(y);

    if(u!=v){
        parent[u] = parent[v];
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    long long n,m;
    cin >> n >> m;

    for(int i=1;i<=n;i++){
        parent[i] = i;
    }

    for(int i=0;i<m;i++){
        long long u,v;
        cin >> u >> v;
        onion(u,v);
    }

    long long dem = 0;
    for(int i=2;i<=n;i++){
        if(parent[i] != parent[i-1]) dem++;
    }

    cout << dem << "\n";

    for(int i=2;i<=n;i++){
        if(parent[i] != parent[i-1]){
            cout << i-1 << " " << i << "\n";
        }
    }
}