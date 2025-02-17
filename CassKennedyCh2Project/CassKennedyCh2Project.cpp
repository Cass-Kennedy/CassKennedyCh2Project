//This project is meant to calculate three separate values: future ocean levels, distance of a gas tank, and energy drink consumption.
//This branch is meant to calculate distance of a gas tank.

#include <iostream>
using namespace std;
int main()
{
	int gasCapacity = 20;
	float urbanMileage = 23.5;
	float highwayMileage = 28.9;
	cout << "You can expect to travel " << gasCapacity * urbanMileage << " miles in town off of a full tank of gas." << endl;
	cout << "You can expect to travel " << gasCapacity * highwayMileage << " miles on the highway off of a full tank of gas." << endl;
	return 0;
}
