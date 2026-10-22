//link bai: https://oj.vnoi.info/problem/dsu_b
#include<bits/stdc++.h>
using namespace std;

struct DIEM{
    long long gia_tri;
    long long lon_nhat;
    long long be_nhat;
    long long dem;
};

DIEM parent[300005];

long long find(long long u){
    if(parent[u].gia_tri == u) return u;
    return parent[u].gia_tri = find(parent[u].gia_tri);
}

void onion(long long x, long long y){
    long long u = find(x);
    long long v = find(y);
    if(u != v){
        parent[v].dem += parent[u].dem;
        parent[v].be_nhat = min(parent[v].be_nhat, parent[u].be_nhat);
        parent[v].lon_nhat = max(parent[u].lon_nhat, parent[v].lon_nhat);
        parent[v].gia_tri = parent[u].gia_tri;
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n,q;
    cin >> n >> q;

    for(int i=1;i<=n;i++){
        parent[i].gia_tri = i;
        parent[i].dem = 1;
    }

    for(int i=0;i<q;i++){
        string s;
        cin >> s;

        if(s == "union"){
            long long u,v;
            cin >> u >> v;
            onion(u,v);
        }else{
            long long u;
            cin >> u;
            cout << parent[u].be_nhat << " " << parent[u].lon_nhat << " " << parent[u].dem << "\n";
        }
    }
}