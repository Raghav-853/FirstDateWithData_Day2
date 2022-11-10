#include <iostream>

using namespace std;

class Node{
    public:
    int data;
    Node *next;
};

Node *input(Node* head, int d){
    Node *ptr=head;
    Node *temp= new Node();
    temp->data=d;
    temp->next=NULL;
    while(ptr->next!=NULL){
        ptr = ptr->next;
    }
    ptr->next=temp;
    return head;
}

void printlist(Node* root){
    while(root!=NULL){
        cout<<root->data<<"->";
        root=root->next;
    }
}

Node *insert_begin(Node* root, int d){
    Node* ptr= new Node();
    ptr->data=d;
    ptr->next=root;
    
    root=ptr;
    return root;
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
    printlist(head);
    
    
	return 0;
}
