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
#include <fstream>
#include <ostream>
#include <exception>

using namespace std;

/*global variables for calculations*/
float total=0 ;
double kdv = 0.08;
int discount = 0;
float discounted = 0;
float dis_amount = 0;
template <class T>
class Shop{
	vector<T> elements;
public:
	Shop<T>(T temp)///constructor for taking objects and total cost
	{
		elements.push_back(temp);
		total = temp.getPay();
		total = total + total*0.08;
	}
	void add(T temp){///add function for adding objects and total cost
		elements.push_back(temp);
		total = total + temp.getPay()+temp.getPay()*0.08;
		
	}


	T* operator[](int a){///operator overloading for exeption
		throw string("We dont have enough Cookies!");
		
	}

	friend ostream& operator<< (ostream& data, const Shop<T>& dt)//operator overloading for printing 
	{
		if (discount == 0){
		data << "*********************" << endl;
		data << "Number of Items :" << dt.elements.size()<<endl;
		for (int  i = 0; i < dt.elements.size(); i++)
		{
			data <<i+1 <<": " << dt.elements[i].getName() << " #" << dt.elements[i].getNumber() << " Cost :" << dt.elements[i].getPay() << endl;
	
			
		}
		
		data <<"Total Cost : " <<total<<endl;
		data << "*********************"<<endl;
		total = 0;
		}
		else{
			data << "*********************" << endl;
			data << "Number of Items :" << dt.elements.size() << endl;
			for (int i = 0; i < dt.elements.size(); i++)
			{
				data << i + 1 << ": " << dt.elements[i].getName() << " #" << dt.elements[i].getNumber() << " Cost :" << dt.elements[i].getPay() << endl;
				

			}
			
			data << "Total Cost : " << total << endl;
			data << "*********************" << endl;
			data << "Discount: " << discount << "%" << endl;
			data << "Discount Amount: " << dis_amount << endl;
			data << "Discounted Cost:" << discounted<<endl;
			data << "*********************" << endl;
			total = 0;
		}
		return data;
	}
	void setDiscount(int a){/*setdiscount function for taking discount rate from main and calculating discount rate*/
		if (a<30 && a>0){
			discount = a;
			discounted = total - float(total*discount/ 100);
			
			dis_amount = discounted - total;
		}
		else{
			throw string("Discount rate is out of range!");
		}
		
	}
};
