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
void insert_it(Node *&head, int a)
{
    Node *newnode = new Node(a);
    if(head==NULL)
    {
        head=newnode;
        return;
    }
    Node *temp = head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
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
        temp=temp->next;
    }
    cout<<endl;
}
int main()
{
    Node *head = NULL;
    while(true)
    {
        cout<<"Option: 1 for insert"<<endl;
        cout<<"Option: 2 for print"<<endl;
        cout<<"Option: 3 for break"<<endl;
        int op;
        cin >> op;
        if(op==1)
        {
            cout<<"Insert a value: ";
            int v;
            cin>>v;
            insert_it(head, v);
        }
        else if(op==2)
        {
            print(head);
        }
        else if(op==3)
        {
            break;
        }
    }
    return 0;
}
