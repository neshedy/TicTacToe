#include <iostream>

using namespace std;

class MyClass {
	public:
	char tttarray[3][3] = {{'-','-','-',},{'-','-','-',},{'-','-','-',},};
	int playeronex, playeroney, playertwox, playertwoy;
	
	void DisplayBoard(){
	for (int i = 0; i < 3; i ++) {
			for (int j = 0; j < 2; j++) {
				cout << tttarray[i][j];
			}
			cout << tttarray[i][2] << endl;
		}
	}
	
	void PlayerOne(){
		cout << "Player one enter x coordinate" << endl;
		cin >> playeronex;
		cout << "Player one enter y coordinate" << endl;
		cin >> playeroney;
	}
	
	void PlayerTwo(){
		cout << "Player two enter x coordinate" << endl;
		cin >> playertwox;
		cout << "Player two enter y coordinate" << endl;
		cin >> playertwoy;
	}
	
	bool CheckWinOne(){
		if (tttarray[0][0] == 'X' && tttarray[0][1] == 'X' && tttarray[0][2] == 'X' ||
			tttarray[1][0] == 'X' && tttarray[1][1] == 'X' && tttarray[1][2] == 'X' ||
			tttarray[2][0] == 'X' && tttarray[2][1] == 'X' && tttarray[2][2] == 'X' ||
			tttarray[0][0] == 'X' && tttarray[1][0] == 'X' && tttarray[2][0] == 'X' ||
			tttarray[0][1] == 'X' && tttarray[1][1] == 'X' && tttarray[2][1] == 'X' ||
			tttarray[0][2] == 'X' && tttarray[1][2] == 'X' && tttarray[2][2] == 'X' ||
			tttarray[0][0] == 'X' && tttarray[1][1] == 'X' && tttarray[2][2] == 'X' ||
			tttarray[0][2] == 'X' && tttarray[1][1] == 'X' && tttarray[2][0] == 'X') {
				
				cout << "Playerone wins!" << endl;
				return true;
			}
			else 
				return false;
	}
	
	bool CheckWinTwo(){
		if (tttarray[0][0] == 'O' && tttarray[0][1] == 'O' && tttarray[0][2] == 'O' ||
			tttarray[1][0] == 'O' && tttarray[1][1] == 'O' && tttarray[1][2] == 'O' ||
			tttarray[2][0] == 'O' && tttarray[2][1] == 'O' && tttarray[2][2] == 'O' ||
			tttarray[0][0] == 'O' && tttarray[1][0] == 'O' && tttarray[2][0] == 'O' ||
			tttarray[0][1] == 'O' && tttarray[1][1] == 'O' && tttarray[2][1] == 'O' ||
			tttarray[0][2] == 'O' && tttarray[1][2] == 'O' && tttarray[2][2] == 'O' ||
			tttarray[0][0] == 'O' && tttarray[1][1] == 'O' && tttarray[2][2] == 'O' ||
			tttarray[0][2] == 'O' && tttarray[1][1] == 'O' && tttarray[2][0] == 'O') {
				cout << "Playertwo wins!" << endl;
				return true;
			}
			else
				return false;
	}
	
	bool CheckSpaceOne(){
		if (tttarray[playeronex][playeroney] == 'X' || tttarray[playeronex][playeroney] == 'O') {
			cout << "Error space taken" << endl;
			return true;
		}
		else
			return false;
	}
	
	bool CheckSpaceTwo(){
		if (tttarray[playertwox][playertwoy] == 'X' || tttarray[playertwox][playertwoy] == 'O') {
			cout << "Error space taken" << endl;
			return true;
		}
		else
			return false;
	}
};

int main() {
	MyClass MyObject;
	bool shouldplay = true;
	while(shouldplay == true){
		MyObject.DisplayBoard();
		bool playone = true;
		while (playone == true) {
			MyObject.PlayerOne();
		if (MyObject.CheckSpaceOne() == false)
			playone = false;
		}
		MyObject.tttarray[MyObject.playeronex][MyObject.playeroney] = 'X';
		if (MyObject.CheckWinOne() == true) {
			shouldplay = false;
			break;
		}
		
		MyObject.DisplayBoard();
		bool playtwo = true;
		while (playtwo == true) {
			MyObject.PlayerTwo();
		if (MyObject.CheckSpaceTwo() == false)
			playtwo = false;
		}
		MyObject.tttarray[MyObject.playertwox][MyObject.playertwoy] = 'O';
		if (MyObject.CheckWinTwo() == true) {
			shouldplay = false;
			break;
		}
	}
	int tempint;
	cin >> tempint;
}
