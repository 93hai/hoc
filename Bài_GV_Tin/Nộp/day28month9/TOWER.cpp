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
        
    }

    sort(he, he + n, cmp);
    return 0;
}