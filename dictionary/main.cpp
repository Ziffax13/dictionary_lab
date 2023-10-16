#include <iostream>
#include "Dictionary.h"

using namespace std;

int main()
{
	Dictionary d;
	int action = 0;
	while (true)
	{
		system("CLS");
		cout << "[1] - print full dictionary\n";
		cout << "[2] - add word pair\n";
		cout << "[3] - remove pair by word\n";
		cout << "[4] - search by word\n";
		cout << "Enter action: ";
		cin >> action;
		switch (action)
		{
		case 1:
			system("CLS");
			d.print();
			system("pause");
			break;
		case 2:
			system("CLS");
			d.inputAdd();
			system("pause");
			break;
		case 3:
			system("CLS");
			d.inputRemove();
			system("pause");
			break;
		case 4:
			system("CLS");
			d.inputSearch();
			system("pause");
			break;
		default:
			cout << "Wrong value";
			system("pause");
			break;
		}
	}
}