#include"LL.hpp"

LL::LL()
{
	LLheader = NULL;
	}
	bool LL::isEmpty()
	{
	if (LLheader == NULL)
	{
		return true;
	}
	else
	{
		return false;
	}
}

void LL::push_back(int data)
{
	Element *cur= LLheader, *newNode;
	newNode = new Element;
	newNode->dataValue = data;
	newNode->nextPtr = NULL;
	if (cur == NULL)
	{
		LLheader = newNode;
	}
	else
	{
		while (cur->nextPtr != NULL)
		cur = cur->nextPtr;
		cur->nextPtr = newNode;
	}
}

void LL::push_front(int data)
{
	Element *cur = LLheader,*newNode;
	newNode = new Element;
	newNode->dataValue= data;
	newNode->nextPtr = NULL;
	LLheader = newNode;
	newNode->nextPtr = cur;
}

void LL::debug()
{

	int i = 0;
	Element * tPtr;
	tPtr = LLheader;
	cout << "debug " << endl << "List header has" << tPtr << endl;
	while (tPtr != nullptr)
	{
		cout << "Node " << i << " is at address " << tPtr << ", forward ptr is " << tPtr->nextPtr << ", contains data " << tPtr->dataValue << endl;
		tPtr = tPtr->nextPtr;
		i++;
	}
	cout << "Leaving Debugger" << endl << endl;
	return;
}

void LL::display_nodes()
{
	Element *next = LLheader;
	cout << "Linked list has : ";
	while (next != NULL)
	{
	cout << next->dataValue << " ";
	next = next->nextPtr;
	}
	cout << endl;
}
