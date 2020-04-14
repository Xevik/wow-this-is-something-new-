using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Threading;

namespace Game_Snake
{
    class Game
    {
        public static void Difficulty()
        {
            Console.WriteLine("Before to play, select the difficulty:\n 1) Easy (Field - 10x10, Speed - Low);\n 2) Normal (Field - 15x15, Speed - Normal);" +
                "\n 3) Hard (Field - 20x20, Speed - High).");
            ConsoleKeyInfo difficulty;
            difficulty = Console.ReadKey();
            switch (difficulty.Key)
            {
                case ConsoleKey.D3:
                    {
                        Field(20, 20);
                        break;
                    }
                case ConsoleKey.D2:
                    {
                        Field(15, 15);
                        break;
                    }
                case ConsoleKey.D1:
                    {
                        Field(10, 10);
                        break;
                    }
                default:
                    {
                        Console.WriteLine("Error in choosing the difficulty!");
                        break;
                    }
            }
        }
        public static void Field(int n, int m)
        {
            char[,] field = new char[n, m];
            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < m; j++)
                {
                    if (i == 0 || i == n - 1)
                    {
                        field[i, j] = '|';
                    }
                    else
                    {
                        field[i, j] = '.';
                    }
                }
            }
        }
        public static void Apple(int n, int m)
        {
            Random rnd = new Random();
            int AppleHorizontal = rnd.Next(0, n - 1);
            int AppleVertical = rnd.Next(0, m - 1);
        }
        /*public static void ShowField(int n, int m)
        {
            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < m; j++)
                {
                    Console.WriteLine(field[i, j]);
                }
            }
        }*/
        public static void Main()
        {
            Console.CursorVisible = false;
            Console.WriteLine("Game: Snake.\nYour goal: to eat apples and do not touch the wall.");
            Difficulty();
            Console.ReadKey();
        }
    }
}