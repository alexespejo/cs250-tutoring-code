#include "AnyList.h"
#include <iostream>
using namespace std;

//custom
AnyList::AnyList(const int a[], int size){
	count = size;
	first = new Node(a[0], nullptr);

	Node *curr = first;
	for (int i = 1; i < size; ++i){
		curr->setNext(new Node(a[i], nullptr));
		curr = curr->getNext();
	}
}

//custom 
AnyList::AnyList(vector<int> vec){
	count = static_cast<int>(vec.size());
	first = new Node(vec[0], nullptr);
	Node* curr = first;
	for (int i = 1; i < count; ++i){
		curr->setNext(new Node(vec[i], nullptr));
		curr = curr->getNext();
	}
}

void AnyList::copyElements(vector<Node>& refVec) const{
	Node* curr = first;
	while(curr = nullptr){
		refVec.push_back(*curr);	
		curr = curr->getNext();
	}
}

void AnyList::insertFront(int newData)
{	
	first = new Node(newData, first);
	++count;
}

void AnyList::print() const
{
	if (first == nullptr) 
	// Check if the list is empty.
	// You can also use: if (count == 0)
		cerr << "List is empty.";  
		// Use cerr, instead of cout. Why?
	else
	{
        	Node *current = first;   
		// Create a pointer to traverse the list.		
		// This pointer will point to the first node in the list.

		while (current != nullptr)	
		// While the current pointer is NOT a nullptr,
		// that is, while the current pointer has not reached  
		// the end of the list.
		{	                        
			// Output the data. 
			cout << current->getData() << " "; 
			// Move the pointer current forward.
			current = current->getNext();                         
		}		
	}
	cout << endl;
}

// This function does not delete the 
// list object; it ONLY deletes the nodes.
void AnyList::clearList()
{ 	
	Node  *temp = first; 	
	// Pointer to delete the node, which	
	// starts by pointing to the first node.
	
	while (first != nullptr)
	{
		first = first->getNext();
		delete temp;
		temp = first;
	}

	// Update the count outside the loop.
   	count = 0;
}

void AnyList::reverse() {
// 	// 1 -> 2 -> 3 -> 4 -> 5 -> 6 -> n
// 
	Node *prev = first; //1
	Node *curr = prev->getNext(); //2 
	Node *next = curr->getNext(); // 3
	prev->setNext(nullptr); // 1 => null

	while (next != nullptr){
		curr->setNext(prev);
		prev = curr;
		curr = next;
		next = next->getNext();
	}
	curr->setNext(prev);
	first = curr;
}

void AnyList::arrayToList(const int a[], int size){
	first = new Node(a[0], nullptr);
	count = size;
	Node *curr = first;
	for (int i = 1; i < size; ++i){
		curr->setNext(new Node(a[i], nullptr));	
		curr = curr->getNext();
	}
}

void AnyList::printAddress() const {
	Node* curr = first;
	for (int i = 0; i < count; ++i){
		cout << curr << " ";
		curr = curr->getNext();
	}
	cout << endl;
}
AnyList::~AnyList()
{
	if (first != nullptr)
		 clearList();
}