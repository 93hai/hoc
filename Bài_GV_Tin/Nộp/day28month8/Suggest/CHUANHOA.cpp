#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    //freopen("CHUANHOA.INP", "r", stdin);
    //freopen("CHUANHOA.OUT", "w", stdout);

    string s;
    getline(cin, s);
    s = '#' + s + '#';
    string real = "";

    for(int i=1;i<s.size()-1;i++){
        if(s[i-1] == '[' || s[i-1] == '('){
            while(s[i] == ' '){
                i++;
            }
            real += s[i];
            continue;
        }else if(s[i] == ']' || s[i] == ')'){
            long long g = real.size() - 1;
            while(real[g] == ' '){
                real.pop_back();
                g--;
            }
        }else if((s[i] == '.' || s[i] == ',' || s[i] == ';'
            || s[i] == '?' || s[i] == '!') && s[i-1] == ' '){
                real.pop_back();
                real += s[i];
                continue;
        }
        if(s[i-1] == '.' || s[i-1] == ',' || s[i-1] == ';'
            || s[i-1] == '?' || s[i-1] == '!'){
                real += " ";
                continue;
        }
        if(s[i] == ' '){
            while(s[i] == ' '){
                i++;
            }
            i--;
            real += s[i];
        }else if(s[i] != ']' && s[i] != ')'){
            real += s[i];
        }
    }
    cout << real;
    return 0;
}
