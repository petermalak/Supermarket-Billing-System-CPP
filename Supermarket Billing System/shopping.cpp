#include "shopping.h"
#include<iostream>
using namespace std;
void menu() {

	m:
	int choice;
	string email;
	string password;

	cout << "\t\t\t\t__________________________________\n";
	cout << "\t\t\t\t                                  \n";
	cout << "\t\t\t\t      Supermarket Main Menu       \n";
	cout << "\t\t\t\t                                  \n";
	cout << "\t\t\t\t__________________________________\n";
	cout << "\t\t\t\t                                  \n";

	cout << "\t\t\t\t|   1) Adminstrator    |\n";
	cout << "\t\t\t\t|                      |\n";
	cout << "\t\t\t\t|   2) Buyer           |\n";
	cout << "\t\t\t\t|                      |\n";
	cout << "\t\t\t\t|   3) Exit            |\n";
	cout << "\t\t\t\t|                      |\n";
	cout << "\n\t\t\t Please select: ";
	cin >> choice;

	switch (choice)
	{
	case 1: 
		cout << "\t\t\t Please Login   \n";
		cout << "\t\t\t Enter Email    \n";
		cin >> email;
		cout << "\t\t\t Password       \n";
		cin >> password;
		if (email = "peter@email.com" && password = "1234")
		{
			adminstrator();
		}
		else {
			cout << "Invalid email/password \n";
		}
		break;

	case 2:
	{
		buyer();
	}
	case 3:
	{
		exit(0);
	}
	default:
	{
		cout << "Please select from the given options \n";
	}
	}

	goto m;
}

void adminstrator() 
{
	m:
	int choice;
	cout << "\n\n\n\t\t\t Adminstrator menu";
	cout << "\n\t\t\t|_______1) Add the product_______|";
	cout << "\n\t\t\t|                                |";
	cout << "\n\t\t\t|_______2) Modify the product____|";
	cout << "\n\t\t\t|                                |";
	cout << "\n\t\t\t|_______2) Delete the product____|";
	cout << "\n\t\t\t|                                |";
	cout << "\n\t\t\t|_______4) Back to main menu_____|";
	
	cout << "\n\n\t Please enter your choice";
	cin >> choice;

	switch (choice)
	{
	case 1: 
		add();
		break;
	case 2: 
		edit();
		break;
	case 3:
		rem();
		break;
	case 4:
		menu();
		break;
	default:
		cout << "Invalid choice";
		break;
	}

	goto m;
}
void buyer()
{
	m:
	int choice;
	cout << "\t\t\t  Buyer         \n";
	cout << "                      \n";
	cout << "\t\t\t 1) Buy Product \n";
	cout << "                      \n";
	cout << "\t\t\t 1) Go Back     \n";
	cout << "\t\t\t Enter your choice : ";
	cin >> choice;

	switch (choice)
	{
	case 1: 
		receipt();
		break;
	case 2:
		menu();
	default:
		cout << "Invalid choice";
	}
	goto m;
}
void add(){}
void edit(){}
void rem(){}
void list(){}
void receipt(){}
