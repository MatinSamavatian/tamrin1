#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;

int main()
{
	double weight, height, avg, m;
	cout << " please enter your height(in CM):";
		cin >> height;
		cout << endl << "please enter your weight(in KG):";
	cin >> weight;

	m = height / 100;
	avg = weight / (m * m);
	cout <<"your body mass index point is:"<< avg << endl;
	cout << "status:";

	if (avg <= 18.5) {

		cout << "underweight" << endl;

	}
	else if (18.6 < avg <= 24.9)
	{

		cout << "normal" << endl;

	}
	else if (25.0 < avg <= 29.9)
	{

		cout << "overweight" << endl;

	}
	else if (30.0 < avg <= 34.9) {

		cout << "obese" << endl;
	}
	else
		cout << "extremely obese" << endl;



	system("pause>0");
}