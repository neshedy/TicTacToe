#include <iostream>

using namespace std;

class tttClass{
	public:
		void playeronestart() {
			cout << "Player one start" << endl;
		}
		void player1x() {
			cout << "Playerone enter x coord" << endl;
		}
		void player1y() {
			cout << "Playerone enter y coord" << endl;
		}
		void Error() {
			cout << "Space Taken" << endl;
		}
		void playertwostart() {
			cout << "Player two start" << endl;
		}
		void player2x() {
			cout << "Playertwo enter x coord" << endl;
		}
		void player2y() {
			cout << "Playertwo enter y coord" << endl;
		}
		void playeronewin() {
			cout << "Player One wins" << endl;
		}
		void playertwowin() {
			cout << "Player Two wins" << endl;
		}
};

int main() {
	
	int gamemode;
	tttClass tttObject;
	
int tttarray [3][3] = {{0,0,0},{0,0,0},{0,0,0}};

		cout << tttarray[0][0] << tttarray [0][1] << tttarray [0][2] << endl;
		cout << tttarray[1][0] << tttarray [1][1] << tttarray [1][2] << endl;
		cout << tttarray[2][0] << tttarray [2][1] << tttarray [2][2] << endl;
		

game:
int player1y;
int player1x;
tttObject.playeronestart();
playeroneplay:
tttObject.player1x();
cin >> player1y;
tttObject.player1y();
cin >> player1x;
if (tttarray[player1x][player1y] == 1 || tttarray[player1x][player1y] == 2)
{
	tttObject.Error();
	goto playeroneplay;
}
else
tttarray [player1x][player1y] = 1;

		cout << tttarray[0][0] << tttarray [0][1] << tttarray [0][2] << endl;
		cout << tttarray[1][0] << tttarray [1][1] << tttarray [1][2] << endl;
		cout << tttarray[2][0] << tttarray [2][1] << tttarray [2][2] << endl;

if ((tttarray[0][0] == 1 && tttarray [0][1] == 1 && tttarray [0][2] == 1)
|| (tttarray[1][0] == 1 && tttarray [1][1] == 1 && tttarray [1][2] == 1)
|| (tttarray[2][0] == 1 && tttarray [2][1] == 1 && tttarray [2][2] == 1)
|| (tttarray[0][0] == 1 && tttarray [1][0] == 1 && tttarray [2][0] == 1)
|| (tttarray[0][1] == 1 && tttarray [1][1] == 1 && tttarray [2][1] == 1)
|| (tttarray[0][2] == 1 && tttarray [1][2] == 1 && tttarray [2][2] == 1)
|| (tttarray[0][0] == 1 && tttarray [1][1] == 1 && tttarray [2][2] == 1)
|| (tttarray[0][2] == 1 && tttarray [1][1] == 1 && tttarray [2][0] == 1)
){
	tttObject.playeronewin();
	int test;
	cin >> test;
	return 0;
}

int player2y;
int player2x;
tttObject.playertwostart();
playertwoplay:
tttObject.player2x();
cin >> player2y;
tttObject.player2y();
cin >> player2x;
if (tttarray[player2x][player2y] == 1 || tttarray[player2x][player2y] == 2)
{
	tttObject.Error();
	goto playertwoplay;
}
else
tttarray [player2x][player2y] = 2;

		cout << tttarray[0][0] << tttarray [0][1] << tttarray [0][2] << endl;
		cout << tttarray[1][0] << tttarray [1][1] << tttarray [1][2] << endl;
		cout << tttarray[2][0] << tttarray [2][1] << tttarray [2][2] << endl;
		

if ((tttarray[0][0] == 2 && tttarray [0][1] == 2 && tttarray [0][2] == 2)
|| (tttarray[1][0] == 2 && tttarray [1][1] == 2 && tttarray [1][2] == 2)
|| (tttarray[2][0] == 2 && tttarray [2][1] == 2 && tttarray [2][2] == 2)
|| (tttarray[0][0] == 2 && tttarray [1][0] == 2 && tttarray [2][0] == 2)
|| (tttarray[0][1] == 2 && tttarray [1][1] == 2 && tttarray [2][1] == 2)
|| (tttarray[0][2] == 2 && tttarray [1][2] == 2 && tttarray [2][2] == 2)
|| (tttarray[0][0] == 2 && tttarray [1][1] == 2 && tttarray [2][2] == 2)
|| (tttarray[0][2] == 2 && tttarray [1][1] == 2 && tttarray [2][0] == 2)
){
	tttObject.playertwowin();
	int test;
	cin >> test;
	return 0;
}
goto game;
}
