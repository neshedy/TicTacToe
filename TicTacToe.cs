using System;

namespace MyNamespace {
	
	public class MyClass{
	public static char[,]tttarray = {{'-','-','-'},{'-','-','-'},{'-','-','-'}};
	public static int playeronex, playeroney, playertwox, playertwoy;
		public void DisplayBoard(){
			for (int i = 0; i < 3; i++){
				for (int j = 0; j < 2; j++){
					Console.Write(tttarray[i,j]);
				}
				Console.WriteLine(tttarray[i,2]);
			}
		}
		
		public void PlayerOne(){
			bool playeroneplay = true;
			while(playeroneplay == true) {
				Console.WriteLine("Player one enter x coordinate");
				playeronex = Int32.Parse(Console.ReadLine());
				Console.WriteLine("Player one enter y coordinate");
				playeroney = Int32.Parse(Console.ReadLine());
				if(CheckSpaceOne() == false) {
					tttarray[playeronex,playeroney] = 'X';
					break;
				}
			}
		}
		
		public void PlayerTwo(){
			bool playertwoplay = true;
			while(playertwoplay == true) {
				Console.WriteLine("Player two enter x coordinate");
				playertwox = Int32.Parse(Console.ReadLine());
				Console.WriteLine("Player two enter y coordinate");
				playertwoy = Int32.Parse(Console.ReadLine());
				if(CheckSpaceTwo() == false) {
					tttarray[playertwox,playertwoy] = 'O';
					break;
				}
			}
		}
		
		public bool CheckSpaceOne() {
			if(tttarray[playeronex,playeroney] == 'X' || tttarray[playeronex,playeroney] == 'O') {
				Console.WriteLine("Space taken");
				return true;
			}
			else
				return false;
		}
		
		public bool CheckSpaceTwo() {
			if(tttarray[playertwox,playertwoy] == 'X' || tttarray[playertwox,playertwoy] == 'O') {
				Console.WriteLine("Space taken");
				return true;
			}
			else
				return false;
		}
		
		public bool CheckWinOne() {
			if(tttarray[0,0] == 'X' && tttarray[0,1] == 'X' && tttarray[0,2] == 'X' ||
				tttarray[1,0] == 'X' && tttarray[1,1] == 'X' && tttarray[1,2] == 'X' ||
				tttarray[2,0] == 'X' && tttarray[2,1] == 'X' && tttarray[2,2] == 'X' ||
				tttarray[0,0] == 'X' && tttarray[1,0] == 'X' && tttarray[2,0] == 'X' ||
				tttarray[0,1] == 'X' && tttarray[1,1] == 'X' && tttarray[2,1] == 'X' ||
				tttarray[0,2] == 'X' && tttarray[1,2] == 'X' && tttarray[2,2] == 'X' ||
				tttarray[0,0] == 'X' && tttarray[1,1] == 'X' && tttarray[2,2] == 'X' ||
				tttarray[0,2] == 'X' && tttarray[1,1] == 'X' && tttarray[2,0] == 'X' ) {
				Console.WriteLine("Playerone wins");
				return true;
				}
			else 
				return false;
		}
		
		public bool CheckWinTwo() {
			if(tttarray[0,0] == 'O' && tttarray[0,1] == 'O' && tttarray[0,2] == 'O' ||
				tttarray[1,0] == 'O' && tttarray[1,1] == 'O' && tttarray[1,2] == 'O' ||
				tttarray[2,0] == 'O' && tttarray[2,1] == 'O' && tttarray[2,2] == 'O' ||
				tttarray[0,0] == 'O' && tttarray[1,0] == 'O' && tttarray[2,0] == 'O' ||
				tttarray[0,1] == 'O' && tttarray[1,1] == 'O' && tttarray[2,1] == 'O' ||
				tttarray[0,2] == 'O' && tttarray[1,2] == 'O' && tttarray[2,2] == 'O' ||
				tttarray[0,0] == 'O' && tttarray[1,1] == 'O' && tttarray[2,2] == 'O' ||
				tttarray[0,2] == 'O' && tttarray[1,1] == 'O' && tttarray[2,0] == 'O' ) {
					Console.WriteLine("Playertwo wins");
					return true;
				}
				else
					return false;
		}
		
		public bool CheckDraw() {
			if(tttarray[0,0] != '-' && tttarray[0,1] != '-' && tttarray[0,2] != '-'
			&& tttarray[1,0] != '-' && tttarray[1,1] != '-' && tttarray[1,2] != '-'
			&& tttarray[2,0] != '-' && tttarray[2,1] != '-' && tttarray[2,2] != '-') {
				Console.WriteLine("Draw");
				return true;
			}
			else
				return false;
		}
	};
	
	class TestClass{
		public static void Main(string[] args){
			MyClass MyObject = new MyClass();
			bool shouldplay = true;
			while (shouldplay == true) {
				MyObject.DisplayBoard();
				MyObject.PlayerOne();
				if (MyObject.CheckWinOne() == true) {
					MyObject.DisplayBoard();
					break;
				}
				else if (MyObject.CheckDraw() == true) {
					MyObject.DisplayBoard();
					break;
				}
				MyObject.DisplayBoard();
				MyObject.PlayerTwo();
				if (MyObject.CheckWinTwo() == true) {
					MyObject.DisplayBoard();
					break;
				}
				else if (MyObject.CheckDraw() == true) {
					MyObject.DisplayBoard();
					break;
				}
			}
		}
	}
}
