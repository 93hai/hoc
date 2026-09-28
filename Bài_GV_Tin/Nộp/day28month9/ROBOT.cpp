#include<bits/stdc++.h>
using namespace std;

long long dp[10005][10005];

void build(long long n){
    long long goal = (n + 1) / 2;

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            long long dx = abs(goal - i);
            long long dy = abs(goal - j);

            dp[i][j] = 15 * min(dx, dy) + 10 * abs(dx - dy);
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    freopen("ROBOT.INP", "r", stdin);
    freopen("ROBOT.OUT", "w", stdout);

    long long n,k;
    cin >> n >> k;

    build(n);

    long long sum = 0;
    for(int i=0;i<k;i++){
        long long x,y;
        cin >> x >> y;

        sum += dp[x][y];
    }
    cout << sum;
    return 0;
}