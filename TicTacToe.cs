// A Hello World! program in C#.
using System;
namespace Program
{
    public class myClass 
    {
		char[,] tttarray = {{'-','-','-'},{'-','-','-'},{'-','-','-'}};
		int playeronex, playeroney, playertwox, playertwoy;
		public static bool shouldplay = true;
		public static bool checkwin = false;
		public static bool checkdraw = false;
		
        public static void Main(string[] args) 
        {
			myClass myObj = new myClass();
			
            Console.WriteLine("Hello World!");
			myObj.displayboard();
			while (shouldplay == true){
				myObj.playerone();
				if (checkwin == true)
				goto end;
				if (checkdraw == true)
				goto end;
				myObj.displayboard();
				myObj.playertwo();
				if (checkwin == true)
				goto end;
				if (checkdraw == true)
				goto end;
				myObj.displayboard();
			}
			end:
			myObj.displayboard();
            Console.WriteLine("Press any key to exit.");
            Console.ReadKey();
        }
		
		public void playerone() {
			playeronestart:
			Console.WriteLine("PlayerOne Enter X Coord");
			string playeronexstring = Console.ReadLine();
			Console.WriteLine("PlayerOne Enter Y Coord");
			string playeroneystring = Console.ReadLine();
			playeronex = Int32.Parse(playeronexstring);
			playeroney = Int32.Parse(playeroneystring);
			if (tttarray[playeronex, playeroney] == 'X' || tttarray[playeronex, playeroney] == 'O') {
				Console.WriteLine("Space Taken");
				goto playeronestart;
			}
			tttarray[playeronex,playeroney] = 'X';
		if (tttarray[0,0] != '-' && 
		tttarray[0,1] != '-' &&
		tttarray[0,2] != '-' &&
		tttarray[1,0] != '-' &&
		tttarray[1,1] != '-' &&
		tttarray[1,2] != '-' &&
		tttarray[2,0] != '-' &&
		tttarray[2,1] != '-' &&
		tttarray[2,2] != '-') {
			Console.WriteLine("Draw");
			checkdraw = true;
		}
		if ((tttarray[0,0] == 'X' && tttarray [0,1] == 'X' && tttarray[0,2] == 'X') ||
			(tttarray[1,0] == 'X' && tttarray [1,1] == 'X' && tttarray[1,2] == 'X') ||
			(tttarray[2,0] == 'X' && tttarray [2,1] == 'X' && tttarray[2,2] == 'X') ||
			(tttarray[0,0] == 'X' && tttarray [1,0] == 'X' && tttarray[2,0] == 'X') ||
			(tttarray[0,1] == 'X' && tttarray [1,1] == 'X' && tttarray[2,1] == 'X') ||
			(tttarray[0,2] == 'X' && tttarray [1,2] == 'X' && tttarray[2,2] == 'X') ||
			(tttarray[0,0] == 'X' && tttarray [1,1] == 'X' && tttarray[2,2] == 'X') ||
			(tttarray[2,0] == 'X' && tttarray [1,1] == 'X' && tttarray[0,2] == 'X')) {
				Console.WriteLine("PlayerOne Wins");
				checkwin = true;
				shouldplay = false;
			}
			
		}
		
		public void playertwo() {
			playertwostart:
			Console.WriteLine("PlayerTwo Enter X Coord");
			string playertwoxstring = Console.ReadLine();
			Console.WriteLine("PlayerTwo Enter Y Coord");
			string playertwoystring = Console.ReadLine();
			playertwox = Int32.Parse(playertwoxstring);
			playertwoy = Int32.Parse(playertwoystring);
			if (tttarray[playertwox, playertwoy] == 'X' || tttarray[playertwox, playertwoy] == 'O') {
				Console.WriteLine("Space Taken");
				goto playertwostart;
			}
			tttarray[playertwox,playertwoy] = 'O';
		if (tttarray[0,0] != '-' && 
		tttarray[0,1] != '-' &&
		tttarray[0,2] != '-' &&
		tttarray[1,0] != '-' &&
		tttarray[1,1] != '-' &&
		tttarray[1,2] != '-' &&
		tttarray[2,0] != '-' &&
		tttarray[2,1] != '-' &&
		tttarray[2,2] != '-') {
			Console.WriteLine("Draw");
			checkdraw = true;
		}
			
		if ((tttarray[0,0] == 'O' && tttarray [0,1] == 'O' && tttarray[0,2] == 'O') ||
			(tttarray[1,0] == 'O' && tttarray [1,1] == 'O' && tttarray[1,2] == 'O') ||
			(tttarray[2,0] == 'O' && tttarray [2,1] == 'O' && tttarray[2,2] == 'O') ||
			(tttarray[0,0] == 'O' && tttarray [1,0] == 'O' && tttarray[2,0] == 'O') ||
			(tttarray[0,1] == 'O' && tttarray [1,1] == 'O' && tttarray[2,1] == 'O') ||
			(tttarray[0,2] == 'O' && tttarray [1,2] == 'O' && tttarray[2,2] == 'O') ||
			(tttarray[0,0] == 'O' && tttarray [1,1] == 'O' && tttarray[2,2] == 'O') ||
			(tttarray[2,0] == 'O' && tttarray [1,1] == 'O' && tttarray[0,2] == 'O')) {
				Console.WriteLine("PlayerTwo Wins");
				checkwin = true;
				shouldplay = false;
			}
		}
		
		public void displayboard() {
			Console.WriteLine("___");
			for (int i = 0; i < 3; i++) {
				for (int j = 0; j < 3; j++) {
					Console.Write(tttarray[i,j]);
				}
				Console.WriteLine("");
			}
			Console.WriteLine("___");
		}
		
    }
}
