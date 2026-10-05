#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    long long t;
    cin >> t;

    while(t > 0){
        long long sum = 0;
        char a[15][15];

        for(int i=1;i<=10;i++){
            for(int j=1;j<=10;j++){
                cin >> a[i][j];

                if(a[i][j] == 'X'){
                    long long I = i;
                    long long J = j;
                    if(i > 5){
                        I = abs(11 - i);
                    }
                    if(j > 5){
                        J = abs(11 - j);
                    }
                    sum += min(I,J);
                }
            }
        }
        cout << sum << "\n";
        t--;
    }
}