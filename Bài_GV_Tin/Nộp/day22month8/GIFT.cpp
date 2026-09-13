#include<bits/stdc++.h>
using namespace std;

long long a[1005];
bool dp[5000005];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    freopen("GIFT.INP", "r", stdin);
    freopen("GIFT.OUT", "w", stdout);

    long long n,sum = 0;
    cin >> n;

    for(int i=0;i<n;i++){
        cin >> a[i];
        sum += a[i];
    }

    dp[0] = true;

    for(int i=0;i<n;i++){
        for(long long j=sum/2;j>=a[i];j--){
            if(dp[j-a[i]]){
                dp[j] = true;
            }
        }
    }

    for(int i=sum/2;i>=0;i--){
        if(dp[i]){
            sum = abs(sum - i*2);
            break;
        }
    }

    cout << sum;
    return 0;
}