#include<iostream>
#include"clsDblLinkedList.h"

using namespace std;

int main()
{
	clsDblLinkedList<int> MyDbblLinkedList;

	MyDbblLinkedList.InsertAtBeginning(5);
	MyDbblLinkedList.InsertAtBeginning(4);
	MyDbblLinkedList.InsertAtBeginning(3);
	MyDbblLinkedList.InsertAtBeginning(2);
	MyDbblLinkedList.InsertAtBeginning(1);

	cout << "\nLinked List Content: \n";
	MyDbblLinkedList.PrintList();

	cout << "\nNumber of items in the linked list = " << MyDbblLinkedList.Size();

	if (MyDbblLinkedList.IsEmpty())
	{
		cout << "\n it is empty.\n";
	}
	else
	{
		cout << "\n It is not empty.\n";
	}

	cout << "\nafter clear: \n";
	MyDbblLinkedList.Clear();
	cout<< MyDbblLinkedList.Size();
}