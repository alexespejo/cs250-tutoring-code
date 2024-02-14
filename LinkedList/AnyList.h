#ifndef ANYLIST_H
#define ANYLIST_H

#include<iostream>
#include <string> // Need to include for nullptr.			
#include <vector> //custom

class Node
{
public:
	Node() : data(0), next(nullptr) {}
	Node(int theData, Node *newNext) 
		: data(theData), next(newNext){}
	Node* getNext() const { return next; }
	int getData( ) const { return data; }
	void setData(int theData) { data = theData; }
	void setNext(Node *newNext) { next = newNext; }
	~Node(){}
private:
	int data;		
	Node *next; // Pointer that points to next node.
};


class AnyList
{
public:
	AnyList() : first(nullptr), count(0) {}
	//custom
	AnyList(const int a[], int size);
	AnyList(std::vector<int> vec);

	void insertFront(int);	

	void print() const;

	void reverse();
	void arrayToList(const int a[], int size);
	void printAddress() const;

	void copyElements(std::vector<Node>& refVec) const;
	
	void clearList();
	~AnyList();

private:
	Node *first;
	// Pointer to point to the first node in the list.
	int count;
	// Variable to keep track of number of nodes in the list.
};

#endif