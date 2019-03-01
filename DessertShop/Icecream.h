/*
@AUTHOR : EMRE UYSAL
@PERSONAL_WEBSITE: uysalem16_itu2016.pythonanywhere.com
@COPYRIGHT: YOU CAN COPY AND USE THIS CODE WITHOUT PERMISSION.
*/
#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <string>
#include <vector>

using namespace std;
class Icecream{
private:
	string name;//name of the icecream
	float number;//number of the order
	float price;//price for a litre
	float pay;//total price
public:
	Icecream(string a, float b, float c);//constructor
	float getPrice()const;//function for getting price
	string getName()const;//function for getting name
	float getNumber()const;//function for getting number
	float getPay()const;//function for getting pay


};
