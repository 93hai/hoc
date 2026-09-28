#include<bits/stdc++.h>
using namespace std;

struct DIEM{
    long long x;
    long long y;
    long long z;    
};

DIEM he[5005];

bool cmp(DIEM a, DIEM b){
    if(a.x != b.x){
        return a.x < b.x;
    }
    return a.y * a.z > b.y * b.z;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

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
    }

    sort(he, he + n, cmp);

    long long cao = 0;
    long long dem = 0;
    for(int i=0;i<n;i++){
        cao += he[i].x;
        dem++;
    }
    cout << dem << " " << cao;
    return 0;
}