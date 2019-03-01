/*
@AUTHOR : EMRE UYSAL
@PERSONAL_WEBSITE: uysalem16_itu2016.pythonanywhere.com
@COPYRIGHT: YOU CAN COPY AND USE THIS CODE WITHOUT PERMISSION.
*/
#ifndef TRAVERSER_H
#define TRAVERSER_H
#include "AdderRemover.h"

class FAFR:public AdderRemover
{
	public:
		FAFR();
		~FAFR();
		virtual void add(int);
		virtual void remove();
		virtual void setTraverser();

};

class FALR:public AdderRemover
{
	public:
		FALR();
		~FALR();
		virtual void add(int);
		virtual void remove();
		virtual void setTraverser();

};

class LALR:public AdderRemover
{
	public:
		LALR();
		~LALR();
		virtual void add(int);
		virtual void remove();
		virtual void setTraverser();

};

class LAFR:public AdderRemover
{
	public:
		LAFR();
		~LAFR();
		virtual void add(int);
		virtual void remove();
		virtual void setTraverser();

};

#endif
