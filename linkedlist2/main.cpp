#include <iostream>

using namespace std;

class Node{
    public:
    int data;
    Node *next;
};

Node *input(Node* head, int d){
    
}

int main() {
	Node *head = NULL;
    cout<<"Enter the number of elements"<<endl;
    int n;
    cin>>n;
    cout<<"Enter elements"<<endl;
    int temp;
    cin>>temp;
    
    head= new Node();
    head->data=temp;
    head->next=NULL;
    
    for(int i{}; i<n-1; i++){
        cin>>temp;
        head= input(head, temp);
    }
    
    
    
	return 0;
}
