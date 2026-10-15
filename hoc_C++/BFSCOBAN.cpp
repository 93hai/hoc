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
    vector<vector<long long, long long>> d;

    visited[s] = true;
    q.push(s);
    dist[s] = 0;
    d.push_back({s, 0});

    while(!q.empty()){
        auto u = q.front();
        q.pop();

        for(auto v:a[u]){
            if(!visited[v]){
                visited[v] = true;
                q.push(v);
                dist[v] = dist[u] + 1; 
                d.push_back({v, dist[v]});
            }
        }
    }

    sort(d.begin(), d.end());

    for(auto i : d){
        cout << 
    }
    return 0;
}