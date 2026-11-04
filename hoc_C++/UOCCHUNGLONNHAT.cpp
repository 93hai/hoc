// tí nữa nhớ nhắc thg này thêm link bài ở LQDOJ nha nhà nó đnag mất mạng :> 
#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    int MAXN = -1;
    map<int, int> he;
    for(int i=0;i<n;i++){
        int x;
        cin >> x;
        he[x]++; 
        MAXN = max(MAXN, x);
    }

    int UCLN = 1;
    int d = MAXN;
    while(d > 1){
        int cost = 0;
        for(int i=d;i<=MAXN;i+=d){
            cost += he[i];
        }
        if(cost >= 2){
            UCLN = d;
            break;
        }
        d--;
    }
    cout << UCLN << "\n";
}