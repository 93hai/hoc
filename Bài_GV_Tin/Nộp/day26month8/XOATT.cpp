#include<bits/stdc++.h>
using namespace std;

vector<int> a[26];
bool b[26];
bool hoanthanh[26];

void tao_mang(){
    for(int i=0;i<26;i++){
        b[i] = false;
    }
}

void check(){
    for(int i=0;i<26;i++){
        hoanthanh[i] = false;
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    freopen("XOATT.INP", "r", stdin);
    freopen("XOATT.OUT", "w", stdout);

    long long n,q;
    cin >> n >> q;
    
    bool consong[n+5];

    for(int i=1;i<=n;i++){
        string s;
        cin >> s;
        consong[i] = true;
        tao_mang();
        for(int j=0;j<s.size();j++){
            if(s[j] >= 'a' && s[j] <= 'z'){
                if(!b[s[j] - 'a']){
                    a[s[j] - 'a'].push_back(i);
                    b[s[j] - 'a'] = true;
                }
            }else if(s[j] >= 'A' && s[j] <= 'Z'){
                if(!b[s[j] - 'A']){
                    a[s[j] - 'A'].push_back(i);
                    b[s[j] - 'A'] = true;
                }
            }
        }
    }

    long long con_lai = n;
    for(int i=0;i<q;i++){
        char s;
        cin >> s;
        if(!hoanthanh[s - 'a']){
            for(auto i : a[s - 'a']){
                if(consong[i]){
                    consong[i] = false;
                    con_lai--;
                }
            }
        }
        hoanthanh[s - 'a'] = true;
        cout << con_lai << "\n";
    }

    return 0;
}