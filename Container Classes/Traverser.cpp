/*
@AUTHOR : EMRE UYSAL
@PERSONAL_WEBSITE: uysalem16_itu2016.pythonanywhere.com
@COPYRIGHT: YOU CAN COPY AND USE THIS CODE WITHOUT PERMISSION.
*/
#include "Traverser.h"
#include <iostream>

using namespace std;

// first add first remove class 

FAFR::FAFR()
{
	name = "FAFR";
}

void FAFR::add(int number)
{
	Node *newnode = new Node();
	newnode->data = number;
	if (head == NULL)
	{
		head = newnode;
		tail = head;
	}
	else
	{	
		newnode->next = head;
		head->prev = newnode;
		head = newnode;
	}
	NodeCount++;
}

void FAFR::remove()
{
	Node *removed = new Node();
	if (NodeCount <= 1)
	{
		head = NULL;
		tail = NULL;
	}
	else
	{
		removed = head;
		head = head->next;
		head->prev = NULL;
		removed = NULL;
		delete removed;
	}
	NodeCount--;
}

void FAFR::setTraverser()
{
	traverser = new ARTF(head);
}
// end of first add first remove class //

// first add last remove class 

FALR::FALR()
{
	name = "FALR";
}

void FALR::add(int number)
{
	Node *newnode = new Node();
	newnode->data = number;
	if (head == NULL)
	{
		head = newnode;
		tail = head;
	}
	else
	{
		newnode->next = head;
		head->prev = newnode;
		head = newnode;
	}
	NodeCount++;
}

void FALR::remove()
{
	Node *newnode = new Node();
	if (NodeCount <= 1)
	{
		head = NULL;
		tail = NULL;
	}
	else
	{
		newnode = tail;
		tail = tail->prev;
		newnode->prev = tail;
		newnode = NULL;
		tail->next = NULL;
		delete newnode;
	}
	NodeCount--;

}

void FALR::setTraverser()
{
	traverser = new ARTF(head);
}

// end of first add last remove class 

// start of last add first remove class

LAFR::LAFR()
{
	name = "LAFR";
}

void LAFR::add(int number)
{
	Node *newnode = new Node();
	newnode->data = number;
	if (head == NULL)
	{
		head = newnode;
		tail = newnode;
	}
	else
	{
		tail->next = newnode;
		newnode->prev = tail;
		tail = newnode;
	}
	NodeCount++;
}

void LAFR::remove()
{
	Node *removed = new Node();
	if (NodeCount <= 1)
	{
		head = NULL;
		tail = NULL;
	}
	else
	{
		removed = head;
		head = head->next;
		head->prev = NULL;
		removed = NULL;
		delete removed;
	}
	NodeCount--;
}


void LAFR::setTraverser()
{
	traverser = new ARTL(tail);
}
// end of last add first remove class 

//start of last add last remove class

LALR::LALR()
{
	name = "LALR";
}

void LALR::add(int number)
{
	Node *newnode = new Node();
	newnode->data = number;
	if (head == NULL)
	{
		head = newnode;
		tail = newnode;
	}
	else
	{
		tail->next = newnode;
		newnode->prev = tail;
		tail = newnode;
	}
	NodeCount++;
}




void LALR::remove()
{
	Node *newnode = new Node();
	if (NodeCount <= 1)
	{
		head = NULL;
		tail = NULL;
	}
	else
	{
		newnode = tail;
		tail = tail->prev;
		newnode->prev = tail;
		newnode = NULL;
		tail->next = NULL;
		delete newnode;
	}
	NodeCount--;
}



void LALR::setTraverser()
{
	traverser = new ARTL(tail);
}
