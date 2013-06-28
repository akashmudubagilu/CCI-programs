// Implement an algorithm to find the nth to last element of a singly linked list
#include<iostream>
#include<map>
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
	int getNthToLast(int number){
		int counter = 1;
		Node *n = start; 
		Node *follower = start;
		
		while (n->next){
			if (counter < number){
				counter++;
				n = n->next;
 			}else{
				if (counter == number){
					n = n->next;
					follower = follower->next;
				
				}
			}
		}
		return follower->data;
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
	l.addNodeAtStart(5);
	l.addNodeAtStart(6);
	l.printAll();
 	int x;
 	cout << "enter n to get nth to last element " << endl;
 	cin >> x;
 	cout << "nth to last element is " << l.getNthToLast(x) << endl;
}