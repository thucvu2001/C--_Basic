#include<bits/stdc++.h>
#include <iostream>
using namespace std;
class Node
{
public: 
// khai bao data va con tro next
	int data; 
	Node* next;
};
void push_last(Node** head_ref, int new_data)
{
	Node* new_node = new Node();
	Node *last = *head_ref;
	new_node -> data = new_data;
	new_node -> next = NULL;

	 if (*head_ref == NULL)
    {
        *head_ref = new_node;
        return;
    }
    while (last->next != NULL)
    {
        last = last->next;
    }
    last->next = new_node;
    return;
}

void deleNode(Node** head_ref, int position)
{
    if (*head_ref == NULL)
        return;
    Node* temp = *head_ref;
    if (position == 0) {
        *head_ref = temp->next;
        free(temp);
        return;
    }
    for (int i = 0; temp != NULL && i < position - 1; i++)
        temp = temp->next;
    if (temp == NULL || temp->next == NULL)
        return;
    Node* next = temp->next->next;
    free(temp->next);
    
    temp->next = next;
}

void printList(Node* n)
{
    while (n != NULL) {
        cout << n->data << " ";
        n = n->next;
    }
	cout << endl;
}
int main(){
    Node* head = NULL;
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i<n; i++){
        cin>> a[i];
       push_last(&head,a[i]);
        
    }
    int x;
    cin>>x;
   deleNode(&head,x);
   printList(head);


}
