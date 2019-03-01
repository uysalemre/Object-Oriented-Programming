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
class Candy{
private:
	string name;//name of the candy
	float number;//order number of the candy
	float price;//price per number
	float pay;//total price
public:
	Candy(string a, float b, float c);//constructor
	float getPrice()const;//function for getting price
	string getName()const;//function for getting name
	float getNumber()const;//function for getting number
	float getPay()const;//function for getting pay

};
