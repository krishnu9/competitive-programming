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
    llist()
    {
        head = NULL;
        tail = NULL;
    }
    void push(int data)
    {
        Node *temp = new Node;
        temp->data = data;
        temp->next = NULL;

        if (head == NULL)
        {
            head = temp;
            tail = temp;
        }
        else
        {
            tail->next = temp;
            tail = tail->next;
        }
    }

    Node *getHead()
    {
        return head;
    }

    void display(Node *head)
    {
        if (head == NULL)
        {
            cout << "NULL" << endl;
        }
        else
        {
            cout << head->data << "->";
            display(head->next);
        }
    }
};

int main(){
    llist l1;
    l1.push(10);
    l1.push(9);
    l1.push(8);
    l1.push(7);
    l1.display(l1.getHead());

    llist l2;
    l2.push(5);
    l2.push(4);
    l2.push(3);
    l2.push(2);
    l2.display(l2.getHead());

    Node *tmp1 = l1.getHead();
    Node *tmp2 = l2.getHead();
    llist l3;
    int data3;
    while (tmp1)
    {
        data3 = tmp1->data + tmp2->data;
        l3.push(data3);
        tmp1 = tmp1->next;
        tmp2 = tmp2->next;
    }

    l3.display(l3.getHead());

}