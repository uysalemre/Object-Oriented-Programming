/*
@AUTHOR : EMRE UYSAL
@PERSONAL_WEBSITE: uysalem16_itu2016.pythonanywhere.com
@COPYRIGHT: YOU CAN COPY AND USE THIS CODE WITHOUT PERMISSION.
*/
#include "ARTraverser.h"
#include <iostream>
using namespace std;

// start of ARTraverser class //
ARTraverser::ARTraverser()
{
	current = NULL;
}

ARTraverser::~ARTraverser()
{
	delete[] current;
}
// end of ARTraverser class //

// start of ARTF class //

ARTF::ARTF(Node *p)
{
	current = p;
}

bool ARTF::hasNode()
{ 
	if (current != NULL)
	{
		return true;
	}
	else
	{
		return false;
	}
}
int ARTF::next()
{ 
	int temp = current->data;
	current = current->next;
	return temp;
}


// end of ARTF class //

//start of ARTL class //
ARTL::ARTL(Node *p)
{
	current = p;
}


bool ARTL::hasNode()
{
	if (current != NULL)
	{
		return true;
	}
	else
	{
		return false;
	}
}

int ARTL::next()
{
	if (current != NULL)
	{
		int temp = current->data;
		current = current->prev;
		return temp;
	}
}

// end of ARTL class //
