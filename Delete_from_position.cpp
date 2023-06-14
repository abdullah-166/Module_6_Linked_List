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
void insert_at_head(Node *&head, int v)
{
    Node *newnode = new Node(v);
    newnode->next=head;
    head=newnode;
    cout<<endl<<endl<<"Inserted at head"<<endl<<endl;
}
void delete_from_position(Node *head, int pos)
{
    Node* temp=head;
    for(int i=1;i<=pos-1;i++)
    {
        temp=temp->next;
    }
    Node* deletenode = temp->next;
    temp->next=temp->next->next;
    delete deletenode;
}
int main()
{
    Node *head = NULL;
    while(true)
    {
        cout<<"Option: 1 for insert at tail"<<endl;
        cout<<"Option: 2 for print the linked list"<<endl;
        cout<<"Option: 3 for insert at any position"<<endl;
        cout<<"Option: 4 for insert at head"<<endl;
        cout<<"Option: 5 for delete from position"<<endl;
        cout<<"Option: 6 for terminate"<<endl;
        int op;
        cin >> op;
        if(op==1)
        {
            cout<<"Intsert a value at tail ";
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
            if(pos==0)
            {
                insert_at_head(head,v);
            }
            else
            {
                insert_at_any_position(head,pos,v);
            }
        }
        else if(op==4)
        {
            int v;
            cout<<"Enter the value ";
            cin>>v;
            insert_at_head(head,v);
        }
        else if(op==5)
        {
            int pos;
            cout<<"Enter the position ";
            cin>>pos;
            delete_from_position(head,pos);
        }
        else if(op==6)
        {
            break;
        }
    }
    return 0;
}