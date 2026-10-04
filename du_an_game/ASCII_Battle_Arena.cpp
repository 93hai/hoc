#include<bits/stdc++.h>
using namespace std;

//ham bot choi voi player
long long bot_train(long long ATK_ENEMY, long long ATK_YOU,
					long long HP_YOU, long long HP_ENEMY, 
					long long solanhoiHP_ENEMY){
	long long dap_an;
	if(HP_ENEMY <= ATK_YOU){
		if(HP_ENEMY <= ATK_YOU / 2){
			dap_an = 3;
		}else if(HP_ENEMY > ATK_YOU / 2 && solanhoiHP_ENEMY > 0 && HP_ENEMY <= 70){
			dap_an = 2;
		}
	}else{
		dap_an = 1;
	}
	return dap_an;
	//se cap nhat sau
}

int main(){
	string x;
	do{
		//menu
		cout << "========================" << "\n";
    	cout << "      BATTLE ARENA		 " << "\n";
		cout << "========================" << "\n";
		cout << "\n" << "\n";
	
		cout << " PLAY [1]     QUIT[2]   " << "\n";
		long long n;
		cout << ">";
		cin >> n;
		if(n != 1){ //neu nhu ko choi thi quit
			cout << "SEE YOU AGAIN\n";
			return 0;
		}
		
		//cac bien can thiet
		long long HP_YOU = 100, HP_ENEMY = 100; 		//mau cua bot va player
		long long a = 1, b = 100; 						//tan cong du doan tu 1-100
		long long ATK_YOU = rand() % (b - a + 1) + a;	//du doan tan cong cua player
		long long ATK_ENEMY = rand() % (b - a + 1) + a; //du doan tan cong cua bot
		long long solanHP_YOU = 3;						//so lan dc hoi HP cua player
		long long solanHP_ENEMY = 3;					//so lan dc hoi HP cua bot
		
		//core game
		while(HP_YOU > 0 && HP_ENEMY > 0){ //chay neu nhu mau cua 2 thg van >100
			//menu game khi bat dau
			cout << "\n\n\n\n\n";
			cout << "========================" << "\n";
    		cout << "      BATTLE ARENA		 " << "\n";
			cout << "========================" << "\n";
			cout << "\n" << "\n";
			
			//so lieu cua bot va player
			cout << "YOU			ENEMY" << "\n";
			cout << "HP: " << HP_YOU << "			HP: " << HP_ENEMY << "\n"; //mau bot va player
			cout << "ATK: " << ATK_YOU << "			ATK: " << ATK_ENEMY << "\n"; //suc tan cong cua bot va player
			
			cout << "\n\n";
			
			//lua chon
			cout << "1. attack" << "\n";
			cout << "2. heal" << "\n";
			cout << "3. run" << "\n";
			
			cout << "\n\n";
			
			//lua chon cua player
			long long dap_an;
			cout << ">";
			cin >> dap_an;
			
			//dap an cua bot
			long long dap_an_bot = bot_train(ATK_ENEMY, ATK_YOU, HP_YOU, HP_ENEMY, solanHP_ENEMY);
			
			long long flag = false;
			
			//core bot
			if(dap_an_bot == 1){
				flag = true;
			}else if(dap_an_bot == 2){
				if(solanHP_YOU > 0){
					HP_ENEMY += 30;
					if(HP_ENEMY > 100) HP_ENEMY = 100;
					solanHP_YOU--;
				}
			}else{
				ATK_YOU = ATK_YOU / 3;
			}
			
			//core player
			if(dap_an == 1){
				HP_ENEMY = HP_ENEMY - ATK_YOU;
			}else if(dap_an == 2){
				HP_YOU += 30;
				if(HP_YOU > 100) HP_YOU = 100;
			}else if(dap_an == 3){
				ATK_ENEMY = ATK_ENEMY / 3;
			}else{
				cout << "ERROR";
				return 0;
			}
			if(flag) HP_YOU = HP_YOU - ATK_ENEMY;

			cout << "DAPAN PLAYER: " << dap_an << "\n";
			cout << "DAPAN BOT: " << dap_an_bot << "\n";
		}
		
		//ket qua
		if(HP_YOU <= 0 && HP_ENEMY <= 0){
			cout << "DRAW" << "\n";
		}else if(HP_ENEMY <= 0){
			cout << "WIN" << "\n";
		}else{
			cout << "LOSE" << "\n";
		}
		
		//choi lai thi nhan YES
		cout << "AGAIN[YES/NO]: ";
		cin >> x; 
	}while(x == "YES");

	cout << "\nSEE YOU AGAIN";
	return 0;
}
