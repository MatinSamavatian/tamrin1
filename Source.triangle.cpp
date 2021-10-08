#include<iostream>
#include<conio.h>
#include<math.h>

using namespace std;

int main()
{
	int x, y, z;
	cout << "please enter your sides size:";
	cin >> x >> y >> z;
	if (x + y > z && x + z > y && y + z > x)
		cout << "You can make a triangle" << endl;
	else
		cout << "you can't make a triangle" << endl;

	system("pause>0");

}