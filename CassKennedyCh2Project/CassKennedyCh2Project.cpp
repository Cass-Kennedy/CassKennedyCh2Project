//This project is meant to calculate three separate values: future ocean levels, distance of a gas tank, and energy drink consumption.
//This branch is meant to calculate future ocean levels.

#include <iostream>
using namespace std;
int main()
{
	float oceanRise = 1.5;
	int timeOne = 5;
	int timeTwo = 7;
	int timeThree = 10;
	cout << "The sea level will be " << timeOne * oceanRise << " millimeters higher in 5 years." << endl;
	cout << "The sea level will be " << timeTwo * oceanRise << " millimeters higher in 7 years." << endl;
	cout << "The sea level will be " << timeThree * oceanRise << " millimeters higher in 10 years." << endl;
	return 0;
}
