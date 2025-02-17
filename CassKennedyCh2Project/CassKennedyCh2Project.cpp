//This project is meant to calculate three separate values: future ocean levels, distance of a gas tank, and energy drink consumption.
//This branch is meant to calculate energy drink consumption and display the relevant information.

#include <iostream>
using namespace std;
int main()
{
	int sampleSize = 16500;
	//This is the number of customers included in the survey.
	float regularCustomerProportion = 0.15;
	float citrusProportion = 0.58;
	//Originally regularCustomerProportion and citrusProportion were percentages. I divided them by 100 to make them proportions and so that they were easier to use in calulations.
	cout << "From the sample, approximately " << regularCustomerProportion*sampleSize  << " people purchase energy drinks regularly." << endl;
	cout << "From the sample, approximately " << citrusProportion*sampleSize  << " people prefer citrus flavored energy drinks." << endl;
	cout << "This data is from a survey of " << sampleSize << " customers." << endl;
	//This calulates and displays the number of people who buy energy drink once or more per week, the number who prefer citrus drinks, and the sample size.
	return 0;
}
