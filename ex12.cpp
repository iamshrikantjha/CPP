//Linked List
#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
};

void append(Node **head_ref, int new_data)
{
    // Initialize a new virtual node
    Node *new_node = new Node();
    // put in the data
    new_node->data = new_data;
    if (*head_ref == NULL)
    {
        *head_ref = new_node;
        return;
    }
    while(*head_ref!=NULL)
    {
        last = last -> next;
    }
}

//Driver Code
int main()
{

    return 0;
}