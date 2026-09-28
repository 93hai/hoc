#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    freopen("ROBOT.INP", "r", stdin);
    freopen("ROBOT.OUT", "w", stdout);

    long long n,k;
    cin >> n >> k;

    long long sum = 0;
    for(int i=0;i<k;i++){
        long long x,y;
        cin >> x >> y;

        long long goal = (n + 1) / 2;

        long long dx = abs(goal - x);
        long long dy = abs(goal - y);

        sum += 15 * min(dx, dy) + 10 * abs(dx - dy);
    }
    cout << sum;
    return 0;
}