//This project is meant to calculate three separate values: future ocean levels, distance of a gas tank, and energy drink consumption.
//This branch is meant to calculate energy drink consumption.

#include <iostream>
using namespace std;
int main()
{
	int sampleSize = 16500;
	float regularCustomerProportion = 0.15;
	float citrusProportion = 0.58;
	cout << "From the survey, approximately " << regularCustomerProportion*sampleSize  << " people purchase energy drinks regularly." << endl;
	cout << "From the survey, approximately " << citrusProportion*sampleSize  << " people citrus flavored energy drinks." << endl;
	cout << "This data is from a survey of " << sampleSize << " customers." << endl;
	return 0;
}
