/*
@AUTHOR : EMRE UYSAL
@PERSONAL_WEBSITE: uysalem16_itu2016.pythonanywhere.com
@COPYRIGHT: YOU CAN COPY AND USE THIS CODE WITHOUT PERMISSION.
*/
#include <iostream>
#include "Traverser.h"

using namespace std;

int main(int argc, char **argv) {

	AdderRemover *myList[4];

	myList[0] = new FAFR();
	myList[1] = new LALR();
	myList[2] = new FALR();
	myList[3] = new LAFR();

	for (int j = 0; j<4; j++) {
		for (int i = 0; i<5; i++)
			myList[j]->add(i);
	}

	for (int j = 0; j<4; j++){
		myList[j]->remove();
		myList[j]->display();
		myList[j]->removeAll();
		myList[j]->display();
	}

	cout << endl << "--TEST CASE FOR ARTRAVERSER--" << endl;
	for (int j = 0; j < 4; j++) {
		for (int i = 0; i < 5; i++)
			myList[j]->add(i);
		myList[j]->remove();
	}
	for (int j = 0; j<4; j++){
		myList[j]->setTraverser();
		myList[j]->traverse();
	}

	system("pause");
	return 0;

}
