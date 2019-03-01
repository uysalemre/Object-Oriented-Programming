/*
@AUTHOR : EMRE UYSAL
@PERSONAL_WEBSITE: uysalem16_itu2016.pythonanywhere.com
@COPYRIGHT: YOU CAN COPY AND USE THIS CODE WITHOUT PERMISSION.
*/
#ifndef NODE_H
#define NODE_H
#include <iostream>

// Node struct for creating doubly linked list

struct Node{
		
		Node *next;			//next of a node
		Node *prev;			//previous of a node
		int data;			//data in the node
};

#endif
