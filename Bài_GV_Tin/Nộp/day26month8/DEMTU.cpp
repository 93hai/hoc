#include<bits/stdc++.h>
using namespace std;

long long a[1000005];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    freopen("DEMTU.INP", "r", stdin);
    freopen("DEMTU.OUT", "w", stdout);

    string s;
    getline(cin, s);

    long long dem = 0;
    long long check = 0;
    long long lon_nhat = 0;
    for(int i=0;i<s.size();i++){
        if(s[i] == ' '){
            if(dem > 0){
                if(a[dem] == 0) check++;
                a[dem]++;
            }
            dem = 0;
        }else{
            dem++;
        }

        lon_nhat = max(lon_nhat, dem);
    }

    if(dem > 0){
        if(a[dem] == 0) check++;
        a[dem]++;
    }

    cout << check << "\n";
    for(int i = 0;i<=lon_nhat;i++){
        if(a[i] > 0){
            cout << i << " " << a[i] << "\n";
        }
    }
    return 0;
}