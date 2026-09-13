
#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    //freopen("NGUYENAM.TXT", "r", stdin);

    string s;
    getline(cin, s);

    int dema = 0, deme = 0, demI = 0, demo = 0, demu = 0;
    for(int i=0;i<s.size();i++){
        if(s[i] == 'a' || s[i] == 'A') dema++;
        else if(s[i] == 'e' || s[i] == 'E') deme++;
        else if(s[i] == 'i' || s[i] == 'I') demI++;
        else if(s[i] == 'o' || s[i] == 'O') demo++;
        else if(s[i] == 'u' || s[i] == 'U') demu++;
    }

    if(dema > 0){
        bool so_dau_tien = false;
        cout << "a:" << dema << ":";
        for(int i=0;i<s.size();i++){
            if(s[i] == 'a' || s[i] == 'A'){
                if(so_dau_tien){
                    cout << ", " << i+1;
                }else{
                    cout << i+1;
                    so_dau_tien = true;
                }
            }
        }
        cout << "\n";
    }

    if(deme > 0){
        bool so_dau_tien = false;
        cout << "e:" << deme << ":";
        for(int i=0;i<s.size();i++){
            if(s[i] == 'e' || s[i] == 'E'){
                if(so_dau_tien){
                    cout << ", " << i+1;
                }else{
                    cout << i+1;
                    so_dau_tien = true;
                }
            }
        }
        cout << "\n";
    }

    if(demI > 0){
        bool so_dau_tien = false;
        cout << "i:" << demI << ":";
        for(int i=0;i<s.size();i++){
            if(s[i] == 'i' || s[i] == 'I'){
                if(so_dau_tien){
                    cout << ", " << i+1;
                }else{
                    cout << i+1;
                    so_dau_tien = true;
                }
            }
        }
        cout << "\n";
    }

    if(demo > 0){
        bool so_dau_tien = false;
        cout << "o:" << demo << ":";
        for(int i=0;i<s.size();i++){
            if(s[i] == 'o' || s[i] == 'O'){
                if(so_dau_tien){
                    cout << ", " << i+1;
                }else{
                    cout << i+1;
                    so_dau_tien = true;
                }
            }
        }
        cout << "\n";
    }

    if(demu > 0){
        bool so_dau_tien = false;
        cout << "u:" << demu << ":";
        for(int i=0;i<s.size();i++){
            if(s[i] == 'u' || s[i] == 'U'){
                if(so_dau_tien){
                    cout << ", " << i+1;
                }else{
                    cout << i+1;
                    so_dau_tien = true;
                }
            }
        }
        cout << "\n";
    }

    return 0;
}