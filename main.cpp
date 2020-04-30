//Maximillian Senisch
//COSC 1437-58000
//Dr_T
//IDE: repl.it
//Description: EC assignment number 17; This program is a practice program to practice using various nested loops to create patterns

#include <iostream>
#include <cstdlib>

using namespace std;

int main() 
{
//(i)
  cout << "\n(i)\n";
  for(int a = 0; a < 4; a++)
  {
    for(int a = 0; a < 10; a++)
    {
      cout << "*";
    }
    cout << "\n";
  }
//(ii)
  cout << "\n(ii)\n";
    for(int a = 1; a < 14; a++)
    {
      if(a < 6)
      {
        for(int b = 0; b < a; b++)
        {
          cout << "\x1B[34m*\033[0m";
        }
      }
      else if (a == 6)
      {
        cout << "also";
      }
      else
      {
        for(int c = 7; c > (a-7); c--)
        {
          cout << "\x1B[31m*\033[0m";
        }
      }
      cout << "\n";
    }
//(iii)
  cout << "\n(iii)\n";
    for(int a = 0; a < 5; a++)
    {
      for(int b = 4; b > a; b--)
      {
        cout << " ";
      }
      for(int b = 0; b <= a; b++)
      {
        cout << "*";
      }
      cout << "\n";
    }
//(iv)
  cout << "\n(iv)\n";
    for(int a = 0; a < 5; a++)
    {
      for(int b = 4; b > a; b--)
      {
        cout << " ";
      }
      for(int b = 0; b <= (2*a); b++)
      {
        cout << "\x1B[32m*\033[0m";
      }
      cout << "\n";
    }
//(v)
  cout << "\n(v)\n";
    for(int a = 0; a < 5; a++)
    {
      for(int b = 4; b > a; b--)
      {
        cout << " ";
      }
      for(int b = 0; b <= (2*a); b++)
      {
        cout << "\x1B[35m" << a+1 << "\033[0m";
      }
      cout << "\n";
    }
//(vi)
  cout << "\n(vi)\n";
    for(int a = 0; a < 5; a++)
    {
      for(int b = 4; b > a; b--)
      {
        cout << " ";
      }
      for(int b = 0; b <= (2*a); b++)
      {
        cout << "\x1B[34m" << (abs(b-a) + 1) << "\033[0m";
      }
      cout << "\n";
    }
//(vii)
  cout << "\n(vii)\n";
    for(int a = 0; a < 2; a++)
    {
      for(int b = 7; b > 0; b--)
      {
        if(a == 0 && b == 3)
        {

        }
        else
        {
          for(int c = b; c > 0; c--)
          {
            if(a == 0)
            {
              cout << "\x1B[34m*\033[0m";
            }
            else
            {
              cout << "\x1B[31m*\033[0m";
            }            
          }
          cout << "\n";  
        }        
      }
    }
//(viii)
  cout << "\n(viii)\n";
    cout << "|\\        /|    /\\    \\   /  Not made with loops\n";
    cout << "| \\      / |   /  \\    \\ /\n";
    cout << "|  \\    /  |  /____\\    X\n";
    cout << "|   \\  /   | /      \\  / \\\n";
    cout << "|    \\/    |/        \\/   \\\n";

    for(int a = 0; a < 5; a++)
    {
      cout << "|";
      for(int b = 0; b < a; b++)
      {
        cout << " ";
      }
      cout << "\\";
      for(int b = 0; b < (8-(2*a)); b++)
      {
        cout << " ";
      }
      cout << "/";
      for(int b = a; b > 0; b--)
      {
        cout << " ";
      }
      cout << "|";
      for(int b = 4; b > a; b--)
      {
        cout << " ";
      }
      cout << "/";
      for(int b = 8; b > (8-(2*a)); b--)
      {
        if(a != 2)
        cout << " ";
        else
        cout << "_";
      }
      cout << "\\";
      if(a == 4)
      {
        cout << "/   \\";
      }
      else if(a == 3)
      {
        cout << "  / \\";
      }
      else
      {
        cout << "    ";
        if(a == 2)
        {
          cout << "X";
        }
        else if(a == 1)
        {
          cout << "\\ /";
        }
        else
        {
          cout << "\\   /";
        }
      }
      cout << "   Made with Loops\n";
    }

//(ix)
  cout << "\n(ix)\n";
  cout << "Big O notation thinks about the worst case scenario like if you have an array you want to sort or a piece of data you would like to find and it is in the worst position with respect to your program. It puts time on one axis and input size on the other and the big o is basically a graph of the worst case scenario for a program to do its job.";
  cout << "https://www.bigocheatsheet.com/\n";
  cout << "http://pages.cs.wisc.edu/~vernon/cs367/notes/3.COMPLEXITY.html";
  return 0;
}