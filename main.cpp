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

	clsDblLinkedList<int>::Node* N1= MyDbblLinkedList.Find(1	);

	if (N1 != NULL)
		cout << "\n\nNode whith value 2 found  :-)\n";
	else
		cout << "\n\nNode whith is not found :-(\n";


	MyDbblLinkedList.PrintList();
	

	cout << "\n\nafter delete to end : \n";
	MyDbblLinkedList.DeleteNode(N1);

	MyDbblLinkedList.PrintList();

}