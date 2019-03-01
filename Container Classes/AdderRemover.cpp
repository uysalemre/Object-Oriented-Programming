/*
@AUTHOR : EMRE UYSAL
@PERSONAL_WEBSITE: uysalem16_itu2016.pythonanywhere.com
@COPYRIGHT: YOU CAN COPY AND USE THIS CODE WITHOUT PERMISSION.
*/
#include "AdderRemover.h"
#include <iostream>
#include <string>

using namespace std;

//	contructor
AdderRemover::AdderRemover()
{
	head = NULL;
	tail = NULL;
	NodeCount = 0;
	traverser = NULL;
}

// destructor
AdderRemover::~AdderRemover()
{
	delete[] head;
	delete[] tail;
	delete[] traverser;
}

void AdderRemover::display()
{
	cout << "------------------------------" << endl;
	cout << this->name << " | "<<"NodeCount: "<<this->NodeCount<<endl;
	cout << "------------------------------" << endl;
	Node *traverse;
	traverse = head;
	if (!head)
	{
		cout << "There is no element to print !" << endl;
	}
	while (traverse)
	{
		cout << traverse->data << endl;
		traverse = traverse->next;
	}
}

void AdderRemover::removeAll()
{
	Node *remove;	
	while (head)
	{
		remove = head;
		head = head->next;
		remove = NULL;
		delete remove;
	}
	NodeCount = 0;
}

void AdderRemover::traverse()
{
	cout << "------------------------------" << endl;
	cout << this->name << " | " << "NodeCount : " << this->NodeCount<<endl;
	cout << "------------------------------" << endl;
	while (traverser->hasNode())
	{
		cout << traverser->next() << endl;
	}
}
