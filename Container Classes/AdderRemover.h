/*
@AUTHOR : EMRE UYSAL
@PERSONAL_WEBSITE: uysalem16_itu2016.pythonanywhere.com
@COPYRIGHT: YOU CAN COPY AND USE THIS CODE WITHOUT PERMISSION.
*/
#ifndef ADDERREMOVER_H
#define ADDERREMOVER_H
#include <iostream>
#include "Node.h"
#include "ARTraverser.h"

using namespace std;

// base class to create FAFR FALR LAFR LALR classes 

class AdderRemover
{
	public:
		AdderRemover();
		~AdderRemover();
		virtual void add(int) = 0;			//pure virtual function which makes different ops. in other classes
		virtual void remove() = 0;			//pure virtual function which makes different ops. in other classes
		virtual void setTraverser() = 0;	//pure virtual function which makes different ops. in other classes
		void display();					
		void removeAll();
		void traverse();

	protected:
		Node *head; 
		Node *tail;
		string name;
		int NodeCount;
		ARTraverser *traverser;
		
};



#endif
