//bài tạo bởi AI
#include<bits/stdc++.h>
using namespace std;

const long long MAXN = 100005;
long long parent[MAXN];

long long find(long long u){
    if(u == parent[u]) return u;
    return parent[u] = find(parent[u]);
}

void onion(long long x, long long y){
    long long u = find(x);
    long long v = find(y);
    if(u != v){
        parent[u] = parent[v];
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n,q;
    cin >> n >> q;

    for(int i=1;i<=n;i++){
        parent[i] = i;
    }

    for(int i=0;i<q;i++){
        long long check, u, v;
        cin >> check >> u >> v;
        if(check == 1){
            onion(u,v);
        }else if(check == 2){
            if(find(u) == find(v)){
                cout << "YES" << "\n";
            }else{
                cout << "NO" << "\n";
            }
        }
    }
}