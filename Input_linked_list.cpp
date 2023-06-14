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
int main()
{
    int val;
    Node * head = NULL;
    while(true)
    {
        cin>>val;
        if(val==-1)
        {
            break;
        }
        insert(head,val);
    }
    print(head);
    return 0;
}