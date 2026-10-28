#pragma once
#include<iostream>
using namespace std;

template <class T>
class clsDblLinkedList
{
protected:

	int _size = 0;

public:
	class Node
	{
	public:

		T value;
		Node* next;
		Node* prev;
	};


	Node * _head=NULL;


	void PrintList()
	{
		Node* current = _head;

		while (current != NULL)
		{
			cout << current->value << "  ";
			current = current->next;
		}

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

	void InsertAtBeginning(T Value)
	{
		Node* newNode = new Node();
		newNode->value = Value;
		newNode->next = _head;
		newNode->prev = NULL;

		if (_head != NULL)
			_head->prev = newNode;

		_head = newNode;
		_size++;
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
		_size++;
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
		_size++;
	}

	void DeleteNode(Node* &NodeToDelete)
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
		_size--;
	}

	void DeleteFirstNode()
	{
		if (_head == NULL)
			return;

		Node* temp = _head;

		_head = _head->next;
		
		if (_head != NULL)
		{
			_head->prev = NULL;
		}

		delete temp;
		_size--;
	}

	void DeleteLastNode()
	{
		if (_head == NULL)
			return;

		Node* current
			= _head;

		if (_head->next == NULL)
		{
			_head = NULL;

			delete current;
			return;
		}

		while (current->next->next != NULL)
		{
			current = current->next;
		}

		Node* NodeToDelete = current->next;
		current->next = NULL;

		delete NodeToDelete;

		_size--;
	}

	int Size()
	{
		return _size;
	}

	bool IsEmpty()
	{
		return (_size == 0 ? true : false);
	}

	void Clear()
	{
		while (_size > 0)
		{
			DeleteFirstNode();
		}
	}

};

