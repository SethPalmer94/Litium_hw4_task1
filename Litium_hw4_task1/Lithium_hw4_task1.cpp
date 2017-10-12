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
        cin.ignore();
		getline(cin, streetName);
	}
    void displayInfo()
    {
        cout << "\n Street Name - " << streetName
                << "\nStreet Number - " << streetNumber
                << "\nPrice: " << housePrice;
    }
	void ComparePrices(HouseInfo h1, HouseInfo h2, HouseInfo h3)
	{

        if(h1.housePrice > h2.housePrice && h1.housePrice > h3.housePrice){
            cout << "The first house is cheaper.";
        }else if(h2.housePrice > h1.housePrice && h2.housePrice > h3.housePrice){
            cout << "The second house is cheaper.";
        }else if(h3.housePrice > h1.housePrice && h3.housePrice > h3.housePrice){
            cout << "The third house is cheaper.";
        }else if(h1.housePrice == h2.housePrice && h1.housePrice > h3.housePrice && h2.housePrice > h3.housePrice){
            cout << "The first and the second house are cheaper.";
        }else if(h1.housePrice == h3.housePrice && h1.housePrice > h2.housePrice && h3.housePrice > h2.housePrice){
            cout << "The first and the third house are cheaper.";
        }else if(h2.housePrice == h3.housePrice && h2.housePrice > h1.housePrice && h3.housePrice > h1.housePrice){
            cout << "The second and the third house are cheaper.";
        }

	}
};

int main()
{
    HouseInfo h1, h2, h3;
    char input;

    cout << "The first house is currently: ";
    h1.displayInfo();

    cout << "\n\nWould you like to update this information?(y or n) ";
    cin >> input;

	if(input != 'y' && input != 'n') {
		do {
			cout
					<< "I am sorry but the letter you used is not compatable as an answer, please enter 'y' for yes or 'n' for no: ";
			cin.clear();
			cin >> input;
		} while (input != 'y' && input != 'n');
	}

	if(input == 'y')
		h1.updateInfo();

	h2.updateInfo();

	h3.updateInfo();

    h1.ComparePrices(h1, h2, h3);


//	_getch();
	return 0;
}