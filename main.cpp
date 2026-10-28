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

	MyDbblLinkedList.PrintList();

	int value = 1;
	clsDblLinkedList<int>::Node* N1= MyDbblLinkedList.Find(value);

	if (N1 != NULL)
		cout << "\n\nNode whith value " << value << "  found  :-)\n";
	else
		cout << "\n\nNode whith is not found :-(\n";


	MyDbblLinkedList.PrintList();
	

	cout << "\n\nafter delete  first : \n";
	MyDbblLinkedList.DeleteFirstNode();

	MyDbblLinkedList.PrintList();

	cout << "\n\nafter delete  last : \n";
	MyDbblLinkedList.DeleteLastNode();

	MyDbblLinkedList.PrintList();

}