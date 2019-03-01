/*
@AUTHOR : EMRE UYSAL
@PERSONAL_WEBSITE: uysalem16_itu2016.pythonanywhere.com
@COPYRIGHT: YOU CAN COPY AND USE THIS CODE WITHOUT PERMISSION.
*/
#pragma once
#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <string>
#include <vector>
using namespace std;

class Cookie{
private:
	string name;//name of the cookie
	int number;//order number of the cookie
	int price;//price of the cookie
	float pay;//total price of the cookie
public:
	Cookie(string a, int b, int c);//constructor
	int getPrice()const;//function for getting price
	string getName()const;//function for getting name
	int getNumber()const;//function for getting number
	float getPay()const;//function for getting pay
	
};
