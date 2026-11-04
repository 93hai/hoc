//thg này đang mất wifi khi thg nào đọc file thấy cái này nhớ nhắc nó thêm link vào :> HSG 9 Hà Tĩnh 2026 - Ước Nguyên Tố
#include<bits/stdc++.h>
using namespace std;

const int MAXN = 1000000;
vector<int> dem(MAXN + 5, 0);
int dp[MAXN+5][10];

void sang(){
    for(int i=2;i<=MAXN;i++){
        if(dem[i] == 0){
            for(int j=i;j<=MAXN;j+=i){
                dem[j]++;
            }
        }
    }

    for(int i=0;i<=7;i++){
        for(int j=1;j<=MAXN;j++){
            dp[j][i] = dp[j-1][i];
            if(dem[j] >= i){
                dp[j][i]++;
            }
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    sang();

    int q;
    cin >> q;

    for(int i=0;i<q;i++){
        int a,b,k;
        cin >> a >> b >> k;
        cout << dp[b][k] - dp[a-1][k] << "\n";
    }
    return 0;
}