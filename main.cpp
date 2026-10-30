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

	//cout << "\nLinked list content after revers: \n";

	clsDblLinkedList<int>::Node* N;

	N = MyDbblLinkedList.GetNod(4);

	if (N != NULL)
	{
		cout << "\nNode value is: " << N->value;
	}
	
}