#include<iostream>
using namespace std;

int main()
{
	float Cel,Far;
	cout << "Enter Celsius temperature : ";
	cin >> Cel;
	Far=(Cel*(9.0/5.0))+32 ;
	cout << "Fahrenheit = " << Far << endl;
	cout << "Now weather in Thailand is " << (Far > 70?"HOT":"COOL") << endl ;
	return(0);
}
