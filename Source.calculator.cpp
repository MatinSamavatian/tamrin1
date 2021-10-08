#include<iostream>
#include<conio.h>
#include<math.h>
#include<string>
using namespace std;

int main()
{
	double a, b, fact;
	string operation;

	cout << "enter your numbers:";
	cin >> a >> b;
	cout << "enter operation:" << endl;
	cin >> operation;

	if (operation == "+")
	{
		cout << a + b << endl;

	}
    else if (operation == "-")
	{
		cout << a - b << endl;

	}
	else if (operation == "*")
	{
		cout << a * b << endl;

	}
	else if (operation == "/")
	{
		if (b != 0)
		{
			cout << a / b << endl;
		}
		else
			cout << "0";
	}
	else if (operation == "cos")
	{
		a = a * 3.14159 / 180;
		cout << cos(a) << endl;

	}
	else if (operation == "sin")
	{
		a = a * 3.14159 / 180;
		cout <<sin(a) << endl;
	}
	else if (operation == "tan")
	{
		a = a * 3.14159 / 180;
		cout << tan(a) << endl;

	}
	else if (operation == "cot")
	{
		a = a * 3.14159 / 180;
		cout << 1 / tan(a) << endl;

	}
	else if (operation == "fact")
	{
		fact = 1;
		for (int i = a; i > 0; i--)
			fact *= i;
		cout << fact << endl;

	}
	system("pause>0");
}