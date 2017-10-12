#include <iostream>
#include <string>
//#include <conio.h>
using namespace std;
/*Task:You are being requested to add new features to your House Compare Prices software (homework #2).
The new requirement is to compare the price of three houses. For this you a required to do the following:
?Update your code to use OOP. That is update your structure to a class (HouseInfo).
?Your class should hold the following information
oThe street number using an integer
oThe house price using a double
oThe street name using a string instead of an array of characters.
oA method to update the object?s information based on the user input.
?A function (ComparePrices) that takes an array of objects of type class HouseInfo that displays the cheapest of the three houses.
If two houses have the same value, you should display both houses that are equally cheap.  */
class HouseInfo
{
private:
	int streetNumber;
	double housePrice;
	string streetName;
public:
	HouseInfo() :streetNumber(123), housePrice(3500), streetName("sesame street") {}
	HouseInfo(int sn, int hp, string sName)
	{
		streetNumber = sn;
		housePrice = hp;
		streetName = sName;
	}
	void updateInfo()
	{
		cout << "Please enter Street number: " << endl;
		cin >> streetNumber;
		cout << "\nPlease enter price: " << endl;
		cin >> housePrice;
		cout << "\nPlease enter street name: " << endl;
		getline(cin, streetName);
	}
	void ComparePrices(HouseInfo h1)
	{
		//random comment
	}
};
int main()
{

//	_getch();
	return 0;
}