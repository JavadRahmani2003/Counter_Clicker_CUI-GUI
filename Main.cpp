#include <iostream>
#include <conio.h>
#include <Windows.h>

using namespace std;

int main()
{
	int a = 0;
	bool CloseTheApp = false;

	while (!CloseTheApp)
	{
		if (_kbhit() == 1)
		{
			if (_getch() == 13)
			{
				a++;
				cout << "Press Enter: " << a << system("cls");
			}
			else
			{
				cout << "\nError: Not Acceptable!\n";
				CloseTheApp = true;
				break;
			}
		}
	}
}