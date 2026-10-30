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

	MyDbblLinkedList.InsertAfter(1, 500);

	cout << "\nAfter Insert: \n";
	MyDbblLinkedList.PrintList();
	

}