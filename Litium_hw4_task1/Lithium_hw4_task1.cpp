#include <iostream>
#include <string>
//#include <conio.h>
using namespace std;
/*Task:You are being requested to add new features to your House Compare Prices software (homework #2). 
The new requirement is to compare the price of three houses. For this you a required to do the following: 
		•Update your code to use OOP. That is update your structure to a class (HouseInfo). 
		•Your class should hold the following information
		oThe street number using an integer
		oThe house price using a double
		oThe street name using a string instead of an array of characters. 
		oA method to update the object’s information based on the user input.
		•A function (ComparePrices) that takes an array of objects of type class HouseInfo that displays the cheapest of the three houses. 
If two houses have the same value, you should display both houses that are equally cheap.  */
class HouseInfo
{
private:
	int streetNumber;
	double housePrice;
	string streetName;
public:
	void ComparePrices(HouseInfo h1)
	{

	}
};
int main()
{
	cout << "press any key to end program" << endl;
	//_getch();
	return 0; 
}