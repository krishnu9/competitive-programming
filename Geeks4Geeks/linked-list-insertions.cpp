#include <bits/stdc++.h>

using namespace std;

struct Node
{
    int data;
    Node *next;
};

class llist
{
    Node *head, *tail;
    public:
    llist(){
        head = NULL;
        tail = NULL;
    }
    void push(int data){
        Node *temp = new Node;
        temp->data = data;
        temp->next = NULL;

        if(head == NULL)
        {
            head = temp;
            tail = temp;
        }
        else{
            tail->next = temp;
            tail = tail->next;
        }
    }

    Node* getHead(){
        return head;
    }

    void display(Node *head){
        if(head==NULL){
            cout<<"NULL"<<endl;
        }
        else
        {
            cout<<head->data<<"->";
            display(head->next);
        }
        cout<<endl;
    }
};

Node* insertafterN(Node* head, int data, int pos){
    Node *newNode = new Node;
    newNode->data = data;
    if(pos==0){
        newNode->next=head;
        head = newNode;
    }
    else{
        Node *temp = new Node;
        int count=1;
        temp = head;
        while(count!=pos){
            temp = temp->next;
            count++;
        }
        newNode->next = temp->next;
        temp->next = newNode;
    }
    return head;
}

int main(){
    llist l1;
    l1.push(10);
    l1.push(9);
    l1.push(8);
    l1.push(7);
    l1.display(l1.getHead());
    l1.display(insertafterN(l1.getHead(), 11, 0));
}