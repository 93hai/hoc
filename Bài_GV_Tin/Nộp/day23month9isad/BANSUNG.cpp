#include<bits/stdc++.h>
using namespace std;

bool check(long long x, long long n, long long a[]){
    vector<long long> b
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n;
    cin >> n;

    vector<long long> a(n);
    for(int i=0;i<n;i++){
        cin >> a[i];
    }

    long long x = 1;
    while(!check(x,n, a)) x++;
    cout << x;
    return 0;
}