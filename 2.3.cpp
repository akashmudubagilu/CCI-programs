//Implement an algorithm to delete a node in the middle of a single linked list, given only access to that node
#include<iostream>
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
	List(Node * n){start = n;}
	Node * getStart(){return start;}
		
	void printAll( ){
		Node *n = start;
 		while (n){
			cout << n->data << " --> ";
			n= n->next;
		}
		cout << endl;
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
	void deleteNode(Node *n){
		if(!n->next){
			cout << "last node can not be deleted like this"<< endl;
			return;
		}
		Node * temp ; 
		n->data = n->next->data;
		temp = n->next;
		n->next = n->next->next;
		delete(temp); 
	}
 };


int main(){
 	Node *n = new Node(1);
 	List l(n);
	l.addNodeAtStart(33);
	l.addNodeAtStart(2);
	l.addNodeAtStart(2);
	l.addNodeAtStart(3);
	l.addNodeAtStart(4);
 	l.deleteNode(n);
	l.addNodeAtStart(5);
	n = new Node(333);
	l.addNodeAtStart(6);
	l.addNode(n);
	l.printAll();
 	l.deleteNode(n);
	l.printAll();
}