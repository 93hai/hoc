#include<bits/stdc++.h>
using namespace std;

struct DIEM{
    bool check;
    long long dem;
};

void sang(long long R, vector<bool> &sangso){
    sangso[0] = sangso[1] = false;
    for(long long i=2;i*i<=R;i++){
        if(sangso[i]){
            for(long long j=i*i;j<=R;j+=i){
                sangso[j] = false;;
            }
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    freopen("MASO.INP", "r", stdin);
    freopen("MASO.OUT", "w", stdout);
    
    long long l,r;
    cin >> l >> r;

    long long R = sqrtl(r);
    vector<bool> sangso(R + 5, true);

    sang(R,sangso);

    vector<long long> a(r - l + 2);
    vector<DIEM> he(r-l+2);

    for(int i=0;i<=r-l+1;i++){
        a[i] = l + i;
        he[i].check = false;
        he[i].dem = 0;
    }

    long long so_be_nhat = 2e18;
    long long tong = 0;
    
    for(long long i=2;i<=R;i++){
        if(sangso[i]){
            for(long long j = (((i + l - 1) / i)*i);j<=r;j+=i){
                long long id = j - l;

                long lan = 0;
                
                while(a[id] % i == 0){
                    a[id] /= i;
                    lan++;
                }

                if(lan > 0){
                    he[id].dem++;
                }

                if(lan > 1){
                    he[id].check = true;
                }
            }
        }
    }

    for(long long i=0;i<r-l+1;i++){
        if(a[i] > 1){
            he[i].dem++;
        }

        if(!he[i].check && he[i].dem == 3){
            tong++;
            so_be_nhat = min(so_be_nhat, i + l);
        }
    }
    cout << tong << " " << so_be_nhat;
    return 0;
}