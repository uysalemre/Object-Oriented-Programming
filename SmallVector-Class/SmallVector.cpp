/*
@AUTHOR : EMRE UYSAL
@PERSONAL_WEBSITE: uysalem16_itu2016.pythonanywhere.com
@COPYRIGHT: YOU CAN COPY AND USE THIS CODE WITHOUT PERMISSION.
*/
#include <iostream>
#include "SmallVector.h"

using namespace std;

// default constructor for empty vector 
SmallVector::SmallVector()
{
	ArrSize = 0;  
	capasity = 32;
	DynamicBuffer = NULL;
	
}

// copy constructor 
SmallVector::SmallVector(int *arr , int size)
{
	DynamicBuffer = NULL;
	ArrSize = size;
	if (size > 32)
	{
		capasity = size;
		int remaining = size - 32;
		DynamicBuffer = new int[remaining]; // get space for dynamic buffer 
		for (int i = 0; i < 32; i++)
		{
			StaticBuffer[i] = arr[i];
		}
		for (int i = 0; i < remaining; i++)
		{
			DynamicBuffer[i] = arr[i + 32];		
		}
		cout << endl;
	}
	else
	{
		capasity = 32;
		for (int i = 0; i < size; i++)
		{
			StaticBuffer[i] = arr[i];
		}
	}
}

//destructor
SmallVector::~SmallVector()
{
	//delete[] DynamicBuffer; //delete the dynamicly allocated memory
}

// push_back function
void SmallVector::push_back(int number)
{
	if (this->ArrSize > 32)
	{
		this->DynamicBuffer = new int[this->ArrSize - 32 + 1];
		this->DynamicBuffer[this->ArrSize - 32] = number;
		this->ArrSize += 1;
	}
	else
	{
		this->StaticBuffer[this->ArrSize] = number;
		this->ArrSize += 1;
	}

}

// pop_back function
int SmallVector::pop_back()
{
	int last_element;
	if (this->ArrSize > 32)
	{
		last_element=this->DynamicBuffer[this->ArrSize - 32-1];
		this->DynamicBuffer = new int[this->ArrSize - 32 - 1];
		this->ArrSize -= 1;
		
	}
	else
	{
		last_element=this->StaticBuffer[this->ArrSize-1];
		this->ArrSize -= 1;
	}
	return last_element;
}

// reverse function
SmallVector& SmallVector::reverse()
{
	SmallVector *reversed =  new SmallVector;
	if (this->ArrSize > reversed->capasity)		//reverse with dynamic buffer
	{
		int remaining = this->ArrSize - 32;
		reversed->DynamicBuffer = new int[remaining];
		reversed->capasity = this->ArrSize;
		reversed->ArrSize = this->ArrSize;
		int counter = 0;
		//dynamic buffer reversed
		memcpy(&reversed->DynamicBuffer, &this->DynamicBuffer, sizeof(this)); // dont loose adresses
		for (int i = 0; i < (remaining / 2); i++) {
			int temporary = reversed->DynamicBuffer[i];                
			reversed->DynamicBuffer[i] = reversed->DynamicBuffer[(remaining - 1) - i];
			reversed->DynamicBuffer[(remaining - 1) - i] = temporary;
		}
	
		//static buffer reversed
		int counter2 = 0;
		for (int i = this->ArrSize-remaining-1; i >= 0; i--)
		{
			reversed->StaticBuffer[counter2] = this->StaticBuffer[i];
			counter2++;
		}
	}
	else                                       //reverse without dynamic buffer
	{
		reversed->ArrSize = this->ArrSize;
		int counter = 0;
		for (int i = this->ArrSize-1; i >= 0; i--)
		{
			reversed->StaticBuffer[counter] = this->StaticBuffer[i];
			counter++;
		}
	}
	return *reversed;
}

// + operator overloading
SmallVector &operator+ (SmallVector const &test2 , SmallVector const &test)
{
	SmallVector *result = new SmallVector;
	result->ArrSize = test2.ArrSize + test.ArrSize;
	result->capasity = test.capasity + test2.capasity;

	if (result->ArrSize > 32)	//with dynamic buffer
	{
		result->DynamicBuffer = new int[result->ArrSize-32];
		if (test.ArrSize > 32)
		{
			memcpy(&result->StaticBuffer,&test.StaticBuffer,sizeof(test));
			int remaining = test.ArrSize - 32;
			for (int i = 0; i < remaining; i++)
			{
				result->DynamicBuffer[i] = test.DynamicBuffer[i];
			}
			if (test2.ArrSize>32)
			{
				for (int i = 0; i < test2.ArrSize; i++)
				{
					if (i == 32){ break; }
					result->DynamicBuffer[i + remaining] = test2.StaticBuffer[i];
				}
				for (int i = 0; i < test2.ArrSize - 32; i++)
				{
					result->DynamicBuffer[31 + remaining + i] = test2.DynamicBuffer[i];
				}
			}
			else
			{
				for (int i = 0; i < test2.ArrSize; i++)
				{
					result->DynamicBuffer[i + remaining] = test2.StaticBuffer[i];
				}
			}
		}
		else if (test2.ArrSize >32)
		{
			memcpy(&result->StaticBuffer, &test2.StaticBuffer, sizeof(test2));
			int remaining = test2.ArrSize - 32;
			for (int i = 0; i < remaining; i++)
			{
				result->DynamicBuffer[i] = test2.DynamicBuffer[i];
			}
			if (test.ArrSize>32)
			{
				for (int i = 0; i < test.ArrSize; i++)
				{
					if (i == 32){ break; }
					result->DynamicBuffer[i + remaining] = test.StaticBuffer[i];
				}
				for (int i = 0; i < test.ArrSize - 32; i++)
				{
					result->DynamicBuffer[31 + remaining + i] = test.DynamicBuffer[i];
				}
			}
			else
			{
				for (int i = 0; i < test.ArrSize; i++)
				{
					result->DynamicBuffer[i + remaining] = test.StaticBuffer[i];
				}
			}
		
		}
	}
	else //no need to dynamic buffer
	{
		for (int i = 0; i < test.ArrSize; i++)
		{
			result->StaticBuffer[i] = test.StaticBuffer[i];
		}
		for (int i = 0; i < test2.ArrSize; i++)
		{
			result->StaticBuffer[i + test.ArrSize] = test2.StaticBuffer[i];
		}
	}
	// it creates problem because of memcpy function ; then init again (debug it)//
	result->ArrSize = test2.ArrSize + test.ArrSize;		
	result->capasity = test.capasity + test2.capasity;
	return *result;
	
}

// * operator overloading 
SmallVector &SmallVector:: operator* (int number)
{
	SmallVector *Replicated = new SmallVector;
	if (this->ArrSize < 32)
	{
		Replicated->ArrSize = this->ArrSize * number;
		Replicated->capasity = this->capasity * number;
		if (Replicated->ArrSize > 32)
		{
			Replicated->DynamicBuffer = new int[Replicated->ArrSize];
			int counter = 0;
			while (number != 0)
			{
				if (counter >= 32){ break; }
				for (int i = 0; i < this->ArrSize; i++)
				{
					Replicated->StaticBuffer[counter] = this->StaticBuffer[i];
					counter++;
				}
				number--;
			}
			int counter2 = 0;
			while (number != 0)
			{
				for (int i = 0; i < this->ArrSize; i++)
				{
					Replicated->DynamicBuffer[counter2] = this->StaticBuffer[i];
					counter2++;
				}
				number--;
			}

		}
		else
		{	
			int counter = 0;
			while (number != 0)
			{
				for (int i=0; i < this->ArrSize; i++)
				{
					Replicated->StaticBuffer[counter] = this->StaticBuffer[i];	
					counter++;
				}
				number--;
			}
		}
	}
	else
	{
		Replicated->DynamicBuffer = new int[Replicated->ArrSize];
		int counter = 0;
		while (number != 0)
		{
			if (counter >= 32){ break; }
			for (int i = 0; i < this->ArrSize; i++)
			{
				Replicated->StaticBuffer[counter] = this->StaticBuffer[i];
				counter++;
			}
			number--;
		}
		int counter2 = 0;
		while (number != 0)
		{
			for (int i = 0; i < this->ArrSize; i++)
			{
				Replicated->DynamicBuffer[counter2] = this->StaticBuffer[i];
				counter2++;
			}
			number--;
		}
	}
	return *Replicated;


}

// [] operator overloading
int SmallVector:: operator[] (int number)const
{
	int element;
	if (number >= 0) // number is positive 
	{
		if (this->ArrSize > 32)
		{
			int remaining = this->ArrSize - 32;
			if (number < remaining)
			{
				element = this->DynamicBuffer[number];
			}
			else
			{
				element = this->StaticBuffer[number-remaining];
			}
		}
		else
		{
			element = this->StaticBuffer[number];
		}
	}
	else             // number is negative
	{
		if (number < -(this->ArrSize))
		{
			int mod = number % -(this->ArrSize);
			element = this->StaticBuffer[mod];
		}
		else
		{
			element = this->StaticBuffer[this->ArrSize + number ];
		}
	}
	return element;
}



int SmallVector::getSize()const
{
	return ArrSize;
}

