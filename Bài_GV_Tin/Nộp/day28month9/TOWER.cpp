#include<bits/stdc++.h>
using namespace std;

struct DIEM{
    long long x;
    long long y;
    long long z;    
};

DIEM he[5005];
long long cao[5005];
long long vitri[5005];

bool cmp(DIEM a, DIEM b){
    if(a.y != b.y) return a.y > b.y;
    if(a.z != b.z) return a.z > b.z;
    return a.x > b.x;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    freopen("TOWER.INP", "r", stdin);
    freopen("TOWER.OUT", "w", stdout);

    long long n;
    cin >> n;

    for(int i=0;i<n;i++){
        cin >> he[i].x >> he[i].y >> he[i].z;
        if(he[i].x > he[i].y){
            long long temp = he[i].x;
            he[i].x = he[i].y;
            he[i].y = temp;
        }
        if(he[i].x > he[i].z){
            long long temp = he[i].x;
            he[i].x = he[i].z;
            he[i].z = temp;
        }
        if(he[i].y > he[i].z){
            long long temp = he[i].y;
            he[i].y = he[i].z;
            he[i].z = temp;
        }
    }

    sort(he, he + n, cmp);

    long long cao1 = 0;
    long long vitri1 = 0;

    for(int i=0;i<n;i++){
        cao[i] = he[i].x;
        vitri[i] = 1;
        for(int j=0;j<i;j++){
            if(he[j].y >= he[i].y && he[j].z >= he[i].z){
                long long m = cao[j] + he[i].x;
                long long n = vitri[j] + 1;

                if(m > cao[i]){
                    cao[i] = m;
                    vitri[i] = n;
                }else if(m == cao[i] && n > vitri[i]){
                    vitri[i] = n;
                }
            }
        }
        if(cao[i] > cao1){
            cao1 = cao[i];
            vitri1 = vitri[i];
        }else if(cao[i] == cao1 && vitri[i] > vitri1){
            vitri1 = vitri[i];
        }
    }
    cout << vitri1 << " " << cao1;
    return 0;
}