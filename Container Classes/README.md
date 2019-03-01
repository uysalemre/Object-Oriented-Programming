# CONTAINER-CLASSES
Implement an AdderRemover Class which makes operations for different container classes.

HOW TO RUN ?

  In windows you can use VISUAL STUDIO IDE.
  
  In Linux you can use;
  
        g++ ARTraverser.cpp ARTraverser.h AdderRemover.cpp AdderRemover.h Node.h Traverser.cpp Traverser.h main.cpp -o output
        ./output

2 Container (Data Storage) Classes

A container (collection) is a way that organizes storage of data in memory.
The primary operations for the container classes which you are asked to implement are:

  add: The function for adding element to the appropriate place of the list.
  
  remove: The function for removing element from the appropriate place of the list.
  
  removeAll: The function for deleting all elements in the list.
  
  display: The function for printing AdderRemover list elements from first element to last element to the screen.
  
  setTraverser: The function for setting/initializing traverser property to desired traverser strategy.
  
  traverse: The function for printing AdderRemover list elements using traverser.

3 The Problem Statement

You are going to implement different container classes to store data of integer. You will use doubly linked list
representation to store elements. You are not allowed to use any STL containers in this homework. You should
create your own classes.
First of all, define AdderRemover base class depicted in Figure 1 to extend classes and write polymorphic
functions. Its add, remove and setTraverser methods are pure virtual since there are different strategies to add,
remove and traverse elements from its internal list. This internal data structure is a doubly linked list of integer
elements. However, derived classes will directly use inherited display, removeAll and traverse methods.

ADDERREMOVER CLASS

   head: Node *
   
   tail: Node *
   
   name: string
   
   nodeCount: int
   
   traverser: ARTraverser *
   
   add(..)
   
   remove()
   
   setTraverser()
   
   display()
   
   removeAll()
   
   traverse()
   

ARTRAVERSER CLASS

  current: Node*
  
  hasNode()
  
  next()
  


Some of the strategies (classes) for adding and removing elements from their internal lists are the following :
  1. First Add First Remove (FAFR): When a new elements to be added, it adds to the beginning of the list,
  an element to be removed it removes from the beginning of list.

  2. First Add Last Remove(FALR): When a new elements to be added, it adds to the beginning of the list, an
  element to be removed it removes from the end of list.

  3. Last Add First Remove (LAFR): When a new elements to be added, it adds to the end of the list, an
  element to be removed it removes from the beginning of list.

  4. Last Add Last Remove (LALR): When a new elements to be added, it adds to the end of the list, an element
  to be removed it removes from the end of list.

Secondly, define ARTraverser abstract class. It over a way of getting sequential access to all elements of a
container class. It will be used to \read" data from a container. Its two methods:
   hasNode: Returns true if the list has element.
   next: Returns the current element in the list and advances the current position.
are pure virtual since they should be implemented appropriately for each type of strategies. Two strategies will
be defined:

  1. First AdderRemoverTraverser (ARTF): It is used to traverse through a container from the beginning
  element to the end element. FAFR and FALR classes are going to use this strategy as its traverser.

  2. Last AdderRemoverTraverser (ARTL): It is used to traverse through a container from the end element to
  the beginning element. LAFR and LALR classes are going to use this strategy as its traverser.

 Main Program

In main program, declare an array of pointers for base class AdderRemover. The pointer array will be a polymorphic
array which will store memory addresses of four different types of AdderRemover objects (FAFR, FALR, LAFR,
LALR). Figure 2 shows an example of the objects involved. You would add/remove elements to polymorphic array
FAFR, FALR, LAFR, LALR instances in order to test whether the functions work well or not. Your program should
print the name, nodeCount and the elements of internal list as separate groups.
