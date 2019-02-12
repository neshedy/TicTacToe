//a simple TicTacToe program in cpp
#include <iostream>

using namespace std;

class MyClass {
	public:
	char tttarray[3][3] = {{'-','-','-',},{'-','-','-',},{'-','-','-',},};
        int x, y;
	
	void DisplayBoard(){
	for (int i = 0; i < 3; i ++) {
			for (int j = 0; j < 2; j++) {
				cout << tttarray[i][j];
			}
			cout << tttarray[i][2] << endl;
		}
	}
	
    void GetInput(const char* whoami){
        cout << "Player " << whoami << " enter x coordinate" << endl;
        cin >> x;
        cout << "Player " << whoami << " enter y coordinate" << endl;
        cin >> y;
	}

	bool CheckWinner(const char ali){
		if (tttarray[0][0] == ali && tttarray[0][1] == ali && tttarray[0][2] == ali ||
			tttarray[1][0] == ali && tttarray[1][1] == ali && tttarray[1][2] == ali ||
			tttarray[2][0] == ali && tttarray[2][1] == ali && tttarray[2][2] == ali ||
			tttarray[0][0] == ali && tttarray[1][0] == ali && tttarray[2][0] == ali ||
			tttarray[0][1] == ali && tttarray[1][1] == ali && tttarray[2][1] == ali ||
			tttarray[0][2] == ali && tttarray[1][2] == ali && tttarray[2][2] == ali ||
			tttarray[0][0] == ali && tttarray[1][1] == ali && tttarray[2][2] == ali ||
			tttarray[0][2] == ali && tttarray[1][1] == ali && tttarray[2][0] == ali)
				return true;
			else 
				return false;
	}
	
	bool CheckDraw(const char bob) {
		if (tttarray[0][1] != bob && tttarray[0][1] != bob && tttarray[0][2] != bob &&
			tttarray[1][0] != bob && tttarray[1][1] != bob && tttarray[1][2] != bob &&
			tttarray[2][0] != bob && tttarray[2][1] != bob && tttarray[2][2] != bob) 
			return true;
		else
			return false;
	}
	
    bool CheckSpace(int x, int y){
        if (tttarray[x][y] == 'X' || tttarray[x][y] == 'O') {
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
			MyObject.GetInput("one");
			if (MyObject.CheckSpace(MyObject.x, MyObject.y) == false)
            playone = false;
		}
            MyObject.tttarray[MyObject.x][MyObject.y] = 'X';
			if (MyObject.CheckWinner('X') == true) {
				cout << "playerone wins" << endl;
				break;
		}
		if (MyObject.CheckDraw('-') == true) {
			cout << "Draw" << endl;
			break;
		}
		
		MyObject.DisplayBoard();
		bool playtwo = true;
		while (playtwo == true) {
			MyObject.GetInput("two");
            if (MyObject.CheckSpace(MyObject.x,MyObject.y) == false)
				playtwo = false;
		}
		MyObject.tttarray[MyObject.x][MyObject.y] = 'O';
		if (MyObject.CheckWinner('O') == true) {
			cout << "Playertwo wins" << endl;
			break;
		}
		if (MyObject.CheckDraw('-') == true) {
			cout << "Draw" << endl;
			break;
		}
	}
	int tempint;
	cin >> tempint;
}
