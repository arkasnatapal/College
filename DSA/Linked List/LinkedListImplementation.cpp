#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int val)
    {
        data = val;
        next = NULL;
    }
};

class List
{
    Node *head;
    Node *tail;

public:
    List()
    {
        head = tail = NULL;
    }
    void push_front(int val) // adding number before the 1st number in the list
    {
        Node *newNode = new Node(val);

        // Case 1: List is empty
        if (head == NULL)
        {
            head = tail = newNode;
            return;
        }
        // Case 2: List is not empty
        else
        {
            newNode->next = head;
            head = newNode;
        }
    }

    void push_back(int val) // Entering Value in the last of the LL
    {
        Node *newNode = new Node(val);
        // Case 1 : if no node is present
        if (head == NULL)
        {
            head = tail = newNode;
        }
        // Case 2 : if there is nodes present in the LL
        else
        {
            tail->next = newNode;
            tail = newNode;
        }
    }

    void printll()
    {
        Node *temp = head;
        while (temp != NULL)
        {
            cout << temp->data << "->";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }
};

int main()
{

    List ll;
    ll.push_front(1);
    ll.push_front(2);
    ll.push_back(3);
    ll.printll();

    return 0;
    return 0;
}