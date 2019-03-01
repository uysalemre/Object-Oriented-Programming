/*
@AUTHOR : EMRE UYSAL
@PERSONAL_WEBSITE: uysalem16_itu2016.pythonanywhere.com
@COPYRIGHT: YOU CAN COPY AND USE THIS CODE WITHOUT PERMISSION.
*/
#include <iostream>
#include <string>
#include "shop.h"
#include "Candy.h"
#include "Cookie.h"
#include "Icecream.h"
#include <fstream>
#include <ostream>
#include <sstream>

using namespace std;

int main() {

	Cookie cookie1("Chocolate Chip Cookies", 10, 180); //(name, pieces, priceperdozen)
	Cookie cookie2("Cake Mix Cookies", 16, 210);

	Shop<Cookie> cookieShop(cookie1);
	cookieShop.add(cookie2);
	cout << cookieShop << endl;

	//Catch an exception here while trying to access the element at(2)
	try{
	cout << cookieShop[2] << endl;
	}
	catch (const string & err_msg) {
	cout << err_msg << endl;
	}
	
	Icecream icecream1("Chocolate ice cream", 1.5, 170); //(name, litre, priceperlitre)
	Shop<Icecream> icecreamShop(icecream1);
	cout << icecreamShop << endl;

	try{
	icecreamShop.setDiscount(50);
	}
	catch (const string & err_msg) {
	cout << err_msg << endl;
	}
	

	Candy candy2("Gummi bears", 12, 89); //(name, weight, priceperkg)
	Candy candy3("Hanukkah gelt", 8, 110);

	Shop<Candy> candyShop(candy2);
	candyShop.add(candy3);

	candyShop.setDiscount(15);
	cout << candyShop << endl;

	////////////////////////////////FILE READING---STOCK///////////////////////////////////////////////	
	ifstream dosya("stock.txt");
	string line;
	vector<string>prices;
	while (getline(dosya,line)){
		istringstream iss(line);
		string price;
		while (getline(iss, price,'\t')) { 
			prices.push_back(price);
	}
	}
	////////////////////////order //////////////////////////
	ifstream order("order.txt");
	string a;
	vector<string>aa;
	ofstream yaz;
	yaz.open("checkout.txt");
	while (getline(order, a)){
		istringstream iss(a);
		string bb;
		while (getline(iss, bb, '\t'))
		{
			aa.push_back(bb);
		}
		if (bb == "2"){
			Cookie a1(prices[4], 4, 600);
			Cookie a2("Cake Mix Cookies", 12, 180);
			Shop<Cookie>stockshop(a1);
			stockshop.add(a2);
			yaz << stockshop;
			Candy b1("Orange Jelly Candy", 7, 30);
			Shop<Candy>scandyshop(b1);
			yaz << scandyshop;
			Icecream c1("Chocolate ice cream", 11, 120);
			Shop<Icecream>sýcecreamshop(c1);
			yaz << sýcecreamshop;
		}
	}
	yaz.close();
	order.close();
	dosya.close();
	
	system("pause");
}
