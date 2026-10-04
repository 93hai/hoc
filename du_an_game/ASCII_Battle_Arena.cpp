#include<bits/stdc++.h>
using namespace std;

long long bot_train(long long ATK_ENEMY, long long ATK_YOU, long long HP_YOU, long long HP_ENEMY){
	long long dap_an;
	if(HP_ENEMY <= ATK_YOU){
		if(HP_ENEMY <= ATK_YOU / 2){
			dap_an = 3;
			return dap_an;
		}else{
			dap_an = 2;
			return dap_an;
		}
	}else{
		dap_an = 1;
		return dap_an;
	}
	//se cap nhat sau
}

int main(){
	string x;
	do{
		cout << "========================" << "\n";
    	cout << "      BATTLE ARENA		 " << "\n";
		cout << "========================" << "\n";
		cout << "\n" << "\n";
	
		cout << " PLAY [1]     QUIT[2]   " << "\n";
		long long n;
		cout << ">";
		cin >> n;
		if(n != 1){
			cout << "SEE YOU AGAIN\n";
			return 0;
		}
		
		long long HP_YOU = 100, HP_ENEMY = 100;
		long long a = 1, b = 100;
		long long ATK_YOU = rand() % (b - a + 1) + a;
		long long ATK_ENEMY = rand() % (b - a + 1) + a;
		while(HP_YOU > 0 && HP_ENEMY > 0){
			cout << "\n\n\n\n\n";
			cout << "========================" << "\n";
    		cout << "      BATTLE ARENA		 " << "\n";
			cout << "========================" << "\n";
			cout << "\n" << "\n";
			
			cout << "YOU			ENEMY" << "\n";
			cout << "HP: " << HP_YOU << "			HP: " << HP_ENEMY << "\n";
			cout << "ATK: " << ATK_YOU << "			ATK: " << ATK_ENEMY << "\n";
			
			cout << "\n\n";
			
			cout << "1. attack" << "\n";
			cout << "2. heal" << "\n";
			cout << "3. run" << "\n";
			
			cout << "\n\n";
			long long dap_an;
			cout << ">";
			cin >> dap_an;
			
			long long dap_an_bot = bot_train(ATK_ENEMY, ATK_YOU, HP_YOU, HP_ENEMY);
			
			long long flag = false;
			if(dap_an_bot == 1){
				flag = true;
			}else if(dap_an_bot == 2){
				HP_ENEMY += 30;
			}else{
				ATK_YOU = ATK_YOU / 3;
			}
			
			if(dap_an == 1){
				HP_ENEMY = HP_ENEMY - ATK_YOU;
			}else if(dap_an == 2){
				HP_YOU += 30;
			}else if(dap_an == 3){
				ATK_ENEMY = ATK_ENEMY / 3;
				if(flag) HP_YOU = HP_YOU - ATK_ENEMY;
			}else{
				cout << "ERROR";
				return 0;
			}
		}
		if(HP_YOU <= 0 && HP_ENEMY <= 0){
			cout << "DRAW" << "\n";
		}else if(HP_ENEMY <= 0){
			cout << "WIN" << "\n";
		}else{
			cout << "LOSE" << "\n";
		}
		
		cout << "AGAIN[YES/NO]: ";
		cin >> x; 
	}while(x == "YES");

	cout << "\nSEE YOU AGAIN";
	return 0;
}
