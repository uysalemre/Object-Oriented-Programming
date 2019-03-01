/*
@AUTHOR : EMRE UYSAL
@PERSONAL_WEBSITE: uysalem16_itu2016.pythonanywhere.com
@COPYRIGHT: YOU CAN COPY AND USE THIS CODE WITHOUT PERMISSION.
*/
#include <iostream>
#include <string>
#include "Candy.h"

using namespace std;
Candy::Candy(string a, float b, float c)
{
	name = a;
	number = b;
	price = c;
	pay = number*price;

}
string Candy::getName()const
{
	return name;
}

float Candy::getPrice()const
{
	return price;
}
float Candy::getNumber()const
{
	return number;
}
float Candy::getPay()const
{
	return pay;
}
