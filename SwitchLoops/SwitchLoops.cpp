#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
	int choice;
	do{
	cout << "MENU OF OPTIONS\n";
	cout << "===============\n\n";
	cout << "1. Say Good Morning In Spanish.\n";
	cout << "2. Say Good Morning In Portuguese.\n";
	cout << "3. Say Good Morning In Polish.\n";
	cout << "4. Say Good Morning In Italian.\n";
	cout << "\n0. To QUIT\n";
	cout << "\nEnter your Choice ==> ";
	cin >> choice;
	switch (choice)
	{
	case 1:
		cout << "\nBuenos Dias!!\n";
		system("pause");
		system("cls");
		break;
	case 2:
		cout << "\nBom Dia!!\n";
		system("pause");
		system("cls");
		break;
	case 3:
		cout << "\nDzein Dobry!!\n";
		system("pause");
		system("cls");
		break;
	case 4:
		cout << "\nBon Giorno!!\n";
		system("pause");
		system("cls");
		break;
	case 0:
		cout << "\nThank you for using this application - Goodbye";
		break;
	default:
		cout << "\n Wrong Number - Try Again";
		system("pause");
		system("cls");
	}
	} while (choice != 0);

}
