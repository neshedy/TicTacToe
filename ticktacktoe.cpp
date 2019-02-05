#include <iostream>

using namespace std;

int tttarray [3][3] = {{0,0,0},{0,0,0},{0,0,0}};
int playeroney, playeronex, playertwoy, playertwox;

class tttClass {
	public:
		void playeronestart() {
			cout << "Player one start" << endl;
		}
		void playeronex() {
			cout << "Playerone enter x coord" << endl;
		}
		void playeroney() {
			cout << "Playerone enter y coord" << endl;
		}
		void Error() {
			cout << "Space Taken" << endl;
		}
		void playertwostart() {
			cout << "Player two start" << endl;
		}
		void playertwox() {
			cout << "Playertwo enter x coord" << endl;
		}
		void playertwoy() {
			cout << "Playertwo enter y coord" << endl;
		}
		void playeronewin() {
			cout << "Player One wins" << endl;
		}
		void playertwowin() {
			cout << "Player Two wins" << endl;
		}
		void coutArr() {
		cout << tttarray[0][0] << tttarray [0][1] << tttarray [0][2] << endl;
		cout << tttarray[1][0] << tttarray [1][1] << tttarray [1][2] << endl;
		cout << tttarray[2][0] << tttarray [2][1] << tttarray [2][2] << endl;
		}
};

int checkwinone() {
	if 		((tttarray[0][0] == 1 && tttarray [0][1] == 1 && tttarray [0][2] == 1)
			|| (tttarray[1][0] == 1 && tttarray [1][1] == 1 && tttarray [1][2] == 1)
			|| (tttarray[2][0] == 1 && tttarray [2][1] == 1 && tttarray [2][2] == 1)
			|| (tttarray[0][0] == 1 && tttarray [1][0] == 1 && tttarray [2][0] == 1)
			|| (tttarray[0][1] == 1 && tttarray [1][1] == 1 && tttarray [2][1] == 1)
			|| (tttarray[0][2] == 1 && tttarray [1][2] == 1 && tttarray [2][2] == 1)
			|| (tttarray[0][0] == 1 && tttarray [1][1] == 1 && tttarray [2][2] == 1)
			|| (tttarray[0][2] == 1 && tttarray [1][1] == 1 && tttarray [2][0] == 1))
	return 1;
	else 
	return 0;
}

int checkwintwo() {
	if 		((tttarray[0][0] == 2 && tttarray [0][1] == 2 && tttarray [0][2] == 2)
			|| (tttarray[1][0] == 2 && tttarray [1][1] == 2 && tttarray [1][2] == 2)
			|| (tttarray[2][0] == 2 && tttarray [2][1] == 2 && tttarray [2][2] == 2)
			|| (tttarray[0][0] == 2 && tttarray [1][0] == 2 && tttarray [2][0] == 2)
			|| (tttarray[0][1] == 2 && tttarray [1][1] == 2 && tttarray [2][1] == 2)
			|| (tttarray[0][2] == 2 && tttarray [1][2] == 2 && tttarray [2][2] == 2)
			|| (tttarray[0][0] == 2 && tttarray [1][1] == 2 && tttarray [2][2] == 2)
			|| (tttarray[0][2] == 2 && tttarray [1][1] == 2 && tttarray [2][0] == 2))
	return 1;
	else 
	return 0;
}

int checkgameend() {
	if 		((tttarray[0][0] != 0 && tttarray [0][1] != 0 && tttarray [0][2] != 0)
			&& (tttarray[1][0] != 0 && tttarray [1][1] != 0 && tttarray [1][2] != 0)
			&& (tttarray[2][0] != 0 && tttarray [2][1] != 0 && tttarray [2][2] != 0)
			&& (tttarray[0][0] != 0 && tttarray [1][0] != 0 && tttarray [2][0] != 0)
			&& (tttarray[0][1] != 0 && tttarray [1][1] != 0 && tttarray [2][1] != 0)
			&& (tttarray[0][2] != 0 && tttarray [1][2] != 0 && tttarray [2][2] != 0)
			&& (tttarray[0][0] != 0 && tttarray [1][1] != 0 && tttarray [2][2] != 0)
			&& (tttarray[0][2] != 0 && tttarray [1][1] != 0 && tttarray [2][0] != 0))
		return 1;
	else
		return 0;
}

int checkerrorone () {
	if (tttarray[playeronex][playeroney] == 1 || tttarray[playeronex][playeroney] == 2)
		return 1;
	else 
		return 0;
}

int checkerrortwo () {
	if (tttarray[playertwox][playertwoy] == 2 || tttarray[playertwox][playertwoy] == 1)
		return 1;
	else
		return 0;
}

int main() {
	tttClass tttObject;
	tttObject.coutArr();

	game:
	tttObject.playeronestart();
	
	playeroneplay:
	tttObject.playeronex();
	cin >> playeronex;
	tttObject.playeroney();
	cin >> playeroney;
	
	int errorresultone;
	errorresultone = checkerrorone();
	if (errorresultone == 1)
		{
			tttObject.Error();
			goto playeroneplay;
		}
	else
		tttarray [playeronex][playeroney] = 1;
	tttObject.coutArr();
	int winresult;
	winresult = checkwinone();
	if 	(winresult == 1)	
	{
		tttObject.playeronewin();
		int test;
		cin >> test;
		return 0;
	}
	int gameendresult;
	gameendresult = checkgameend();
	if (gameendresult == 1) {
		int tempend;
		cin >> tempend;
		return 0;
	}
	tttObject.playertwostart();
	
	playertwoplay:
	tttObject.playertwox();
	cin >> playertwox;
	tttObject.playertwoy();
	cin >> playertwoy;
	
	int errorresulttwo;
	errorresulttwo = checkerrortwo();
	if (errorresulttwo == 1)
	{
		tttObject.Error();
		goto playertwoplay;
	}
	else
	tttarray [playertwox][playertwoy] = 2;
	tttObject.coutArr();
	winresult = checkwintwo();
	if (winresult == 1)
	{
		tttObject.playertwowin();
		int test;
		cin >> test;
		return 0;
	}
	gameendresult = checkgameend();
	if (gameendresult == 1) {
		int tempend;
		cin >> tempend;
		return 0;
	}
	goto game;
}
