//Write code to remove duplicates from an unsorted linked list
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
	void removeDuplicates(){
		Node *n = start;
		Node *previous ;
		std::map<int, bool> nodes;
		std::map<int, bool>::iterator it;
		while (n){
 			it = nodes.find(n->data);
			if(it != nodes.end()){
 				if(n->next){
					previous->next  = n->next;	
				}else{
					previous->next = NULL;
				}
				delete(n);
				n = previous;
			}else{
 				nodes[n->data] = true;
			}
			previous = n;
			n= n->next;
		}
	}
};

int main(){
 	Node *n = new Node(1);
 	List l(n);
	l.addNodeAtStart(33);
	l.addNodeAtStart(2);
	l.addNodeAtStart(2);
	l.printAll();
	l.removeDuplicates();
	l.printAll();
	
}