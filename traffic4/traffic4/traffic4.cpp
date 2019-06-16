// traffic4.cpp : Defines the entry point for the console application.

#include "stdafx.h"
#include "traffic4.h"
# include <iostream>
#include<Windows.h>
using namespace std;
void gotoxy(int, int);
int main()
{
	traffic k;
	system("cls");
	char cg[14] = "TRAFFIC LIGHT";
	char car[20] = "Car Interval: 2 sec";
	char lane[14] = "One way Lanes";
	char cont[34] = "Would you like to continue?(Y/N):";
	char choice = 'Y';
	for (int i = 0; i<14; i++)
	{
		gotoxy(5, 5 + i);
		cout << cg[i];
		Sleep(100);
	}
	for (int i = 0; i<20; i++)
	{
		gotoxy(5 + i, 0);
		cout << car[i];
		Sleep(100);
	}
	for (int i = 0; i<14; i++)
	{
		gotoxy(5 + i, 1);
		cout << lane[i];
		Sleep(100);
	}

	char c[14] = "|||||||||||||";
	char d[60] = "-----------------------------------------------------------";
	char e[70] = "_____________________________________________________________________";
	char f[20] = "lllllllllllllllllll";
	gotoxy(10, 8);
	cout << "First Lane";
	gotoxy(41, 17);
	cout << "Second Lane";
	gotoxy(10, 12);
	cout << d;
	gotoxy(10, 13);
	cout << d;
	gotoxy(10, 14);
	cout << d;
	gotoxy(10, 5);
	cout << d;
	gotoxy(10, 6);
	cout << d;
	gotoxy(10, 7);
	cout << d;
	for (int i = 0; i<70; i++)
	{
		gotoxy(9 + i, 9);
		cout << e[i];
		Sleep(100);
	}
	for (int i = 0; i<14; i++)
	{
		gotoxy(33, 3 + i);
		cout << c[i];
	}
	for (int i = 0; i<14; i++)
	{
		gotoxy(34, 3 + i);
		cout << c[i];
	}
	for (int i = 0; i<14; i++)
	{
		gotoxy(35, 3 + i);
		cout << c[i];	
	}
	for (int i = 0; i<14; i++)
	{
		gotoxy(41, 3 + i);
		cout << c[i];
	}
	for (int i = 0; i<14; i++)
	{
		gotoxy(42, 3 + i);
		cout << c[i];
	}
	for (int i = 0; i<14; i++)
	{
		gotoxy(43, 3 + i);
		cout << c[i];
	}
	for (int i = 0; i<20; i++)
	{
		gotoxy(38, 2 + i);
		cout << f[i];
		Sleep(100);
	}
	int sig; sig = 41;
	int sig1 = 18;
	int z = 0;
	int ctr = 0;
	
	do
	{
		int x = 0;
		int y = 0;
		if (x == 0)
		{
			gotoxy(41, 18);
			cout << "red";
			
		}
		if (sig == 10)
		{
			sig = 41;
			sig1 = 18;
		}

		else
		{
			sig = 10;
			sig1 = 9;


		}

		gotoxy(sig, sig1);
		cout << "red   ";
		Sleep(1500);
	    
		gotoxy(sig, sig1);
		cout << "green   ";
		for (int i = 0; i < 5; i++)
		{
			if (ctr % 2 != 0)
			{
				k.enqueue(1, x);
				z = k.display();
				gotoxy(10, 10);
				cout << "Cars on First Lane: " << z;
				y = k.dequeue1(x, y);
				gotoxy(41, 19);
				cout << "Cars on Second Lane: " << y;
				Sleep(2000);
				x++;
			}
			else
			{
				k.enqueue1(1, x);
				z = k.display1();
				gotoxy(41, 19);
				cout << "Cars on Second Lane: " << z;
				y = k.dequeue(x, y);
				gotoxy(10, 10);
				cout << "Cars on First Lane: " << y;
				Sleep(2000);
				x++;
			}
		}
		gotoxy(sig, sig1);
		cout << "yellow   ";
		if (ctr % 2 != 0)
		{
			k.enqueue(1, x);
			z = k.display();
			gotoxy(10, 10);
			cout << "Cars on First Lane: " << z;
			y = k.dequeue1(x, y);
			gotoxy(41, 19);
			cout << "Cars on Second Lane: " << y;
			Sleep(2000);
			x++;
		}
		else
		{
			k.enqueue1(1, x);
			z = k.display1();
			gotoxy(41, 19);
			cout << "Cars on Second Lane: " << z;
			y = k.dequeue(x, y);
			gotoxy(10, 10);
			cout << "Cars on First Lane: " << y;
			Sleep(2000);
			x++;
		}
		
		gotoxy(sig, sig1);
		cout << "red   ";
		Sleep(1500);
		if (ctr % 2 != 0)
		{
			k.enqueue(1, x);
			z = k.display();
			gotoxy(10, 10);
			cout << "Cars on First Lane: " << z;
			Sleep(2000);
			x++;
		}
		else
		{
			k.enqueue1(1, x);
			z = k.display1();
			gotoxy(41, 19);
			cout << "Cars on Second Lane: " << z;
			Sleep(2000);
			x++;
		}
		if (ctr % 2 != 0)
		{
			for (int i = 0; i<34; i++)
			{
				gotoxy(5 + i, 2);
				cout << cont[i];
				Sleep(100);
			}
			cin >> choice;
			if (choice != 'Y')
				return 0;
			else
			{
				for (int i = 0; i < 35; i++)
				{
					gotoxy(5 + i, 2);
					cout << " ";
				}
			}
		}
		ctr++;
	} while (1>0);
	return 0;
}
void gotoxy(int x, int y)
{
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	_COORD pos; pos.X = x; pos.Y = y;
	SetConsoleCursorPosition(hConsole, pos);
}

