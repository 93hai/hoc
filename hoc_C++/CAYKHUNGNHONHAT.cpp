//link bai: https://lqdoj.edu.vn/problem/mst
#include<bits/stdc++.h>
using namespace std;

struct DIEM{
    long long u;
    long long v;
    long long w;
};

DIEM a[20005];
long long parent[20005];

bool cmp(DIEM a, DIEM b){
    if(a.w != b.w) return a.w < b.w;
    return a.u < b.u;
}

long long find(long long u){
    if(u == parent[u]) return u;
    return parent[u] = find(parent[u]);
}

void onion(long long x, long long y){
    long long u = find(x);
    long long v = find(y);
    if(u != v){
        parent[v] = parent[u];
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n,m;
    cin >> n >> m;

    for(int i=1;i<=m;i++){
        cin >> a[i].u >> a[i].v >> a[i].w;
    }

    for(int i=1;i<=n;i++){
        parent[i] = i;
    }

    sort(a + 1, a+m + 1, cmp);

    long long trongso = 0;
    for(int i=1;i<=m;i++){
        if(find(a[i].u) != find(a[i].v)){
            onion(a[i].u,a[i].v);
            trongso+=a[i].w;
        }
    }
    cout << trongso;
    return 0;
}