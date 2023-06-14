#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
        int value;
        Node* next;
        Node(int value)
        {
            this->value=value;
            this->next=NULL;
        }
};
void insert(Node *&head, int a)
{
    Node *newnode = new Node(a);
    if(head==NULL)
    {
        head=newnode;
        return;
    }
    Node *temp = head;
    while(temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next=newnode;
}
void print(Node *head)
{
    Node *temp=head;
    cout<<"Printed Node: ";
    while(temp!=NULL)
    {
        cout<<temp->value << " ";
        temp = temp->next;
    }
    cout << endl;
}
void insert_at_any_position(Node* head, int pos, int v)
{
    Node* newnode = new Node(v);
    Node* temp = head;
    for(int i=0;i<pos-1;i++)
    {
        temp = temp->next;
    }
    newnode->next=temp->next;
    temp->next=newnode;
    cout<<endl<<endl<<"Inserted at position: "<<pos<<endl<<endl;
}
int main()
{
    Node *head = NULL;
    while(true)
    {
        cout<<"Option: 1 for insert "<<endl;
        cout<<"Option: 2 for print the linked list: "<<endl;
        cout<<"Option: 3 insert at any position: "<<endl;
        cout<<"Option: 4 for break:  "<<endl;
        int op;
        cin >> op;
        if(op==1)
        {
            cout<<"Intsert a value: ";
            int v;
            cin>>v;
            insert(head, v);
        }
        else if(op==2)
        {
            print(head);
        }
        else if(op==3)
        {
            int pos,v;
            cout<<"Enter the position: ";
            cin>>pos;
            cout<<"Enter the value: ";
            cin>>v;
            insert_at_any_position(head,pos,v);
        }
        else if(op==4)
        {
            break;
        }
    }
    return 0;
}