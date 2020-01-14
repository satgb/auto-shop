#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include <ostream>
#include <iostream>

using namespace std;

template <class T>
class LinkedList
{
	template <typename V>
	friend ostream& operator<<(ostream&, LinkedList<V>&);

	class Node
	{
		friend class LinkedList;
		
		private:
			T data;
			Node* next;
	};

	public:
		LinkedList();			//constructor
		~LinkedList();			//destructor
		int getSize() const;		//return size of list

		LinkedList& operator+=(T&);	//add object to list
		LinkedList& operator-=(T&);	//remove object from list
		T operator[](int);		//return object from list at specified index

	private:
		Node* head;
};

template <class T>
LinkedList<T>::LinkedList():head(0)	//initialize head to 0
{
	
}

template <class T>
LinkedList<T>::~LinkedList()
{
	Node *currNode, *nextNode;

	currNode = head;

	//traverse the list
	while (currNode != 0)
	{
		nextNode = currNode->next;
		delete currNode->data;		//free data at pointer location
		delete currNode;		//free pointer
		currNode = nextNode;
	}
}

template <class T>
LinkedList<T>& LinkedList<T>::operator+=(T& t)
{
	Node *currNode, *prevNode;
	Node *newNode = new Node;
	newNode->data = t;	//set pointer to address of object
	newNode->next = 0;
	
	currNode = head;
	prevNode = 0;

	while (currNode != 0)
	{
		if(*newNode->data < *currNode->data)	//comparison based on class of object
			break;
		prevNode = currNode;
		currNode = currNode->next;
	}

	if (prevNode == 0) 
	{
		head = newNode;
	}
	else
	{
		prevNode->next = newNode;
	}

	newNode->next = currNode;
	
	return *this;
}

template <class T>
LinkedList<T>& LinkedList<T>::operator-=(T& t)
{
	Node *currNode, *prevNode;

	currNode = head;
	prevNode = 0;

	while (currNode != 0)
	{
		if (currNode->data == t)	//if pointer value = address of object
			break;
		prevNode = currNode;
		currNode = currNode->next;
	}

	if (currNode == 0) 
		return *this;

	if (prevNode == 0)
	{
		head = currNode->next;
	}
	else
	{
		prevNode->next = currNode->next;
	}

	delete currNode;

	return *this;
}

template <class T>
int LinkedList<T>::getSize() const
{
	Node *currNode = head;
	int size = 0;

	while (currNode != 0)
	{
		currNode = currNode->next;
		size++;
	}

	return size;
}

template <class T>
T LinkedList<T>::operator[](int i)	
{
	if(i < 0 || i > (getSize()-1))
	{
		return 0;
	}
	else
	{
		Node *currNode = head;

		for (int j = 0; j < i; j++)
		{
			currNode = currNode->next;
		}

		return currNode->data;	
	}
}

template <class T>
ostream& operator<<(ostream& output, LinkedList<T>& l)
{	
	//derefernce pointer
	//format output based on class of object
	for (int i = 0; i < l.getSize(); i++)
	{
		output << *l[i];
	}
	
	return output;
}

#endif
