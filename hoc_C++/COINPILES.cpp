//Nếu có ai đọc đến bài này nhớ bảo thg owner ghi cái link vào nhà ns đang mất mạng nên vậy đó :>
#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    for(int i=0;i<n;i++){
        long long a,b;
        cin >> a >> b;

        long long sum = a + b;

        if(sum % 3 == 0 && max(a,b) <= 2 * min(a,b)){
            cout << "YES" << "\n";
        }else{
            cout << "NO" << "\n";
        }
    }
    return 0;
}