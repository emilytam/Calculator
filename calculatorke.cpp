#include <iostream>

using namespace std;

int main()

{
	char operation;
	cin >> operation;
	int a;
	int b;
	if (operation == '+')
	{
		int sum;

		cout << " Enter the first number" << endl;
		cin >> a;

		cout << " Enter the second number" << endl;
		cin >> b;

		sum = a+b;
		cout << "The sum of those numbers is " << sum << endl;
	}
	if (operation == '-')
	{
		int difference;

		cout << "Enter the first number" << endl;
		cin >> a;

		cout << " Enter the second number" << endl;
		cin >> b;

		difference = a-b;
		cout << "The difference of those numbers is " << difference << endl;
	}
	if (operation == '*')
	{
		int product;

		cout << "Enter the first number" << endl;
		cin >> a;

		cout << "Enter the second number" << endl;
		cin >> b;

		product = a*b;
		cout << "The product of those numbers is " << product << endl; 
	}
	if (operation == '/')
	{
		int quotient;

		cout << "Enter the first number" << endl;
		cin >> a;

		cout << "Enter the seecond number" << endl;
		cin >> b;

		quotient = a/b;
		cout << "The quotient of those numbers is " << quotient << endl;
	}
		
}
