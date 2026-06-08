#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int x)
    {
        data = x;
        next = NULL;
    }
};

class LinkedList
{
public:
    Node *head;

    LinkedList()
    {
        head = NULL;
    }

    void insertFront(int x)
    {
        Node *temp = new Node(x);
        temp->next = head;
        head = temp;
    }
    
    void insertEnd(int x)
    {
        Node *node = new Node(x);
        if (head == NULL)
        {
            head = node;
            return;
        }
        Node *temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = node;
    }
    
    void insertPosition(int pos, int x)
    {
        if (pos == 1)
        {
            Node *temp = new Node(x);
            temp->next = head;
            head = temp;
            return;
        }
        Node *curr = head;
        for (int i = 1; i < pos - 1; i++)
        {
            curr = curr->next;
        }
        Node *temp = new Node(x);
        temp->next = curr->next;
        curr->next = temp;
    }


    void deleteFront()
    {
        if (head == NULL) return;
        
        Node *temp = head;
        head = head->next;
        delete temp;
    }

    void deleteLast()
    {
       
    }

    void deletePosition(int pos)
    {
    }

    bool search(int key)
    {
        Node *temp = head;
        while (temp != NULL)
        {
            if (temp->data == key) return true;
            temp = temp->next;
        }
        return false;
    }

    int length()
    {
        int count = 0;
        Node *temp = head;
        while (temp != NULL)
        {
            count++;
            temp = temp->next;
        }
        return count;
    }
};

int main()
{
    return 0;
}
