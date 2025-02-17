//This project is meant to calculate three separate values: future ocean levels, distance of a gas tank, and energy drink consumption.
//This branch is meant to calculate distance of a gas tank and display the relevant information.

#include <iostream>
using namespace std;
int main()
{
	int gasCapacity = 20;
	//This is in gallons, i.e. the gas tank holds 20 gallons of gas.
	float urbanMileage = 23.5;
	float highwayMileage = 28.9;
	//The mileage numbers (urban and highway) are in miles per gallon.
	cout << "You can expect to travel " << gasCapacity * urbanMileage << " miles in town off of a full tank of gas." << endl;
	cout << "You can expect to travel " << gasCapacity * highwayMileage << " miles on the highway off of a full tank of gas." << endl;
	//Calculates and displays the gas mileage from a full tank in the city and on the highway.
	return 0;
}
