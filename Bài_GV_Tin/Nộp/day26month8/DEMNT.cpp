#include<bits/stdc++.h>
using namespace std;

const long long MAXN = 1000005;
bool sangso[MAXN + 1];

void sang(){
    for(int i=2;i<=MAXN;i++){
        sangso[i] = true;
    }

    sangso[0] = sangso[1] = false;

    for(int i=2;i*i<=MAXN;i++){
        if(sangso[i]){
            for(int j=i*i;j<=MAXN;j+=i){
                sangso[j] = false;
            }
        }
    }
}

long long doi_so(string s, int i){
    long long so = 0;
    for(int j=i;j<s.size();j++){
        if(s[j] >= '0' && s[j] <= '9'){
            so = so * 10 + (s[j] - '0');
        }else{
            break;
        }
    }
    return so;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    freopen("DEMNT.INP", "r", stdin);
    freopen("DEMNT.OUT", "w", stdout);

    string s;
    cin >> s;

    sang();

    long long dem = 0;
    for(int i=0;i<s.size();i++){
        if(s[i] >= '0' && s[i] <= '9'){
            long long so = 0;
            while(i<s.size()){
                if(s[i] >= '0' && s[i] <= '9'){
                    so = so * 10 + (s[i] - '0');
                }else{
                    break;
                }
                i++;
            }
            if(sangso[so]) dem++;
            i--;
        }
    }
    cout << dem;
    return 0;
}