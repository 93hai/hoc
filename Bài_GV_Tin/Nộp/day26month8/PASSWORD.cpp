#include<bits/stdc++.h>
using namespace std;

void sai(string s){
    cout << "NO ";
    for(int i=s.size()-1;i>=0;i--){
        cout << s[i];
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    cin >> s;
    
    if(s.size() < 8){
        sai(s);
        return 0;
    }

    bool hoa = false;
    bool thuong = false;
    bool so = false;
    bool dac_biet = false;
    for(int i=0;i<s.size();i++){
        if(s[i] >= 'A' && s[i] <= 'Z') hoa = true;
        else if(s[i] >= 'a' && s[i] <= 'z') thuong = true;
        else if(s[i] >= '0' && s[i] <= '9') so = true;
        else dac_biet = true;
    }
    if(hoa && thuong && so && dac_biet){
        cout << "YES " << s;
    }else{
        sai(s);
        return 0;
    }
    return 0;
}