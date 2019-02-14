//A simple TicTacToe program writeen in cs

using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace TicTacToeCS
{
    class MyProgram
    {
        static void Main(string[] args)
        {
            TicTacToeClass TicTacToeObject = new TicTacToeClass();
            bool shouldPlay = true;
            while (shouldPlay == true)
            {
                TicTacToeObject.DisplayBoard();
                bool shouldPlayOne = true;
                while (shouldPlayOne == true)
                {
                    TicTacToeObject.Player("one");
                    if (TicTacToeObject.CheckSpace() == false)
                        break;
                    Console.WriteLine("Space taken");
                }
                TicTacToeObject.tttArray[TicTacToeObject.x, TicTacToeObject.y] = 'X';
                if (TicTacToeObject.CheckWin('X') == true)
                    break;
                if (TicTacToeObject.CheckDraw() == true)
                {
                    Console.WriteLine("Draw");
                    break;
                }
                TicTacToeObject.DisplayBoard();
                bool shouldPlayTwo = true;
                while (shouldPlayTwo == true) {
                    TicTacToeObject.Player("two");
                    if (TicTacToeObject.CheckSpace() == false)
                        break;
                    Console.WriteLine("Space Taken");
                }
                TicTacToeObject.tttArray[TicTacToeObject.x, TicTacToeObject.y] = 'O';
                if (TicTacToeObject.CheckWin('O') == true)
                    break;
                if (TicTacToeObject.CheckDraw() == true)
                {
                    Console.WriteLine("Draw");
                    break;
                }
            }
            Console.ReadKey();
        }
    }

    class TicTacToeClass
    {
        public char[,] tttArray = { { '-', '-', '-' }, { '-', '-', '-' }, { '-', '-', '-' } };
        public int x, y;
        public void DisplayBoard()
        {
            for (int i = 0; i < 3; i++)
            {
                for (int j = 0; j < 2; j++)
                {
                    Console.Write(tttArray[i, j]);
                }
                Console.WriteLine(tttArray[i, 2]);
            }
        }

        public void Player(string alice)
        {
            Console.WriteLine("player " + alice + "Enter x coordinate");
            x = Int32.Parse(Console.ReadLine());
            Console.WriteLine("player " + alice + "Enter y coordinate");
            y = Int32.Parse(Console.ReadLine());
        }

        public bool CheckWin(char bud)
        {
            if (tttArray[0, 0] == bud && tttArray[0, 1] == bud && tttArray[0, 2] == bud &&
                tttArray[1, 0] == bud && tttArray[1, 1] == bud && tttArray[1, 2] == bud &&
                tttArray[2, 0] == bud && tttArray[2, 1] == bud && tttArray[2, 2] == bud &&
                tttArray[0, 0] == bud && tttArray[1, 0] == bud && tttArray[2, 0] == bud &&
                tttArray[0, 1] == bud && tttArray[1, 1] == bud && tttArray[2, 1] == bud &&
                tttArray[0, 2] == bud && tttArray[1, 2] == bud && tttArray[2, 2] == bud &&
                tttArray[0, 0] == bud && tttArray[1, 1] == bud && tttArray[2, 2] == bud &&
                tttArray[0, 2] == bud && tttArray[1, 1] == bud && tttArray[2, 0] == bud)
                return true;
            else
                return false;
        }

        public bool CheckSpace()
        {
            if (tttArray[x, y] == 'X' || tttArray[x, y] == 'O')
                return true;
            else
                return false;
        }

        public bool CheckDraw()
        {
            if (tttArray[0, 0] != '-' && tttArray[0, 1] != '-' && tttArray[0, 2] != '-' &&
                tttArray[2, 0] != '-' && tttArray[1, 1] != '-' && tttArray[1, 2] != '-' &&
                tttArray[0, 0] != '-' && tttArray[0, 0] != '-' && tttArray[0, 0] != '-')
                return true;
            else
                return false;
        }
    }
}
