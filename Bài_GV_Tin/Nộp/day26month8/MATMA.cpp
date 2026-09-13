#include<bits/stdc++.h>
using namespace std;

bool so_sanh(string a, string b){
    long long i = 0;
    long long j = 0;
    while(i < a.size() && a[i] == '0'){
        i++;
    }
    while(j < b.size() && b[j] == '0'){
        j++;
    }

    if(a.size() - i > b.size() - j){
        return true;
    }else if(a.size() - i < b.size() - j){
        return false;
    }else{
        while(i < a.size() && j < b.size()){
            if(a[i] > b[j]){
                return true;
            }else if(a[i] < b[j]){
                return false;
            }else{
                i++;
                j++;
            }
        }
        return true;
    }
}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    freopen("MATMA.INP", "r", stdin);
    freopen("MATMA.OUT", "w", stdout);

    string s;
    cin >> s;

    string so_lon_nhat = "0";
    bool da_thay_doi = false;
    for(int i=0;i<s.size();i++){
        bool flag = false;
        string test = "";
        while(i < s.size() && s[i] >= '0' && s[i] <= '9'){
            da_thay_doi = true;
            if(s[i] != '0'){
                flag = true;
            }
            if(flag){
                test = test + s[i];
            }
            i++;
        }
        if(!flag){
            continue;
        }
        if(!so_sanh(so_lon_nhat, test)){
            so_lon_nhat = test;
        }
    }

    if(da_thay_doi) cout << so_lon_nhat;
    else cout << "-1";
    return 0;
}