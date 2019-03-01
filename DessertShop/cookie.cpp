/*
@AUTHOR : EMRE UYSAL
@PERSONAL_WEBSITE: uysalem16_itu2016.pythonanywhere.com
@COPYRIGHT: YOU CAN COPY AND USE THIS CODE WITHOUT PERMISSION.
*/
#include <iostream>
#include <string>
#include "cookie.h"

using namespace std;
Cookie::Cookie(string a, int b, int c)
{
	name = a;
	number = b;
	price = c;
	pay = (float(number) / 12)*price;
	
}
string Cookie::getName()const
{
	return name;
}

int Cookie::getPrice()const
{
	return price;
}
int Cookie::getNumber()const
{
	return number;
}
float Cookie::getPay()const
{
	return pay;
}



