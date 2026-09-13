#include<bits/stdc++.h>
using namespace std;

bool so_sanh(string a, string b){
    long long i = 0;
    long long j = 0;
    while(a[i] == '0' && i < a.size()){
        i++;
    }
    while(b[j] == '0' && j < b.size()){
        j++;
    }

    if(a.size() - i > b.size() - j){
        return true;
    }else if(a.size() - i < b.size() - j){
        return false;
    }else{
        while(i<a.size() && j < b.size()){
            if((a[i] - '0') > (b[j] - '0')){
                return true;
            }else if((a[i] - '0') < (b[j] - '0')){
                return false;
            }else{
                i++;
                j++;
            }
        }
        return true;
    }
    
    return false;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    freopen("TIMKHOA.INP", "r", stdin);
    freopen("TIMKHOA.OUT", "w", stdout);

    string s;
    cin >> s;
    string lon_nhat = "0";
    for(int i=0;i<s.size();i++){
        bool flag = false;
        string test = "";
        while(i < s.size() && s[i] >= '0' && s[i] <= '9'){
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
        if(so_sanh(test, lon_nhat)){
            lon_nhat = test;
        }
    }
    cout << lon_nhat;
    return 0;
}