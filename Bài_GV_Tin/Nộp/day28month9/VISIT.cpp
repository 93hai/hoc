#include<bits/stdc++.h>
using namespace std;

struct DIEM{
    long long xang;
    long long thienha;
};

DIEM a[100005];

bool cmp(DIEM a, DIEM b){
    if(a.xang < b.xang) return a.xang < b.xang;
    return a.thienha > b.thienha;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n,b;
    cin >> n >> b;

    for(int i=0;i<n;i++){
        cin >> a[i].xang >> a[i].thienha;
    }

    sort(a, a+n, cmp);

    long long dem = 0;

    for(int i=0;i<n;i++){
        if(b >= a[i].xang){
            if((b / a[i].xang) > a[i].thienha){
                dem += a[i].thienha;
                b -= a[i].thienha * a[i].xang;
            }else{
                dem += floorl(b / a[i].xang);
                b = 0;
            }
        }
        if(b < 1) break;
    }
    cout << dem;
    return 0;
}