/*
@AUTHOR : EMRE UYSAL
@PERSONAL_WEBSITE: uysalem16_itu2016.pythonanywhere.com
@COPYRIGHT: YOU CAN COPY AND USE THIS CODE WITHOUT PERMISSION.
*/
#ifndef SMALLVECTOR_H
#define SMALLVECTOR_H
#define BufferSize 32

using namespace std;

class SmallVector{
	
	//friend ostream &operator<<(ostream&, const SmallVector &);							//operator overloading for <<
	friend SmallVector &operator+(SmallVector const &, SmallVector const &);				//concatanates two SmallVector objects

	private:
		int StaticBuffer[BufferSize];								//static buffer
		int *DynamicBuffer;											//dynamic buffer
		int ArrSize;												//number of elements in the vector 
		int capasity;												//allocated memory space 
		int &Operation(int)const;

	public:															 
		SmallVector();												//constructor
		SmallVector(int *, int);									//copy constructor
		~SmallVector();												//destructor
		void push_back(int);										//add the number at the end of the array
		void push_back(int *, int);									//overloaded version of push_back takes int[] and it's size
		int pop_back();												//removes the last element and returns its value
		SmallVector &reverse();										//returns current elements in reverse order as a SmallVector object.
		SmallVector &operator*(int);								//takes an int and replicates the elements in SmallVector and return as SmallVector object
		int operator[](int)const;									//takes an int and returns the element for that int
		int getSize()const;											//returns the array size
	
};

#endif
