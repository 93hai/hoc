#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    freopen("CHUANHOA1.INP", "r", stdin);
    freopen("CHUANHOA1.OUT", "w", stdout);
    
    string s;
    getline(cin, s);
    s = " " + s;

    string a = "";
    long long dau = 0;
    long long cuoi = s.size()-1;

    while(s[dau] == ' ' || s[cuoi] == ' '){
        if(s[dau] == ' '){
            dau++;
        }
        if(s[cuoi] == ' '){
            cuoi--;
        }
    }

    if(s[dau] >= 'a' && s[dau] <= 'z'){
        a += s[dau] - 32;
    }else{
        a += s[dau];
    }

    for(int i = dau + 1;i <= cuoi;i++){
        if(s[i] == ' '){
            while(s[i] == ' '){
                i++;
            }
            a+= ' ';
        }
        if(s[i-1] == ' '){
            if(s[i] >= 'a' && s[i] <= 'z'){
                a += s[i] - 32;
            }else{
                a += s[i];
            }
        }else if(s[i-1] != ' '){
            if(s[i] >= 'A' && s[i] <= 'Z'){
                a += s[i] + 32;
            }else{
                a += s[i];
            }
        }
    }

    cout << a;
    return 0;
}