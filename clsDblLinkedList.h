#pragma once
#include<iostream>
using namespace std;

template <class T>
class clsDblLinkedList
{
public:
	struct Node
	{
		T value;
		Node* next;
		Node* prev;
	};

private:
	Node * _head=NULL;

public:

	void PrintList()
	{
		Node* current = _head;
		cout << "NULL <-->";

		while (current != NULL)
		{
			cout << current->value << " <--> ";
			current = current->next;
		}

		cout << "NULL";
	}

	void InsertAtBeginning(T Value)
	{
		Node* N1 = new Node();
		N1->value = Value;
		N1->next = _head;
		N1->prev = NULL;

		if (_head != NULL)
			_head->prev = N1;

		_head = N1;
	}

	Node* Find(T Value)
	{
		Node* current = _head;
		
		while (current != NULL)
		{
			if (current->value == Value)
				return current;

			current = current->next;
		}

		return NULL;
	}

	void InsertAfter(Node* current,T Value )
	{
		
		Node* N1 = new Node();

		N1->value = Value;
		N1->next = current->next;
		N1->prev = current;
		
		if (current->next != NULL)
		{
			current->next->prev = N1;
		}

		current->next = N1;
	
	}
	
	void InsertAtEnd(T Value)
	{
		Node* N1 = new Node();

		N1->value = Value;
		N1->next = NULL;

		if (_head == NULL)
		{
			_head = N1;
			N1->prev = NULL;
			
		}
		else
		{
			Node* current = _head;

			while (current->next != NULL)
			{
				current = current->next;
			}

			current->next = N1;
			N1->prev = current;
		}
	}

	void DeleteNode(Node* NodeToDelete)
	{
		if (NodeToDelete == NULL || _head == NULL)
			return;

		if (NodeToDelete == _head)
		{
			_head = _head->next;
		}

		if (NodeToDelete->next != NULL)
		{
			NodeToDelete->next->prev = NodeToDelete->prev;
		}

		if (NodeToDelete->prev != NULL)
		{
			NodeToDelete->prev->next = NodeToDelete->next;
		}

		delete NodeToDelete;

	}


};

