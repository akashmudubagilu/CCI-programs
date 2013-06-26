//Write code to remove duplicates from an unsorted linked list
#include<iostream>
 using namespace std;

struct Node {
	int data ; 
	Node * next;
	
	
	Node (int a){   	
		cout << "default constructor called"<< endl;
		data = a;
		next = NULL;
	}
  	
  	Node (Node *n){
  		cout << "copy constructor called"<< endl;
  		data = n->data;
  		next = n->next;
  	}
	
};


class List{
	Node *start;
	int count;	
	public:
	List(Node * n){cout << "in the default constructor of List"<< endl;start = n;}
		Node * getStart(){return start;}
	void printAll( ){
		Node *n = start;
		/*cout << n->data;
					n= n->next;
		cout << n->data;
		n= n->next;
		cout << n->data;*/
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
		
	
	
	}

};


bool findCircular(Node *head)
{
  Node *slower, * faster;
  slower = head;
  faster = head->next; //start faster one node ahead
  while(true) {
  
    // if the faster pointer encounters a NULL element
    if( !faster || !faster->next)
      return false;
   //if faster pointer ever equals slower or faster's next
   //pointer is ever equal to slow then it's a circular list
    else if (faster == slower || faster->next == slower)
       return true;
    else{
      // advance the pointers
       slower = slower->next;
       faster = faster->next->next;
     }
  }
}



int main(){
	cout << "started the program" << endl;
	Node *n = new Node(1);
		cout << "created node"<< endl;
	List l(n);
		l.addNodeAtStart(33);
	
 	
	l.addNodeAtStart(2);
	//l.addNode(n);
 if(findCircular(l.getStart())){
 	cout << "loop found";
 }else{
 	cout << "loop not found";
 
 }
 		


}