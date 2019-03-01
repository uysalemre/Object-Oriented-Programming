/*
@AUTHOR : EMRE UYSAL
@PERSONAL_WEBSITE: uysalem16_itu2016.pythonanywhere.com
@COPYRIGHT: YOU CAN COPY AND USE THIS CODE WITHOUT PERMISSION.
*/
#include <iostream>
#include <string>
#include "Icecream.h"

using namespace std;
Icecream::Icecream(string a, float b, float c)
{
	name = a;
	number = b;
	price = c;
	pay = number*price;
}
string Icecream::getName()const
{
	return name;
}

float Icecream::getPrice()const
{
	return price;
}
float Icecream::getNumber()const
{
	return number;
}
float Icecream::getPay()const
{
	return pay;
}
