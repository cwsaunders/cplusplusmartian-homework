#include <iostream>
#include <windows.h>
#include "Martian.h"
using namespace std;
int  main()
{
	int choice;
	do {
		//menu
		cout << "********************************************************" << endl;
		cout << "1 - Add Martian Micky" << endl;
		cout << "2 - Add Martian Minnie" << endl;
		cout << "3 - Add Martian Goofy" << endl;
		cout << "4 - Show Martians" << endl;
		cout << "5 - Exit" << endl;
		cout << "********************************************************" << endl;
		cout << "Choice:  ";
		cin >> choice;
		switch (choice)
		{
		case 1:
		{
			Martian Micky("Micky");
			Micky.add();
			cout << "Micky was successfully added." << endl;
			Sleep(1500);
			system("cls");
			break;
		}
		case 2:
		{
			Martian Minnie("Minnie");
			Minnie.add();
			cout << "Minnie was successfully added." << endl;
			Sleep(1500);
			system("cls");
			break;
		}
		case 3:
		{
			Martian Goofy("Goofy");
			Goofy.add();
			cout << "Goofy was successfully added." << endl;
			Sleep(1500);
			system("cls");
			break;
		}
		case 4:
		{
			Martian::draw();
			cout << "Number of martians: " <<  endl;
			cout << Martian::getMartians() << endl;
			cout << endl << endl << endl;
			system("pause");
			system("cls");
			break;
		}
		case 5:
			break;
		default:
			cout << "Please enter a selection from the menu" << endl;
		}
	} while (choice != 5);

	return 0;
}