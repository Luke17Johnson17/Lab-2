/*
Luke Johnson	
Fall 2020		
Due: 9/14/20		
Lab 2 Exploring Output
In this lab I used strings and namespaces to delcare my classes, days of the week, and the stars.
And then outputed them to the screen in a order that made up my schedule and the checkerboard pattern for the stars.
*/

#include <iostream>
#include <string>

using namespace std;

const string M = "Monday		"; //Declaring days for later output
const string T = "Tuesday		";
const string W = "Wednesday	";
const string Th = "Thursday	";
const string F = "Friday		";
const string C1 = "8:00 Calculus 1"; //Declaring classes for later output
const string C2 = "9:00 Engineering Problems";
const string C3 = "1:30 C++";
const string C4 = "1:00 C++(Lab)";
const string C5 = "9:00 Technology and Social Change";
const string S1 = "  *   *   *   *";  //Declaring both star patters for later output
const string S2 = "*   *   *   *";
int main()
{
	// Outputting week schedule, days and classes
	cout << M << C1 << endl;
	cout << M << C3 << endl;
	cout << T << C2 << endl;
	cout << T << C4 << endl;
	cout << W << C1 << endl;
	cout << Th << C5 << endl;
	cout << F << C1 << endl;

	//Outputting stars
	cout << S1 << endl;
	cout << S2 << endl;
	cout << S1 << endl;
	cout << S2 << endl;
	cout << S1 << endl;
	cout << S2 << endl;
	cout << S1 << endl;
	cout << S2 << endl;

	return 0;
}






