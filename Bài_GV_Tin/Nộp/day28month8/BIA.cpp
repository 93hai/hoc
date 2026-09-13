#include<bits/stdc++.h>
using namespace std;

bool lon_hon(string a, string b){
    long long ben_a = 0, ben_b = 0;
    if(a.size() > b.size()){
        return true;
    }else if(a.size() < b.size()){
        return false;
    }else if(a.size() == b.size()){
        while(ben_a < a.size() && ben_b < b.size()){
            if(a[ben_a] - '0' > b[ben_b] - '0'){
                return true;
            }else if(a[ben_a] - '0' < b[ben_b] - '0'){
                return false;
            }else{
                ben_a++;
                ben_b++;
            }
        }
    }
    return true;
}

bool check(string s){
    long long dau = 0;
    long long cuoi = s.size()-1;

    while(dau <= cuoi){
        if(s[dau] == s[cuoi]){
            dau++;
            cuoi--;
        }else{
            return false;
        }
    }
    return true;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    freopen("BIA.INP", "r", stdin);
    freopen("BIA.OUT", "w", stdout);

    string s;
    getline(cin, s);

    s = s + '#';

    bool so_khong = false;
    string so_lon_nhat = "0";
    bool da_thay_doi = false;
    string test = "";
    for(int i=0;i<s.size();i++){
        if(i<s.size() && s[i] >= '0' && s[i] <= '9' && so_khong == false){
            while(i < s.size() && s[i] == '0') i++;
            so_khong = true;
        }

        if((s[i] >= '0' && s[i] <= '9')){
            test += s[i];
        }else{
            if(!test.empty() && check(test) && !lon_hon(so_lon_nhat, test)){
                so_lon_nhat = test;
                da_thay_doi = true;
            }
            test = "";
            so_khong = false;
        }
    }
    if(!da_thay_doi){
        cout << "-1";
    }else{
        cout << so_lon_nhat;
    }
    return 0;
}