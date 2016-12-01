#include <iostream>
using namespace std;
//Nodes and lists use public data members for convenience
//This may make some software engineers froth at the mouth

class Node
{
public:
	int value; //This could really be any type
	Node* next;
	Node* prev;
	Node(int val) {
		cout << "Node constructr!" << endl;
		this->value = val;
		this->next = (Node*)0;
		this->prev = (Node*)0;
	}
	~Node() {
		cout << "Node destructor" << endl;
		cout << "I had the value " << this->value << endl;
	}
};
class List
{

public:
	Node* head;
	Node* tail;

	List() {
		cout << "List Constructor!" << endl;
		this->head = 0;
		this->tail = 0;
	}
	~List() {
		cout << "List destructor!" << endl;
		cout << "Todo: properly delete nodes... DONE" << endl;
	}
	void insert(Node* n, Node* x) {
		//Not actually perfect: how do we prepend to an existing list?
		if (n != 0) {
			x->next = n->next;
			n->next = x;
			x->prev = n;
			if (x->next != 0)
				x->next->prev = x;
		}
		if (this->head == 0) {
			this->head = x;
			this->tail = x;
			x->prev = 0;
			x->next = 0;
		}
		else if (this->tail = n) {
			this->tail = x;
		}
	}
	void NodeDelete(int value)							//FUNCTION FOR DELETING NODES;
	{
		Node *pre = NULL, *del = NULL;					//POINTERS FOR PREVIOUS NODE AND THE NODE THAT HAS TO BE DELETED;
		if (head->value == value)						//CHECKS IF THE SELECTED NODE IS THE HEAD NODE;
		{
			del = head;									//POINTS AT THE HEAD NODE
			head = del->next;							//HEAD NODE GETS UPDATED WHERE TO POINT AT;
			delete del;									//THE NODE GETS DELETED;
		}
		pre = head;										//ASSIGNS THE PREVIOUS NODE AS HEAD;
		del = head->next;								//AND THE NEXT NODE TO BE DELETED;
		while (del != NULL)								//GOES THROUGH THE LIST AND CHECKS THE VALUE OF EACH NODE;
		{		
			if (del->value == value)					//CHECKS IF THE CHOSEN VALUE IF EQUAL TO THE POINTED NODE;
			{
				pre->next = del->next;					//ASSIGNS THE PREVIOUS NODE TO POINT AT THE NEXT ONE (UPDATES THE LIST);
				if (del == tail)						//IF THE VALUE HAPPENS TO BE THE LAST NODE, UPDATES THE TAIL;
				{
					tail = pre;
				}
				delete del;								//REMOVES THE NODE WITH THE GIVEN VALUE;
				break;
			}
			pre = del;									//POINTS THAT THE NODE THAT HAS TO BE DELETED IS NOT THE PREVIOUS ONE;
			del = del->next;							//DELETES THE NEXT NODE;
		}	
	}
	void display() {
		Node* i = this->head;
		cout << "List: ";
		while (i != 0) {
			cout << i->value << ",";
			i = i->next;
		}
		cout << endl;
	}
};

int main(int argc, char *argv[])
{
	List* l = new List();
	l->insert(0, new Node(4));
	l->insert(l->head, new Node(6));
	l->insert(l->head, new Node(8));
	l->NodeDelete(6);							//CALLS THE NodeDelete FUNCTION AND THE DELETES THE NODE WITH THE VALUE PROVIDED;
	l->display();
	delete l;
	while (true);
	return 0;
}