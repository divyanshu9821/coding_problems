#include <iostream>
using namespace std;

struct node
{
    int data;
    node *next = NULL;
};

int main()
{
    node *l10 = new node(); // head l1
    node *l11 = new node();
    node *l12 = new node();
    l10->data = 1;
    l11->data = 2;
    l12->data = 3;
    l10->next = l11;
    l11->next = l12;

    node *l20 = new node(); // head l2
    node *l21 = new node();
    node *l22 = new node();
    l20->data = 1;
    l21->data = 2;
    l22->data = 3;
    l20->next = l21;
    l21->next = l22;

    node *l1 = l10;
    node *l2 = l20;

    int carry = 0;

    node *newList;
    node *prev = newList;

    while (l1 || l2)
    {

        int add = carry;
        if (l1)
        {
            add += l1->data;
            l1 = l1->next;
        }
        if (l2)
        {
            add += l2->data;
            l2 = l2->next;
        }
        int val = add % 10;
        int carry = add / 10;

        node *newNode = new node();
        newNode->data = val;
        prev->next = newNode;
        prev = newNode;
    }

    prev = newList;
    while (prev)
    {
        cout << prev->data << " ";
        prev = prev->next;
    }
}