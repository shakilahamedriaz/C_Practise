#include <conio.h>
#include <iostream>
#include <string>
#include <ctime>
#include <windows.h>

using namespace std;

HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE); // For use of SetConsoleTextAttribute()

void WaitKey();

int main()
{

  int len = 0,x, y;
  time_t t;
  srand((unsigned) time(&t)); // randomize using the time
    
  cout << endl << endl << endl << "\t\t\t"; // start 3 down, 3 tabs, right
  for ( x=0;x<8;x++)
  {
    for (y=0;y<10;y++)
    {
      SetConsoleTextAttribute(console, (rand()%16)*15); // set color for the next print
    cout << " ";
    }
    SetConsoleTextAttribute(console, 0); // set color to black background
    cout << endl << "\t\t\t"; // Start next line, 1 down, 3 tabs over
  }
  SetConsoleTextAttribute(console, 15); // set color to black background, white chars
  WaitKey(); // Program over, wait for a keypress to close program
}

void WaitKey()
{
  cout  << endl << endl << endl << "\t\t\tPress any key";
  while (_kbhit()) _getch(); // Empty the input buffer
  _getch(); // Wait for a key
  while (_kbhit()) _getch(); // Empty the input buffer (some keys sends two messages)
}