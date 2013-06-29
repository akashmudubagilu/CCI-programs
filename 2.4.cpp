/*You have two numbers represented by a linked list, where each node contains a sin- gle digit The digits are stored in reverse order, such that the 1’s digit is at the head of the list Write a function that adds the two numbers and returns the sum as a linked list
EXAMPLE
Input: (3 -> 1 -> 5) + (5 -> 9 -> 2)
Output: 8 -> 0 -> 8 */
#include<iostream>
#include <math.h>       /* pow */

using namespace std;


struct Node {
	int data ; 
	Node * next;
	
	Node (int a){   	
 		data = a;
		next = NULL;
	}
  	Node (Node *n){
   		data = n->data;
  		next = n->next;
  	}
};

class List{
	Node *start;
	int count;	
	public:
	List () {start = NULL;}
	List(Node * n){start = n;}
	Node * getStart(){return start;}
		
	void printAll( ){
		Node *n = start;
 		while (n){
			cout << n->data ;
			n= n->next;
			if (n)  cout << " --> ";
		}
 	}
	
	void addNode(Node *n){
		n->next = start;
		start = n ; 	
	}
	void addNodeAtStart(int a){
		Node *n = new Node(a);
		n->next = start;
		start = n ; 	
	}
	
 };

List * add(List *l, List* r,List *result){
	Node *n = l->getStart();
	int lValue = 0;
	int power = 0;
	while (n){
 		lValue = lValue + n->data * pow( 10, power);
		power++;
		n=n->next;
	}
 	n = r->getStart();
		int rValue = 0;
		 power = 0;
	while (n){
 		rValue = rValue + n->data * pow( 10, power);
		power++;
		n=n->next;
	}
 		int answer = lValue + rValue;
 		result = new List();
		while (answer){
		
			int reminder = answer%10;
			answer = answer/10;
 			result->addNodeAtStart(reminder);
		
		}
		cout << "Output :";
		result-> printAll();
		cout << endl;
}

int main(){
 	Node *n = new Node(5);
 	List *l= new List(n);
	l->addNodeAtStart(1);
	l->addNodeAtStart(3);
 	n = new Node(2);
	List *r = new List(n);
	r->addNodeAtStart(9);
	r->addNodeAtStart(5);
 	cout << " Input : (";
	l->printAll();
	cout << ") + (" ;
	r->printAll();
	cout << ")" << endl;
	List *result;
	add(l,r,result);
 		
}