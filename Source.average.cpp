#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;

int main()
{
	string firstname, lastname;
	double p1, p2, p3;
	int average;

	cout << "first name: ";
	cin >> firstname;
	cout << endl;
	cout << "lastname: ";
	cin>> lastname;
	cout << endl;
	cout << "enter studies point: ";
	cin>>p1 >> p2 >> p3;


	average = (p1 + p2 + p3) / 3;
	cout << "student name: " << firstname << " " << lastname<<endl;
	cout <<"the student's average is: "<< average << endl;
	if (average >= 17)
	{

		cout << "great" << endl;
	}
	else if (12 <= average && average < 17)
	{

		cout << "normal" << endl;

	}
	else if (average < 12)
	{

		cout << "fail" << endl;
	}
	system("pause>0");

}