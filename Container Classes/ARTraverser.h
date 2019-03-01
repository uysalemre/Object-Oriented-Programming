/*
@AUTHOR : EMRE UYSAL
@PERSONAL_WEBSITE: uysalem16_itu2016.pythonanywhere.com
@COPYRIGHT: YOU CAN COPY AND USE THIS CODE WITHOUT PERMISSION.
*/
#ifndef ARTRAVERSER_H
#define ARTRAVERSER_H
#include <iostream>
#include "Node.h"

// abstract class ARTraverser which has no objects and more than one pure virtual functions

class ARTraverser
{
	public:
		ARTraverser();
		~ARTraverser();
		virtual bool hasNode() = 0 ;	//pure virtual 
		virtual int  next() = 0 ;		//pure virtual
	
	protected:
		Node *current;
};

class ARTF:public ARTraverser
{
	public:
		ARTF(Node *);
		~ARTF();
		virtual bool hasNode();		//pure virtual 
		virtual int  next();		//pure virtual
};

class ARTL:public ARTraverser
{
	public:
		ARTL(Node *);
		~ARTL();
		virtual bool hasNode() ;	//pure virtual 
		virtual int  next()  ;		//pure virtual
};


#endif
