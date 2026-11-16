// Name: Logen N. Wolfe
// Date: 11/16/2026
// Program: Chapter 6 Exercise 2
// Description: These functions will calculate the distance a rock falls based on the time it takes to hit the ground. The user will input the time, and the program will output the distance.

#include <iostream>
#include <iomanip>
using namespace std;

double DistanceFromTime(double t);
double GetTime();
void ShowResults(double, double);
const double gravity = 9.8;


int main()
{
	double time;
	double distance;

	time = GetTime();
	distance = DistanceFromTime(time);
	ShowResults(time, distance);
}

double DistanceFromTime (double t)
{
	double distance = (gravity * t * t) / 2;
		
	
	return distance;

}

double GetTime() {
	double time;
	cout << "Please, enter the time it takes for the rock to hit the ground!" << endl;
	cin >> time;
	return time;
}

void ShowResults(double t, double d) {
	fixed;
	cout << "It takes " << t << " seconds to fall a distance of " << fixed <<setprecision(2) << d << endl;
}