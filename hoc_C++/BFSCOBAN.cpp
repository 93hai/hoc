//link bai: https://lqdoj.edu.vn/problem/bfs
#include<bits/stdc++.h>
using namespace std;

const long long MAXN = 100005;
vector<long long> a[MAXN];
bool visited[MAXN];
long long dist[MAXN];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n,m,s;
    cin >> n >> m >> s;

    for(int i=0;i<m;i++){
        long long u, v;
        cin >> u >> v;
        a[u].push_back(v);
        a[v].push_back(u);
    }
    
    queue<long long> q;
    map<long long, long long> he;

    visited[s] = true;
    q.push(s);
    he[s] = 0;

    while(!q.empty()){
        auto u = q.front();
        q.pop();

        for(auto v:a[u]){
            if(!visited[v]){
                visited[v] = true;
                q.push(v);
                he[v] = he[u] + 1;
            }
        }
    }

    for(auto i:he){
        cout << i.first << " " << i.second << "\n";
    }
    return 0;
}