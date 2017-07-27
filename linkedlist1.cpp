#include<iostream>
#include<string.h>
using namespace std;

struct Node
{
	int data;
	Node *link;
};



int main()
{
	Node *start; //Head node
	start = NULL;//Head node pointing to nothing
	Node* temp =  new Node();//Node created 
	temp->data = 2;
	temp->link = NULL;
	cout<<temp->data<<endl;
	cout<<temp->link<<endl;
	start = temp;//head node points to the next node
		Node* temp1 =  new Node();
	temp1->data = 3;
	 temp1->link=temp;
	
	cout<<temp1->data<<endl;
   
	cout<<temp1->link<<endl;
	

	
	
}
	
