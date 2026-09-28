#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n;
    cin >> n;

    vector<long long> a(n);

    long long nam = 0;
    long long konam = 0;
    for(int i=0;i<n;i++){
        cin >> a[i];
        if(a[i] % 5 == 0) nam++;
        else konam++;
    }

    long long sum = konam;

    long long dem = nam - 1;
    while(dem > 0){
        sum *= konam;
        dem--;
    }
    cout << sum;
}