#include <iostream>

using namespace std;

class blackjackClass {
	public:
		void welcometoblackjack() {
			cout << "Welcome to blackjack" << endl;
		}
};

int main() {

	blackjackClass blackjackObject;
	blackjackObject.welcometoblackjack();
	
	int a;
	int deckarray[13] = {2,3,4,5,6,7,8,9,10,10,10,10,a};
	
	int n = 1;
	int totalnum = 0;
	int acenum = 0;
	int acecount = 0;
	int twocount=0, threecount=0, fourcount=0, fivecount=0, sixcount=0, sevencount=0, eightcount=0, ninecount=0, tencount=0, jackcount=0, queencount=0, kingcount=0;
	int p = 1;
	
	while (n > 0)
	{
			cout << "Draw card? y/n" << endl;
			char draw;
			cin >> draw;
			if (draw == 'y')
			{
				int RandNum;
				blackjackgame:
				RandNum = rand() % 13; //generates a random number between 0 and 12
				if (RandNum == 12 && acecount < 4)
				{
					cout << "ace" << endl;
					acenum = acenum + 1;
					acecount = acecount + 1;
				}
				else if (acecount > 4)
					goto blackjackgame;
				else
				{	
					if (RandNum == 0 && twocount < 4)
					{					
						cout << deckarray[RandNum] << endl;
						totalnum = totalnum + deckarray[RandNum];
						++twocount;
					}
					else if (twocount > 4)
						goto blackjackgame;
					if (RandNum == 1 && threecount < 4)
					{					
						cout << deckarray[RandNum] << endl;
						totalnum = totalnum + deckarray[RandNum];
						++threecount;
					}
					else if (threecount > 4)
						goto blackjackgame;
					if (RandNum == 2 && fourcount < 4)
					{					
						cout << deckarray[RandNum] << endl;
						totalnum = totalnum + deckarray[RandNum];
						++fourcount;
					}
					else if (fourcount > 4)
						goto blackjackgame;
					if (RandNum == 3 && fivecount < 4)
					{					
						cout << deckarray[RandNum] << endl;
						totalnum = totalnum + deckarray[RandNum];
						++fivecount;
					}
					else if (fivecount > 4)
						goto blackjackgame;
					if (RandNum == 4 && sixcount < 4)
					{					
						cout << deckarray[RandNum] << endl;
						totalnum = totalnum + deckarray[RandNum];
						++sixcount;
					}
					else if (sixcount > 4)
						goto blackjackgame;
					if (RandNum == 5 && sevencount < 4)
					{					
						cout << deckarray[RandNum] << endl;
						totalnum = totalnum + deckarray[RandNum];
						++sevencount;
					}
					else if (sevencount > 4)
						goto blackjackgame;
					if (RandNum == 6 && eightcount < 4)
					{					
						cout << deckarray[RandNum] << endl;
						totalnum = totalnum + deckarray[RandNum];
						++eightcount;
					}
					else if (eightcount > 4)
						goto blackjackgame;
					if (RandNum == 7 && ninecount < 4)
					{					
						cout << deckarray[RandNum] << endl;
						totalnum = totalnum + deckarray[RandNum];
						++ninecount;
					}
					else if (threecount > 4)
						goto blackjackgame;
					if (RandNum == 8 && tencount < 4)
					{					
						cout << deckarray[RandNum] << endl;
						totalnum = totalnum + deckarray[RandNum];
						++tencount;
					}
					else if (tencount > 4)
						goto blackjackgame;
					if (RandNum == 9 && jackcount < 4)
					{					
						cout << "jack" << endl;
						totalnum = totalnum + deckarray[RandNum];
						++jackcount;
					}
					else if (jackcount > 4)
						goto blackjackgame;
					if (RandNum == 10 && queencount < 4)
					{					
						cout << "queen" << endl;
						totalnum = totalnum + deckarray[RandNum];
						++queencount;
					}
					else if (queencount > 4)
						goto blackjackgame;
					if (RandNum == 11 && kingcount < 4)
					{					
						cout << "king" << endl;
						totalnum = totalnum + deckarray[RandNum];
						++kingcount;
					}
					else if (kingcount > 4)
						goto blackjackgame;

				}
			}
			else if (draw == 'n')
			{
				p = 0;
				if 	((totalnum == 21 && acenum == 0)
					|| (totalnum == 10 && acenum == 1)
					|| (totalnum == 20 && acenum == 1)
					|| (totalnum == 19 && acenum == 2)
					|| (totalnum == 18 && acenum == 3)
					|| (totalnum == 17 && acenum == 4))
				{
					cout << "21!" << endl;
					totalnum = 0;
					acenum = 0;
				}
				else if (totalnum > 21)
				{
					cout << "Bust!" << endl;
					totalnum = 0;
					acenum = 0;
				}
				else
				{
					cout << totalnum + acenum << endl;
					totalnum = 0;
					acenum = 0;
				}
			}
	}

return 0;
}
